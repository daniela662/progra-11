#include <iostream>
#include <string>
#include <cctype>
#include <math.h>
using namespace std;

int recibir_datos(int n, int q){
    int n = 0;
    int q;
    int contador = 0;
    string tipo_operacion;
    cout <<"Ingrese la cantidad de vagones: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
    cout << "Ingrese la cantidad de operaciones :";
    cin >> q;
    for(int i = 0; i < q; i++) {
    cout << "Tipo de operacion?:";
    cin >> tipo_operacion;
    contador ++;
    }
    return 0;
}
}  
string main(string A, int cantidad, int n , int q){
    cout << llamar_funciones(A, cantidad, n , q);
} 
string llamar_funciones(string A, int cantidad, int n , int q){ 
    cout << consultar(A, cantidad, n , q);

}
int cargar (string A, int cantidad, int n , int q){
    int h;
    for (int i = 0; i < cantidad; i++){
        cout << "Con cuanto desea cargar: ";
        return cantidad + q;
    }
}
int consultar(string A, int cantidad, int n , int q){
    for (int i = 0; i < q; i++){
        cout<< cargar( A, cantidad, n ,  q);    
    }
}


