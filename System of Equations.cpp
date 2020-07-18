#include <iostream>
using namespace std;
long long int n=0, m=0, ans=0;
int main() {
    cin >> n >> m;
    for (int i = 0; i <= max(n, m); i++) {
        for (int j = 0; j <= max(n, m); j++) {
            if ( ((i * i) + j) == n && ((j * j) + i) == m) {
                ans++;
            }
        }
    }
    cout << ans;
}
