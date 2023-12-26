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
    struct Rectangle *P=&r1;

    P->length=20;
    cout<<r1.length<<endl;

    return 0;
}