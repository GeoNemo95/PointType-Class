#include <iostream>
template <class T>
class Pnt_Type{
private:
  T x,y;
public:
  Pnt_Type(T x_cord=0, T y_cord=0){
    x=x_cord;
    y=y_cord;
  }
  void set_x(T x_cord, T y_cord){
    x=x_cord;
    y=y_cord;
  }
  T fnd_point(){
    
  }
};

int main(){
  Pnt_Type p1;
  p1.set_x(0,0);
  
}