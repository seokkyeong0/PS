#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<double> v;
    
    double max = 0;
    double result = 0;
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        double s;
        cin >> s;
        
        if(max < s)
            max = s;
        
        v.push_back(s);
    }
    
    for(auto i : v){
        result += (i / max) * 100;
    }
    
    cout << result / n;
    
    return 0;
}