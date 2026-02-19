#include <iostream>
#include <string>
using namespace std;

void swap(char *a, char *b);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n, m;
    cin >> n >> m;
    
    swap(n[0], n[2]);
    swap(m[0], m[2]);
    
    int max = (stoi(n) > stoi(m)) ? stoi(n) : stoi(m);
    cout << max;
    
    return 0;
}

void swap(char *a, char *b){
    char *t;
    t = a;
    a = b;
    b = t;
}