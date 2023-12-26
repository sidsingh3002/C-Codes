#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x, y;
    cin >> t;
    while (t != 0)
    {
        cin >> x >> y;
        if (x > y)
        {
            cout << "A" << endl;
        }
        else if (y > x)
        {
            cout << "B" << endl;
        }

        t--;
    }
    return 0;
}
