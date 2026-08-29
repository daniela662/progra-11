#include <iostream>
using namespace std;
const double G= 9.8;
double f2;
double r1; 
main() {
    double t;
    double y;
    cout << "Ingrese el tiempo en segundos: ";
    cin >> t;
    cout << "Ingrese y: ";
    cin >> y;
    if (t <0) {
    cout << "Error: El tiempo no puede ser negativo";
    }else if (y <0) {
    cout << "Error: La alutura desde la ventana no puede ser negativa";
}
    else if (y >0 && t >0) {
        r1 = (0.5*G*t*t);
        f2 = (((0.5*G*t*t)- y)*((0.5*G*t*t)- y))/(2*G);
        if ((r1) < y){
            cout << "Error: los valores ingresados implican h <= 0; el objeto no pudo haber sido soltado por encima del borde superior de la ventana.";
        }else {
            cout << "La distancia desde la ventana es: " << f2 << " m";
        }
    }
}


