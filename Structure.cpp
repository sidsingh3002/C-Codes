#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;

};

int main()
{
    struct Rectangle r1={10,5};
    int c=r1.length*r1.breadth;
    cout<<c<<endl;

    return 0;
}