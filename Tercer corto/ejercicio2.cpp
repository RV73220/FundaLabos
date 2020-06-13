#include "iostream"

using namespace std;

string mensaje(int n); //funcion que despliega las pistas

int main(){
    int n, intentos; 
        cout<<"Adivina el numero magico"<<endl; //20
        cout<<"El numero esta entre 1 y 100, tienes 5 intentos"<<endl;
        cout<<"Presiona 0 si quieres finalizar"<<endl;
    intentos=0;
    while(intentos<5){
        cout<<endl<<"Ingresa un numero"<<endl;
        cin>>n;
        intentos++;
        cout<<mensaje(n);
        cout<<endl<<"Intento "<< intentos <<" de 5"; //indica los intentos restantes
        if(n==0){ //para cerrar el programa
        intentos=5;
        cout<<endl<<"El programa ha finalizado";
        }
        if(n==20){ //para cerrar el programa
        intentos=5;
        }
    }
}
string mensaje(int n){ //funcion pistas
    if(n==20){
        return "Adivinaste el numero magico!";
    }
    else if(n>20){
         return "El numero es menor que el digitado";
    }
    else if(n<20){
        return "El numero es mayor que el digitado";
    }
    else{
        return "El numero está entre 1 y 100";
    } 
}