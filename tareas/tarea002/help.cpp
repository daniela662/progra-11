#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int calcular_hora_cruda(int h, int t);
int calcular_horabien(int p, int q, int h, int t);

int main (){
    int p, q, h, t;
    cout << "Ingrese la hora incial:";
    cin >> p;
    cout << "Ingrese la hora final:";
    cin >> q;
    cout << "Ingrese la hora actual: ";
    cin >> h;
    cout << "Ingrese la cantidad de horas a añadir: ";
    cin >> t;
    cout  << calcular_horabien(p, q, h, t);
}
int calcular_hora_cruda(int h, int t){
    int hora = h + t;
    return hora;

}

int calcular_horabien(int p, int q, int h, int t){
    int hora = calcular_hora_cruda(h, t);
    int rango = q - p + 1;
return p + (hora - p) % rango;

    }



