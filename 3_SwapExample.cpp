#include <iostream>

using namespace std;

template <typename T>
void swap(T *a, T *b)
{
  T temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int a = 3;
  int b = 4;
  cout << "before swapping: " << a << "," << b << endl;
  swap(&a, &b);
  cout << "after swapping: " << a << ", " << b << endl;
  return 0;
}