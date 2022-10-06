#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 1;
    while (x <= n)
    {
        long long int i, c;
        cin >> i;
        if (i == 1)
        {
            c = 1;
        }
        else
        {
            c = i / 3;
        }
        cout << "Case #"
             << "" << x << ": " << c << endl;
        x++;
    }
}