#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a; //Refrence

    cout<<a<<endl;
    r++;
    cout<<r<<endl;

    return 0;
} 