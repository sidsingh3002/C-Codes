#include <iostream>
#include <bits/stdc++.h>

#include <cmath>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    float n, x;
    while (t != 0)
    {
        cin >> n >> x;
        if (n > 0)
        {
            if (n <= 6)
            {

                cout << x << endl;
            }
            else
            {
                float s;
                s = n / 6;

                cout << ceil(s) * x << endl;
            }
        }

        t--;
    }
    return 0;
}
