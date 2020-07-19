#include <iostream>
using namespace std;

template <class T>
void swap(T &a, T &b)
{
  T tmp{std::move(a)};
  a = std::move(b);
  b = std::move(tmp);
}
int main()
{
  string x{"abc"};
  string y{"de"};

  swap(x, y);

  cout << x << " " << y << endl;
  return 0;
}