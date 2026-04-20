#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a, b, c, d;
   cin >> a >> b >> c >> d;
   
   int x = a * d + b * c;
   int y = b * d;
   int m = gcd(x, y);
   
   if (m > 1) {
       while (x % m == 0 && y % m == 0) {
           x /= m;
           y /= m;
       }
   }
   
   cout << x << ' ' << y;

    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } 
    else {
        return gcd(b, a % b);
    }
}