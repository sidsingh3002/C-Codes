#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c = a + b;

    return c;
}

int main()
{
    int num = 10, num1 = 20, sum;
    sum = add(num, num1);
    cout << sum << endl;
    return 0;
}
