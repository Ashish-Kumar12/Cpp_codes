#include <iostream>

using namespace std;

int main() {

    long long int n=0, m=0, i=0, time=0;

    cin >> n >> m;
    long long int task[m+10];
    task[0] = 1;

    for(i=1; i<=m; i++)
    {
        cin >> task[i];
        if(task[i] >= task[i-1])
            time += task[i] - task[i-1];
        else
            time += (n - task[i-1] + task[i]);
    }

    cout << time << endl;

    return 0;
}
