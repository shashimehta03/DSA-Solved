#include <bits/stdc++.h>
using namespace std;

int solve(string &str1, string &str2) {
    size_t pos = str1.find(str2);
    if (pos != string::npos) {
        return pos;
    }
    return -1; 
}

int main() {
    string str1 = "hello World";
    string str2 = "World";
    int ans = solve(str1, str2);
    cout << ans << endl;
    return 0;
}
