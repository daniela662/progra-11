#include <iostream>
#include <string>
using namespace std;
int nino = 2500;
int adulto = 4000;
int adulta_mayor = 2000; 
int edad;
string dia;


int main() {
    cout<< "Ingrese su edad: ";
    cin>> edad;
    cout<< "Ingrese día en cuál desea asistir (1- día entre semana), (2- fin de semana): ";
    cin>> dia;
    if (dia == "1" && edad <= 12){
        cout<< "Categoria: niño";
        cout << "Recargo: 0"



    if ( edad <= 12){
        cout<< "Categoría: niño";
        }else if ( edad > 12 && edad <= 64){
            cout<< "Categoría: adulto";
            }else if ( edad > 65){
                cout<< "Categoría: adulta mayor";


    }





}