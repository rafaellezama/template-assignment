#include <iostream>

using namespace std;

template <typename T>
T swap(T x, T y, T temp)
{
  temp = x;
  x = y;
  y = temp;
  return (x, y);
}

int main()
{
  int a = 3;
  int b = 4;
  int c;
  cout << "before swapping: " << a << "," << b << endl;
  cout << "After swapping: " << swap(a, b, c) << endl;
  return 0;
}