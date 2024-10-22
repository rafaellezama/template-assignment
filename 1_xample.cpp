#include <iostream>

using namespace std;

template <typename T>
T max_two(T x, T y)
{
  return (x > y) ? x : y;
}

int main()
{
  int a = 4;
  int b = 5;
  cout << "The max is: " << max_two(a, b) << endl;
  return 0;
}