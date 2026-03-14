/// In the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx = 18;
int a[mx];
char ch[mx];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(2);

    int n;
    cin >> n;

    int total = 0;
    int coelhos = 0;
    int ratos = 0;
    int sapos = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> ch[i];
        total += a[i];

        if (ch[i] == 'C') {
            coelhos += a[i];
        } else if (ch[i] == 'R') {
            ratos += a[i];
        } else if (ch[i] == 'S') {
            sapos += a[i];
        }
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << "Percentual de coelhos: " << (coelhos * 100.0) / total << " %" << endl;
    cout << "Percentual de ratos: " << (ratos * 100.0) / total << " %" << endl;
    cout << "Percentual de sapos: " << (sapos * 100.0) / total << " %" << endl;

    return 0;
}
