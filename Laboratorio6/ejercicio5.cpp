#include "iostream"

using namespace std;


int main(){
    int impar[100], i, datos;
        datos=0;

    for(i=1; i<=199; i++){
        if(i%2==1){
            impar[datos]= i;
            datos++;
        }
    }
    cout<<"Los primeros ";
    for(i=datos;i>=1;i--){
        cout<<impar[i]<< " " ; 
        if(i==100){ //por alguna razon me salia 100 de primero en el arreglo
           cout<<"numeros impares enteros son:"<<endl; 
        }
    }
}
