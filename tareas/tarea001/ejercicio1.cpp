#include <iostream>
using namespace std;
const double G= 9.8;
int main() {
    double t;
    double y;
    cout << "Ingrese el tiempo en segundos: ";
    cin >> t;
    cout << "Ingrese la altura desde la ventana: ";
    cin >> y;
    if (t <0) {
    cout << "Error: El tiempo no puede ser negativo";
    }else if (y <0) {
    cout << "Error: La alutura desde la ventana no puede ser negativa";
}
    else if (y >0 && t >0) {
    cout << "Altura: " << y - (0.5*G*(t*t)) << endl;
    }
}


