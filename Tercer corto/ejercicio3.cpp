#include "iostream"

using namespace std;

bool bisiesto(int); //funcion 

int main(){   
    int year;
    
        cout << "Determine si un a"<<char(164)<<"o es bisiesto" << endl; //char(164)=ñ
        cout << "Ingrese el a"<<char(164)<<"o: " << endl;
        cin >> year;
  
    if (bisiesto(year)){
        cout << "El a"<<char(164)<<"o es bisiesto" << endl;
    } else {
        cout << "El a"<<char(164)<<"o no es bisiesto" << endl;
    }

}

bool bisiesto(int year){//funcion para determinar si es bisiesto o no
    if (year % 400 == 0) { //si es divisible entre 400
        return true;}
    else if (year % 4 == 0 && year % 100 !=0) { //si es divisible entre 4 y no entre 100
        return true;} 
    else {
        return false;}   
}