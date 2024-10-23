#include <iostream>

using namespace std;

template <typename T>
T max_three(T x, T y, T z)
{
  T max_between_numbers = (x < y) ? y : x;
  return (max_between_numbers < z) ? z : max_between_numbers;
}

int main()
{
  int a = 4;
  int b = 5;
  int c = 6;
  cout << "The max between the three numbers is: " << max_three(a, b, c);
  return 0;
}