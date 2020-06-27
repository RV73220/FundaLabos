#include "iostream"
#include "string"

using namespace std;

void codificar(char murcielago[]); //funcion que encripta

int main(){

    char murcielago[200]; //la frase tiene un limite de 200 caracteres

    cout<<"Codifique una frase a clave murci"<<char(130)<<"lago"<<endl; //char(130)=é
    cout<<"*CLAVE MURCIELAGO*"<<endl;
    cout<<"m=0, u=1, r=2, c=3, i=4, \ne=5, l=6, a=7, g=8, o=9"<<endl;
    cout << "Ingrese la palabra o frase a codificar (en min"<<char(163)<<"sculas):" << endl;
    cin.getline(murcielago, 200); //lee una linea de texto desde el teclado
    codificar(murcielago); //llama la funcion 
    
}

void codificar(char murcielago[]){

    for(int i=0;i<=200; i++){ //ciclo de cambio de letras
        switch(murcielago[i]){ //sustitucion de letras en el arreglo
            case 'm':
            murcielago[i]= '0';
                break;
            case 'u':
            murcielago[i]= '1';
                break;
            case 'r':
            murcielago[i]= '2';
                break;
            case 'c':
            murcielago[i]= '3';
                break;
            case 'i':
            murcielago[i]= '4';
                break;
            case 'e':
            murcielago[i]= '5';
                break;
            case 'l':
            murcielago[i]= '6';
                break;
            case 'a':
            murcielago[i]= '7';
                break;
            case 'g':
            murcielago[i]= '8';
                break;
            case 'o':
            murcielago[i]= '9';
                break;

        }
    }
    cout << "La frase en c"<<char(162)<<"digo murcielago es: "<<murcielago; //despliegue del encriptado

}