#include <bits/stdc++.h>

using namespace std;

int main()
{
    array<int, 5> arr = {1, 3, 4, 5, 6};

    for (auto it = arr.rbegin(); it != arr.rend(); it++)
    {
        cout << *it << " ";
    }
}
