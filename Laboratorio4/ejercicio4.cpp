#include "iostream"
#include "string.h"

using namespace std;
int main(){
    char palabra[30];
    int longitud;

    cout<<"Verifique si una palabra tiene 10 o mas caracteres y si la cantidad es par o impar \nIngrese su palabra"<<endl;
    cin>>palabra; 
    longitud= strlen(palabra);

    if(longitud<=10){
        cout<<"Tu palabra tiene menos de 10 caracteres";

    }
    else{
        cout<<"Tu palabra tiene mas de 10 caracteres";
    }

    if(longitud/2==0){
        cout<<" y el numero de caracteres es par";
    }
    else{
        cout<<" y el numero de caracteres es impar";
    }
}
