#pragma once
#include <iostream>
#include <cmath>
#include "Pnt_Type.h"
using namespace std;
template <class T>

class Crcl_Type
{
  private:
    Pnt_Type<T> cen_pnt;
    Pnt_Type<T> out_pnt;
  public:
    static const double PI;
    Crcl_Type();
    Crcl_Type(T ,T ,T ,T );
    Crcl_Type(Pnt_Type<T>, Pnt_Type<T>);
    void set_cen_pnt(T ,T );
    void set_out_pnt(T ,T );
    double calc_rad();
    double calc_area();
    double calc_circum();
    void print_crcl();
};

template <class T>
const double Crcl_Type<T>::PI=3.14159;

template <class T>
Crcl_Type<T>::Crcl_Type() : cen_pnt(), out_pnt(){}

template <class T>
Crcl_Type<T>::Crcl_Type(T x_cen, T y_cen, T x_out, T y_out): cen_pnt(x_cen,y_cen), out_pnt(x_out,y_out){}

template <class T>
Crcl_Type<T>::Crcl_Type(Pnt_Type<T> cen, Pnt_Type<T> out): cen_pnt(cen), out_pnt(out){}

template <class T>
void Crcl_Type<T>::set_cen_pnt(T x_cen, T y_cen){
  cen_pnt.set_x(x_cen);
  cen_pnt.set_y(y_cen);
}

template <class T>
void Crcl_Type<T>::set_out_pnt(T x_out, T y_out){
  out_pnt.set_x(x_out);
  out_pnt.set_y(y_out);
}

template <class T>
double Crcl_Type<T>::calc_rad(){
  return out_pnt.fnd_x() - cen_pnt.fnd_x();
}

template <class T>
double Crcl_Type<T>::calc_area(){
  return PI * pow(calc_rad(),2);
}

template <class T>
double Crcl_Type<T>::calc_circum(){
  return 2 * PI * calc_rad();
}

template <class T>
void Crcl_Type<T>::print_crcl(){
  cout << "Center: ";
  cen_pnt.print();
  cout << "Out: ";
  out_pnt.print();
  cout << "Radius: " << calc_rad() << endl;
  cout << "Area: " << calc_area() << endl;
  cout << "Circumference: " << calc_circum() << endl;
}
