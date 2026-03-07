#include <iostream>
#include <cstring>
using namespace std;

int cnt;

int recursion(const char* s, int l, int r);
int isPalindrome(const char* s);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;

        // char*를 인자로 넘기면 문자열의 시작 주소가 넘어가고
        // string을 인자로 넘기면 문자열이 전부 복사되어 시간이 걸린다.
        cout << isPalindrome(s.c_str()) << ' ' << cnt << '\n';
    }

    return 0;
}

int recursion(const char *s, int l, int r) {
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else {
        cnt += 1;
        return recursion(s, l + 1, r - 1);
    }
}

int isPalindrome(const char* s) {
    cnt = 1;
    return recursion(s, 0, strlen(s) - 1);
}