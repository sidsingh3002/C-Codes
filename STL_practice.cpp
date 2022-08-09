#include <bits/stdc++.h>

using namespace std;

int main()
{
    // vector<int> arr;
    // arr.push_back(0);
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    // arr.push_back(6);
    // arr.pop_back();
    // arr.pop_back();
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // vector<int> arr2(4, 10);

    // for (int i = 0; i < arr2.size(); i++)
    // {
    //     cout << arr2[i] << " ";
    // }

    // swap(arr, arr2);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // for (int i = 0; i < arr2.size(); i++)
    // {
    //     cout << arr2[i] << " ";
    // }

    vector<vector<int>> vec;

    vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(2);

    vector<int> vec2;
    vec2.push_back(10);
    vec2.push_back(20);

    vector<int> vec3;
    vec3.push_back(9);
    vec3.push_back(28);

    vec.push_back(vec1);
    vec.push_back(vec2);
    vec.push_back(vec3);

    for (auto it : vec)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << vec[2][1] << endl;
}
