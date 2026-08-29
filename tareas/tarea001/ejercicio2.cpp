#include <iostream>
#include <string>
using namespace std;
main() {
    double v, t;
    double vs, m;
    const double temp = -273.15;
    const double x = 0.6;
    const double h = 331;
    string regimen;
    cout << "Ingrese la velocidad del objeto: ";
    cin >> v;
    cout << "Ingrese la temperstura del aire: ";
    cin >> t;
    if (v < 0) {
    cout << "Error: La velocidad no puede ser negativa";
    }else if (t < temp) {
    cout << "Error: La temperatura del aire no puede ser menor a -273.15";
}
    else if (v >0 && t >temp) {
        vs = h +( x*t);
        m = v/vs;
    
    if (m < 0.8) {
        regimen = "Subsónico";
        }else if (m >= 0.8 && m < 1.2) {
        regimen =  "Transónico";
        }else if (m >= 1.2 && m <= 5.0) {
            regimen = "Supertransónico";
        }else if (m >=5.0) {
            regimen = "Hipertransónico";
    }
    cout << "vs: " << vs << " m/s, ";
    cout << "M: " << m << endl;
    cout << "Regimen: " << regimen << endl;
    }
}