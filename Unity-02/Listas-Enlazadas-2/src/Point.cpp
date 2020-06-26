#include "../include/headers/Point.h"

Point::Point(){
  x = 0;
  y = 0;
}

Point::Point(int newX, int newY){
  x = newX;
  y = newY;
}

ostream& operator<<(ostream &output, const Point &point){
  output << "(" << point.x << ", " << point.y << ")";
    return output;
}



