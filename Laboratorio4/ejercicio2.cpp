#include "iostream"

using namespace std;

int main(){
    int a;

    cout<<"Verifique si un numero es par o impar"<<endl;
    cout<<"Ingrese el numero"<<endl;
    cin>>a;

    if(a%2 == 0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es impar";
    }
}