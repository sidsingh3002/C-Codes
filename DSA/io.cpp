#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "start new" << endl;
    int x, y;
    cin >> x >> y;
    cout << "The value of x is:" << x << "and y is:" << y << endl;
    // DATA TYPES=> int,long,long long,float,double
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl;
    string str;
    getline(cin, str);
    cout << str << endl;
       return 0;
}