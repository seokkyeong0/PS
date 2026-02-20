#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string name, grade;
    double score;
    
    double total = 0;
    double mac = 0;
    
    for (int i = 0; i < 20; i++) {
        cin >> name >> score >> grade;
        
        if (grade != "P")
            total += score;
        
        if (grade == "A+")
            mac += score * 4.5;
        else if (grade == "A0")
            mac += score * 4.0;
        else if (grade == "B+")
            mac += score * 3.5;
        else if (grade == "B0")
            mac += score * 3.0;
        else if (grade == "C+")
            mac += score * 2.5;
        else if (grade == "C0")
            mac += score * 2.0;
        else if (grade == "D+")
            mac += score * 1.5;
        else if (grade == "D0")
            mac += score * 1.0;
        else
            mac += score * 0.0;
    }
    
    cout << mac / total;
    
    return 0;
}