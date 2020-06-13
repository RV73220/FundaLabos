#include "iostream"

using namespace std;

int main(){
 int a,b;

    cout<< "Verifique si un numero es divisible entre otro"<<endl;
    cout<< "Ingrese los numeros a verificar: ";
    cin>>a>>b;

 if(a%b == 0){
     cout<<"Los numeros son divisibles";
 }
else{
    cout<<"Los numeros no son divisibles";
}     



}

