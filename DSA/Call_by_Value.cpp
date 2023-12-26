#include <iostream>
using namespace std;

struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

void intialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    /* data */
    return r.length * r.breadth;
}

void changelength(struct Rectangle *r, int l)
{
    /* data */
    r->length = l;
}

int main()
{
    struct Rectangle r;

    intialize(&r, 10, 5);
    cout << area(r) << endl;
    changelength(&r, 20);
    cout << area(r) << endl;
}
