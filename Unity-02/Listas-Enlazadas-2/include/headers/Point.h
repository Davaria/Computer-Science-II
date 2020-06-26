#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;


class Point
{
  int x,y;

public:
  Point();
  Point(int, int);
  friend ostream& operator<<(ostream &output, const Point &);
  
};

#endif