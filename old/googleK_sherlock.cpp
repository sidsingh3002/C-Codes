#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x = 1;
    while (x <= t)
    {
        int L, R;
        cin >> L >> R;
        int v = min(L, R);
        int sum = 0;
        for (int i = 0; i <= v; i++)
        {
            sum += i;
        }
        cout << "Case #"
             << "" << x << ": " << sum << endl;
        x++;
    }
}