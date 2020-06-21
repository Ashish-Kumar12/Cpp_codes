#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n=0, i=0;

    cin >> n;

    double orange_in_item_percent[n], total=0.0, avg=0.0;

    for(i=0; i<n; i++)
    {
        cin >> orange_in_item_percent[i];
        total += orange_in_item_percent[i];
    }

    avg = total/n;

    cout << fixed << setprecision(12) << avg << endl;

    return 0;
}
