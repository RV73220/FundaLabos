#include "iostream"

using namespace std;

float media(float estatura[]); //promedio alturas
int comparacion(float estatura[], float media); 

int main(){

    float estatura[25]; //estudiantes
    float promedio;
    int sobre, debajo; //sobre y bajo el promedio
    int a;
    a=25; 
    cout<<"Calcule el promedio de la estatura de 25 estudiantes"<<endl;
    cout<<"Ingrese las estaturas de los estudiantes en metros"<<endl;
    for(int i=0;i<25;i++){ //ingreso de las 25 estaturas empezando del estudiante 0
        cout<<"Estudiante "<<i<<endl;
        cin>>estatura[i];
        }

    promedio= media(estatura);
    cout<<"La media es "<<promedio<<" m"<<endl;
    sobre=comparacion(estatura, promedio);
    cout<<"Estudiantes arriba del promedio: "<<sobre<<endl;
    debajo=a-sobre; //si la altura no está sobre el promedio esta debajo
    cout<<"Estudiantes debajo del promedio: "<<debajo<<endl;

}

float media(float estatura[]){

    float acum= 0.0;
    for(int i=0; i<5;i++){
        acum+=estatura[i];
    }
    float media =acum/5;
    return media;

}

int comparacion(float estatura[], float media){
    int c=0; //contador de estudiantes que estan sobre la media

  for(int i = 0; i < 25; i++) { //determina si está sobre el promedio
       if (estatura [i] > media) {
            c++;
       }
    }
    return c;

}