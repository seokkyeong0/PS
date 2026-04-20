#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

struct Algorithm {
    string name;
    int difficulty;
};

int current_tier = 0;

bool compareAlgorithms(const Algorithm& a, const Algorithm& b) {
    int diffA = abs(a.difficulty - current_tier);
    int diffB = abs(b.difficulty - current_tier);
    if (diffA != diffB) return diffA < diffB;
    return a.name < b.name;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    vector<Algorithm> algo_list(N);
    for (int i = 0; i < N; ++i) {
        cin >> algo_list[i].name >> algo_list[i].difficulty;
    }

    int M;
    cin >> M;
    map<string, int> members;
    for (int i = 0; i < M; ++i) {
        string m_name;
        int m_tier;
        cin >> m_name >> m_tier;
        members[m_name] = m_tier;
    }

    int Q;
    cin >> Q;
    string current_member_name = "";

    string dummy;
    getline(cin, dummy);

    while (Q--) {
        string line;
        getline(cin, line);
        if (line.empty()) { Q++; continue; }

        if (line == "nani ga suki?") {
            current_tier = members[current_member_name];
            vector<Algorithm> sorted_algo = algo_list;
            sort(sorted_algo.begin(), sorted_algo.end(), compareAlgorithms);
            cout << sorted_algo[1].name << " yori mo " << sorted_algo[0].name << "\n";
        }
        else {
            size_t dash_pos = line.find(" - chan!");
            if (dash_pos != string::npos) {
                current_member_name = line.substr(0, dash_pos);
                cout << "hai!\n";
            }
        }
    }

    return 0;
}