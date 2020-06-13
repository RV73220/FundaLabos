#include "iostream"
using namespace std;

int descuentos(float n); //funcion descuentos

int main(){
    //variables
    int hnormales, hextras, empleados, contador; 
    float a, b, salario,total;

    cout<<"Calculo de salario \nIngrese el numero de empleados"<<endl;
    cin>>empleados; 

    contador= 1; //para que el contador comience con empleado 1
    empleados++; 
    
    do{ //calculo por empleado
    cout<<"Empleado "<<contador<<endl;
    cout<<"Ingrese sus horas de trabajo normales"<<endl;
    cin>>hnormales;
    cout<<"Ingrese sus horas extra de trabajo"<<endl;
    cin>>hextras;
    a= hnormales*1.75; //calculo de salario
    b= hextras*2.50;
    salario= a+b;
    cout<<"El salario del empleado "<<contador<< "es :$"<<salario<<endl;
    cout<<"El salario con descuentos es: $"<<descuentos(salario)<<endl; //descuentos con la funcion
    contador++; 
    }
    while(contador!=empleados);  //se repite hasta que el contador sea igual que el numero de empleados
}
//funcion descuentos
int descuentos(float n){
    if(n<=499){ //salario menor a 500
        return n*0.8975; //porcentaje 100-(0.04-0.0625) 
    }
    else{ //salario mayor a 500
       return n*0.7975; //porcentaje //100-(0.04-0.0625-0.10)
    }
}
