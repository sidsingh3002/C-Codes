#include <iostream>

int fibonacci_last_digit(int n)
{
    if (n <= 1)
        return n;

    int prev = 0;
    int current = 1;

    for (int i = 0; i < n - 1; ++i)
    {
        int tmp_previous = prev;
        prev = current;
        current = (tmp_previous + current) % 10;
    }

    return current;
}

int main()
{
    int n;
    std::cin >> n;
    int c = fibonacci_last_digit(n);
    std::cout << c << '\n';
}
