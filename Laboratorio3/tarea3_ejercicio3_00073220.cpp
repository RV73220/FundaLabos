#include <iostream>

using namespace std;

int main(){

string producto;
float precio;
int cantidad;
float total;

cout<< "Ingrese su producto"<<endl;
cin>>producto;
cout<< "Ingrese el precio del producto"<<endl;
cin>>precio;
cout<< "Ingrese la cantidad de producto"<<endl;
cin>>cantidad;

float mult= cantidad*precio;
cout<< "Este es su total de dinero gastado "<<mult;



}
