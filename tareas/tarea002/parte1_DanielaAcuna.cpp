#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int aumentar(int turbinas[], int mw, int capacidad_max);
int reducir(int turbinas[], int mw, int capacidad_max);
string consultar(int turbinas[]);
int total(int turbinas[]);
int mayor_aporte(int n, int turbinas[]);

int inicializar(int opcion, int n, int capacidad_max, int turbinas[], int mw){

cout << "Ingrese la cantidad de turbinas: ";
cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Ingrese la capacidad maxima de cada turbina: ";
        cin >> capacidad_max;
        }
        for (int i = 0; i < n; i++){
        cout << "Ingrese cuanto desea añadir a cada turbina: ";
        cin >> mw;

    }
}

int main(){
    int opcion ;
    int n; 
    int capacidad_max;
    int turbinas[100] ={};
    int n_turbina;
    int mw;
    cout << inicializar(opcion, n, capacidad_max, turbinas, mw);
    cout << "-- Sistema de Control  --";
    cout << "1. Aumentar generacion ";
    cout << "2. Reducir generacion";
    cout << "3. Consultar turbina ";
    cout << "4. Generacion total de la planta ";
    cout << "5. Turbina con mayor aporte ";
    cout << "6. Salir ";
    cin >> opcion;
    if (opcion = 1){

        for (int i = 0; i <capacidad_max; i++){
            turbinas[i] = n_turbina;
        cout << "Opcion: 1";
        cout << "Turbina: " <<n_turbina;
        cin>> n_turbina;
        cout << aumentar(turbinas, n_turbina, mw);
    }
    }else if (opcion == 2){
        cout << "Opcion: 2";
        cout << "Turbina: " <<n_turbina;
        cin>> n_turbina;
        cout << reducir(turbinas,  mw,  capacidad_max);
        }else if (opcion == 3){
            cout << "Opcion: 3";
            cin>> n_turbina;
            cout << "Turbina" << n_turbina;
            cout << consultar(n,  n_turbina, turbinas,  mw,  capacidad_max);

        }else if (opcion == 4){
            cout << "Opcion: 4";
            cin>> n_turbina;
            cout << total(turbinas); 
        }else if (opcion == 5){
            cout << "Opcion: 5";
            cout << mayor_aporte(n, turbinas);
        }else if (opcion == 6){
            //No se como hacer el salir :(
        }
    }
int aumentar(int turbinas[], int mw, int capacidad_max){ 
        for (int i = 0; i <capacidad_max; i++){
        if (turbinas[i] + mw > capacidad_max){
            cout << "Error: Capacidad maxima excedida";
    }else{
        return turbinas[i] + mw;
    }
        }
}
int reducir(int turbinas[], int mw, int capacidad_max){
        for (int i = 0; i <capacidad_max; i++){
        if (turbinas[i] - mw <0){
            cout << "0";
        }
        else{
            return turbinas[i] - mw;
        }
    }


}

int consultar(int n, int n_turbina, int turbinas[], int mw, int capacidad_max ){

        for (int i = 0; i < n; i++){
            turbinas[i] = n_turbina;

        }
        cout << aumentar(turbinas, mw, capacidad_max );
        cout << reducir(turbinas,  mw,capacidad_max);

    }
int total(int capacidad_max, int turbinas[]){
    int contador = 0;
    for(int i = 0; i< capacidad_max; i++){
        contador ++;
        return contador;

    }
}
int mayor_aporte(int n, int turbinas[]){
    int max_valor;
    for (int i = 0; i < n; i++){
        if (max_valor > turbinas[i]){
            max_valor = turbinas[i];
            return max_valor;
        }
    }



}


