#include "iostream"


using namespace std;

int hora(int hour,int minuto, int segundo);

int main(){

    int hour,minuto,segundo, hora_s;

    
    cout<<"Ingrese una hora y aparecera un segundo despues \nIngrese la hora (formato 24 horas)"<<endl;
    cin>>hour;
    cout<<"Ingrese los minutos"<<endl;
    cin>>minuto;
    cout<<"Ingrese los segundos"<<endl;
    cin>>segundo;
    segundo++;
    hora_s= hora(hour, minuto, segundo);
    
    cout<<"La hora un segundo despues es: "<<hour<<":"<<minuto<<":"<<segundo; 
}

int hora(int hour,int minuto, int segundo){
    if(segundo>=59){
        segundo=0;
        minuto=minuto++;
    }
    if(minuto>=59){
        minuto=0;
        hour=hour++;
    }
    if(hour>=59){
        hour=0;
    }
}