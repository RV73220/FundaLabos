#include "iostream"

using namespace std;

float matriz(int n, float x[][5]);
void promedio(int n, float x[][5]);

int main(){
    int n; //numero de estudiantes
    cout<<"Promedio de 'n' estudiantes\nIngrese el n"<<char(163)<<"mero de estudiantes"<<endl;
    cin>>n;
    float x[n][5]; //estudiantes, notas
    matriz(n, x);
    cout<<endl<<"Resultados";
    promedio(n, x);

}

float matriz(int n, float x[][5]){
    float notas;
    for(int i=0; i<n;i++){ //contador de estudiantes
        cout<<"Estudiante "<<i<<endl;
        for(int j=0; j<5;j++){ 
            cout<<"Calificaci"<<char(162)<<"n "<<j<<" : ";
            cin>>notas;
            x[i][j]=notas; //se introducen los valores al arreglo
        }
    }
return x[0][0];
}

void promedio(int n, float x[][5]){
    float acum;
    for(int i=0;i<n;i++){ 
        cout<<endl<<"Estudiante "<<i<<": ";
        acum=0;
        for (int j=0;j<5;j++){
            acum+= (x[i][j]*0.2); //total de las notas
        }
    cout<<endl<<"Nota final "<<acum;
    if(acum<6){
        cout<<" (Reprobado)";
    }
    else{
        cout<<" (Aprobado)";
    }
    }
}