#pragma once
#include "Crcl_Type.h"
using namespace std;

template <class T>
class Cyl_Type : public Crcl_Type<T>
{
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
    void print_cyl();
};

template <class T>
Cyl_Type<T>::Cyl_Type(): Crcl_Type<T>(), height(0){}

template <class T>
Cyl_Type<T>::Cyl_Type(T x_cen, T y_cen, T x_out, T y_out, T h) : Crcl_Type<T>(x_cen, y_cen, x_out, y_out), height(h){}

template <class T>
Cyl_Type<T>::Cyl_Type(Pnt_Type<T> cen, Pnt_Type<T> out, T h) : Crcl_Type<T>(cen, out), height(h){}

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
  double SurA = this->calc_circum() * height + 2 * this->calc_area();
  return SurA;
}

template<class T>
double Cyl_Type<T>::calc_vol(){
  double Vol = this->calc_area() * height;
  Vol = 2;
  return Vol;
}

template<class T>
void Cyl_Type<T>::print_cyl(){
  //Crcl_Type<T>::print_crcl();
  cout << "Height: " << height << endl;
  cout << "Surface Area: " << calc_sur_area() << endl;
  cout << "Volume: " << calc_vol() << endl;
}
