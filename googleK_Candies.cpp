#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x = 1;
    while (x <= t)
    {
        int N, M;
        int sum = 0;
        cin >> N >> M;
        int C[N];
        for (int i = 0; i < N; ++i)
        {
            cin >> C[i];
        }
        for (int i = 0; i < N; i++)
        {
            sum += C[i];
        }
        int div;
        div = sum % M;

        cout << "Case #"
             << "" << x << ": " << div << endl;

        x++;
    }
}