#pragma once
#include <iostream>
#include <cmath>
#include "Pnt_Type.h"
#include "Crcl_Type.h"
using namespace std;
template <class T>

class Cyl_Type{
  private:
    T height;
  public:
    Cyl_Type();
    Cyl_Type(T, T, T, T, T);
    Cyl_Type(Pnt_Type<T>, Pnt_Type<T>, T);
    void set_height(T);
    T fnd_height();
    double calc_sur_area();
    double calc_vol();
};

template <class T>
Cyl_Type<T>::Cyl_Type(): Crcl_Type<T>(), height(0){}

template<class T>
void Cyl_Type<T>::set_height(T h){
  height = h;
}

template<class T>
T Cyl_Type<T>::fnd_height(){
  return height;
}

template<class T>
double Cyl_Type<T>::calc_sur_area(){
  return Crcl_Type<T>::calc_circum() * height + 2 * Crcl_Type<T>::calc_area();
}

template<class T>
double Cyl_Type<T>::calc_vol(){
  return Crcl_Type<T>::calc_area() * height;
}
