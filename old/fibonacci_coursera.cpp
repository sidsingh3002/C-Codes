#include <iostream>
#include <cassert>



int fibonacci_fast(int n)
{
    // write your code here
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}



int main()
{
    int n = 0;
    std::cin >> n;

    
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
