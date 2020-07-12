#include "iostream"

using namespace std;

const int longCad = 20; //estructura establecida
struct costoPorArticulo{
        char nombreArticulo[longCad + 1];
        int cantidad;
        float precio;
        float costoPorArticulo;
        };

void datosArticulo(int n, costoPorArticulo array[]);
float cosArt(int n, costoPorArticulo array[]);
void despliegue(costoPorArticulo array[], int n);
float TotalCompra(int n, costoPorArticulo array[]);
//funciones del proceso


int main(){
    int n; //cantidad de articulos a procesar
    cout<<"PROCESAMIENTO DE FACTURA DE COMPRA"<<endl;
    cout<<"Ingrese el n"<<char(163)<<"mero de art"<<char(161)<<"culos: ";
    cin>>n; 
    n++; // para empezar en articulo 1 en las funciones y que no afecte en la cantidad
    costoPorArticulo array[n]; //struct & arreglo 
        datosArticulo(n, array);
        cosArt(n, array);
        
    cout<<"____________________________________"<<endl;
    cout<<"        Detalles de compra"<<endl;
    cout<<"____________________________________"<<endl;
    despliegue(array, n);
    cout<<"____________________________________"<<endl;
    float total;
    total= TotalCompra(n, array);
    cout<<"TOTAL: $"<<total<<endl;
    float billete, cambio; ////ingresar el billete con el que se compra para saber el cambio
    cout<<"Recibido: $"; 
    cin>>billete;
    cambio= billete-total;
    cout<<"Cambio: $"<<cambio<<endl;
    cout<<"Gracias por su compra"<<endl;

}

void datosArticulo(int n, costoPorArticulo array[]){ //funcion que rellena los datos del articulo
    
    for(int i=1; i<n;i++){ 
        cin.ignore(256,'\n'); 
        //antes de la llamada de getline limpia el espacio de memoria temporal hasta el salto de linea, sin esto no funciona
        cout<<"Ingrese los datos del art"<<char(161)<<"culo "<<i<<endl;
        cout<<"Nombre: ";
        cin.getline(array[i].nombreArticulo,20,'\n'); //20 longitud 
        cout<<"Cantidad: ";
        cin>>array[i].cantidad;
        cout<<"Precio: $";
        cin>>array[i].precio;

    }

}

float cosArt(int n, costoPorArticulo array[]){
    //multiplicacion de cantidad de articulos por el precio
    for(int i=1;i<n;i++){
        array[i].costoPorArticulo= array[i].cantidad*array[i].precio;
    }
    return array[1].costoPorArticulo;
}

void despliegue(costoPorArticulo array[], int n){ //despliegue de cantidades 
    for(int i=1;i<n;i++){
         cout<<"____________________________________"<<endl;
        cout<<"Art"<<char(161)<<"culo "<<i<<endl;
        cout<<"____________________________________"<<endl;
        cout<<array[i].nombreArticulo;
        cout<<" ("<<array[i].cantidad<<")"<<endl; //muestra la cantidad entre parentesis
        cout<<"Precio: $"<<array[i].precio<<endl; 
        cout<<"Costo por art"<<char(161)<<"culo: $"<<array[i].costoPorArticulo<<endl;

    }
}


float TotalCompra(int n, costoPorArticulo array[]){
    float acum; //acumula el total
    for(int i=1;i<n;i++){
        acum+=array[i].costoPorArticulo;
    }
return acum;
}
