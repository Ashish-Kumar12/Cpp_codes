#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {

    map<int, int> ratios;
    map<int, int>::iterator itr;
    pair<int, int> maxElement(0, 0);

    ll n = 0, i = 0, m = 0, j = 0, ratio = 0;
    cin >> n;
    ll pedal[n + 10];
    for (i = 0; i < n; i++) {
        cin >> pedal[i];
    }
    cin >> m;
    ll rear[m + 10];
    for (j = 0; j < m; j++) {
        cin >> rear[j];
        for (i = 0; i < n; i++) {
            if (rear[j] % pedal[i] == 0) {
                ratio = rear[j] / pedal[i];
                ratios.insert({ratio, 0});
                ratios[ratio]++;
            }
        }
    }

    if (ratios.size() == 1) {
        itr = ratios.begin();
        maxElement.first = itr->first;
        maxElement.second = itr->second;
    } else {
        for (itr = ratios.begin(); itr != ratios.end(); itr++) {
            if (maxElement.first < itr->first) {
                maxElement.first = itr->first;
                maxElement.second = itr->second;
            }
        }
    }

    cout << maxElement.second << endl;

    return 0;
}
