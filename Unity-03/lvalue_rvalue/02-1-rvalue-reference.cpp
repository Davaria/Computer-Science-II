#include <iostream>
using namespace std;

int square(const int &number)
{
  return number * number;
}

// int square(int &number)
// {
//   return number * number;
// }

int main(int argc, char const *argv[])
{
  cout << square(2) << endl;
  return 0;
}
