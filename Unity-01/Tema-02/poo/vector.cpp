#include <iostream>
using namespace std;

class Point
{
private:
  int x;
  int y;

public:
  Point(int x1, int y1)
  {
    x = x1;
    y = y1;
  }
  // Constructor copia
  Point(Point &o)
  {
    x = o.x;
    y = o.y;
  }
  void print()
  {
    cout << x << ", " << y << endl;
  }
};

int main()
{
  Point punto1(3, 2);
  Point punto2(4, 2);
  Point punto3(5, 2);
  Point point4 = punto3;
  point4.print();
  Point arr[3] = {punto1, punto2, punto3};

  // Point *ptr = arr;
  // for (int i = 0; i < 3; i++, ptr++)
  // {
  //   ptr->print();
  // }
}