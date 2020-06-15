#include "iostream"

using namespace std;

bool bisiesto(int year);
int day(int mes, int year);

int main(){
    int dia, mes, year;
    
    cout<<"Ingrese un dia y aparecera el siguiente \nIngrese el dia:"<<endl;
    cin>>dia;
    cout<<"Ingrese el numero del mes"<<endl;
    cin>>mes;
    cout<<"Ingrese el a"<<char(164)<<"o:"<<endl;
    cin>>year;
    cout<<"La fecha ingresada es "<<dia<<"/"<<mes<<"/"<<year<<endl;
    dia++;
    if(dia>31){
        cout<<"Dia no valido"<<endl;
    }
    if(dia>day(mes,year)){
        dia=1;
        mes++;
    }
    if(mes>12){
        mes=1;
        year++;
    }
        cout<<"La fecha del dia siguiente es "<<dia<<"/"<<mes<<"/"<<year<<endl;
}
bool bisiesto(int year){//funcion para determinar si es bisiesto o no
    if (year % 400 == 0) { //si es divisible entre 400
        return true;}
    else if (year % 4 == 0 && year % 100 !=0) { //si es divisible entre 4 y no entre 100
        return true;} 
    else {
        return false;}   
    }

int day(int mes, int year){
    int dias=31;
    if (mes==4 || mes==6 || mes==9 || mes==11){
        dias=30;   
    }
    else if(mes==2){
        if(bisiesto(year)){
            dias=29;
        }
    else{
        dias=28;
    }
}
return dias;
}