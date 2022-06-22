#include <bits/stdc++.h>
using namespace std;

long long fib(long long n)
{
    long long a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b%10;
}

// Driver code
int main()
{
    int n;
    cin >> n;

    cout << fib(n);
    return 0;
}