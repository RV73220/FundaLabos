#include "iostream"

using namespace std;

int main(){

    int a;
    cout<<"Verifique si un numero es positivo, negativo o cero"<<endl;
    cout<<"Ingrese el numero a verificar: ";
    cin>>a;

    if(a>0){
        cout<<"El numero es positivo";
    }
    else if(a<0){
        cout<<"El numero es negativo";
    }
    else{
        cout<<"El numero es cero";
    }
}
