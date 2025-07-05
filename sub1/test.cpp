#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> vt;
    string s;
    cin >> s;
    for (auto& x : s) {
        cout << x << ' ';
        vt.push_back(x);
    }
    cout << '\n';
    for (char x : vt) {
        cout << x << ' ';
    }
    cout << '\n';
    return 0;
}