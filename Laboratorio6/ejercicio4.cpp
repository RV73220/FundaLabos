#include "iostream" 

using namespace std;

void lectura(int arreglo[], int n);
void suma(int arreglo[], int arreglo2[], int n, int arreglo3[]);
void resultado(int arreglo[], int arreglo2[], int n, int arreglo3[]);

int main(){
    int n; //n=longitud 

    cout<<"Ingrese la longitud de los arreglos: ";
    cin>>n; 
    int arreglo[n], arreglo2[n], arreglo3[n];

    cout<<"Arreglo 1 \nIngrese los elementos"<<endl;
    lectura(arreglo, n);
    cout<<endl<<endl<<"Arreglo 2 \nIngrese los elementos"<<endl;
    lectura(arreglo2, n);

    suma(arreglo, arreglo2,n,arreglo3);
    cout<<endl<<endl<<"Arreglo 3"<<endl;
    resultado(arreglo,arreglo2, n,arreglo3);

}

void lectura(int arreglo[], int n){
   
    arreglo[n]; 
    for(int i=0;i<n;i++){
        cout<<"Ingrese el valor de la posicion "<<i<<": ";
        cin>>arreglo[i];
    }
    cout << "Los elementos del arreglo son: "; 
    for ( int i = 0 ;i<n ;i++){
    cout << arreglo[i] << " " ; }
}

void suma(int arreglo[], int arreglo2[], int n, int arreglo3[]){
    arreglo[n];
    arreglo2[n];
    arreglo3[n];
    for(int i=0;i<n; i++)
    {
        arreglo3[i] = arreglo[i] + arreglo2[i]; 
    }
}

void resultado(int arreglo[], int arreglo2[], int n, int arreglo3[]){
    arreglo[n];
    arreglo2[n];
    arreglo3[n];
    for(int i = 0;i <n;i++)
    {
        
        cout << "La suma de los elementos de las posiciones " <<i<< " en Arreglos 1 y 2 es igual a: " << arreglo3[i];
        cout <<endl;
    }
    cout << "Los elementos del arreglo son: "; 
    for (int i = 0 ;i<n ;i++){
    cout << arreglo[i] << " " ; 
    }
}