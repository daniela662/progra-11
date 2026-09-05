
#include <iostream> 
#include <vector> 
#include <string> 
#include <queue> 
#include <stack> 
#include <algorithm> 
#include <set> 
#include <numeric>
#include <cmath>
using namespace std; 

class EstacionMeteorologica {
private:
    string nombre;
    vector <double> temperatura;

public:

    EstacionMeteorologica() {
        this->nombre = "Estacion sin nombre";
    }
    EstacionMeteorologica(string nombre) {
        this->nombre = nombre;
    }
    bool registrarLectura(double temp) {
        if (-50 <= temp && temp <= 60){
            temperatura.push_back(temp);
        
        return true;
        }
            else {

            return false;
            
 
        }
    }
    double promedio(){
        if (temperatura.empty()){
            cout<<"Sin lecturas registradas"<<endl;
            return 0;
        }
        double suma = accumulate(temperatura.begin(), temperatura.end(), 0);  
        double p = round(suma/ temperatura.size());
        return p;
    }
    double maxima(){
        if (temperatura.empty()) {
            return 0;
        }

        double maximo = *max_element(temperatura.begin(), temperatura.end()); 
        return maximo;
    }
   int  getCantidadLecturas(){
    return temperatura.size();
   }
   string getNombreEstacion(){
    return nombre;
   }
}
;

int main(){
    string nombre;
    getline(cin, nombre);
    EstacionMeteorologica esta(nombre);
    int m;
    cin >> m;
    for (int i = 0; i < m; i++){
        string comando;
        cin>>comando;
        if (comando == "registrar"){
            double temp;
            cin>> temp;
            if (esta.registrarLectura(temp)) {
                cout << "Lectura registrada: " << temp << endl;
             } else{
                    cout << "Error: la temperatura debe estar entre -50 y 60"<<endl;
    }

    }
        else if (comando == "promedio") {
            if (esta.promedio() != 0){
            cout << "Promedio: " << esta.promedio() << endl;
    }
            else{
                cout<< "Sin lecturas registradas"<<endl;
        }
        }else if (comando == "maxima") {
            if (esta.maxima() != 0){
                cout << "Maxima: " << esta.maxima() << endl;
            }
                else{
                    cout << "Sin lecturas registradas"<<endl;
                }
    }
        else if (comando == "cantidad") {
            cout << esta.getNombreEstacion()<<" -" <<  esta.getCantidadLecturas() << endl;
    }
}
}

