#include <iostream>
using namespace std;
long long lcm_naive(int a, int b)
{
  for (long l = 1; l <= (long long)a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long)a * b;
}

long long gcd(long long x, long long y)
{
  long long a = std::max(x, y);
  long long b = std::min(x, y);
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
  long long g = gcd(a, b);

  return (a * b) / g;
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << lcm(a, b) << endl;
  return 0;
}
