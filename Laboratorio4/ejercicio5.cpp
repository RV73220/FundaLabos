#include "iostream"
#include "string.h"

using namespace std;

int main(){
    string palabra, letra1, letrax;
    int longitud;

    cout<<"Verifique si una palabra comienza y termina con la misma letra \nIngrese su palabra: ";
    cin>>palabra;
    letra1= palabra[0];
    longitud= palabra.length();
    letrax= palabra[longitud-1];

    if(letra1==letrax){
        cout<<"La palabra empieza y termina por la misma letra";

    }
    else{
        cout<<"La palabra no empieza y termina por la misma letra";

    }
    
}