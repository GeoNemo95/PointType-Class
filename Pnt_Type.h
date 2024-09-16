#pragma once
#include <iostream>
#include <math.h>
using namespace std;
template <class T>

class Pnt_Type{
private:
  T x;
  T y;
public:
  Pnt_Type(){x=0,y=0;}
  Pnt_Type(T x_ax, T y_ax) : x(x_ax), y(y_ax){ ; }
  void set_x(T x_ax){ x=x_ax;}
  void set_y(T y_ax){ y=y_ax;}
  void set_pnt(){
    x = x_ax;
    y = y_ax;
  }
  T fnd_x(){return x;}
  T fnd_y(){return y;}
  void fnd_pnt(T& x_ax, T& y_ax){
    x_ax = x;
    y_ax = y;
  }
  double operator -(Pnt_Type<T> op2){
    double distance = sqrt(pow(x-op2.x,2)+pow(y-op2.y,2));
    return distance;
  }
};