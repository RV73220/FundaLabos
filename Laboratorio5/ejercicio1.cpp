#include "iostream"

using namespace std;

int MCD(int mayor, int menor, int residuo);
int main(){
    int mayor, menor, residuo;
    cout<< "MCD de dos numeros \nIngrese el numero mayor"<<endl;
    cin>>mayor;
    cout<< "Ingrese el numero menor"<<endl;
    cin>>menor;

    cout<<"EL MCD es: "<<MCD(mayor, menor, residuo)<<endl;

}
int MCD(int mayor, int menor, int residuo){
    do{
        residuo= mayor%menor;
        if(residuo !=0){
            mayor=menor;
            menor=residuo;

        }
    }
    while(residuo != 0);
    return menor;
}