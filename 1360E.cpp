#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 5e1 + 5;
int t, n;
string a[MAX_N];


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool flag = true;
        for (int i = 0; i < n - 1 && flag; i++)
            for (int j = 0; j < n - 1 && flag; j++)
                if (a[i][j] == '1' && a[i + 1][j] == '0' && a[i][j + 1] == '0')
                    flag = false;
        cout << (flag? "YES": "NO") << endl;
    }
}