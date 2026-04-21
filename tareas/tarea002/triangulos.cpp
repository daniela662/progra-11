#include <iostream>
#include <string>
#include <math.h>
using namespace std;

bool es_valido( int l1, int l2, int l3){ //Funcion que verifica si un triangulo es valido
    if (l1 +l2 <= l3){ //Si la suma de dos lados es igual o menor al tercero, entonces el traingulo no existe
        cout << "Error: Triangulo no valido";
    }else if ( l1 + l3 <= l2){ //Es hacer lo mismo pero para otros casos
        return false;
        cout << "Error: Triangulo no valido";
        return false;
        }else if (l2 + l3 <= l1){
            cout << "Error:Triangulo no valido";
            return false;
            }else {
                return true;
                }

}

string tipo_triangulo(int l1, int l2, int l3){
    if (l1 == l2 && l2 == l3){ //Si son iguales, entonces el triangulo es equilatero
        return "Equilatero";
        }else if (l1  == l2 || l2 == l3 || l1 == l3 && l1 != l2 && l2 != l3){ //Si cualesquiera dos lados son iguales, entonces es isosceles
            return "Isósceles";
        }else if (l1 != l2 && l2 != l3 && l1 != l3){ //Si todos son distintos, entonces es escalano
            return "Escaleno";
            return 0;
        }
    }
int calcular_perimetro(int l1, int l2, int l3){ //Funcion para calcular la suma
    double suma; //Variable para guardar la suma
    suma = l1 + l2 +l3;
    return suma;
return 0;
}

void describir_triangulo( int l1, int l2, int l3){ //Funcion que llama a las funciones anteriores
    cout << "El perímetro es: " << calcular_perimetro(l1, l2, l3) << endl;
    cout << "El tipo del triangulo es: " << tipo_triangulo(l1, l2, l3) << endl;

}

int main(){
    int l1, l2, l3; //Variables para guardar los datos
    cout <<"Ingrese la longitud del primer lado: "; //Solicitar y leer los lados
    cin >> l1;
    cout << "Ingrese la longitud del segundo lado: ";
    cin >> l2;
    cout << "Ingrese la longitud del tercer lado: ";
    cin >> l3;
    
    if (es_valido(l1, l2, l3)) { //Llamamos primero a es válido, y si lo es, se llama a la funcion donde se ejectuan las dos primeras funciones
        describir_triangulo(l1, l2, l3);
    }

    return 0;
}

    


