#include <iostream>
#include <string>
#include <cctype>

using namespace std;
bool es_palindromo(string palabra){ //Funcion que verifica si una palabra es palindroma
    int palabra_normal =  0; //Indice de la primera letra
    int palabra_reversa = palabra.length() -1; //Indice de la ultima letra 

        for (int i = 0; i < palabra.length(); i++) {
        palabra[i] = tolower(palabra[i]); //Volver cada letra de la plaabra a minuscula

    }
    if (palabra[palabra_normal] == palabra[palabra_reversa]){ //Verifacion sobre si es palindroma o no
        return true;
        }else if (palabra[palabra_normal] != palabra[palabra_reversa]){
            return false;
            return 0;

        }
}
int main(){
    string palabra;
    cout << "Ingrese la palabra que desea verificar: ";
    cin >> palabra;
    if (es_palindromo(palabra) == true){ //Si se cumple la condicion, entonces la palabra es palindroma
        cout << "La palabra: " << palabra << " es palindroma";
        }else if(es_palindromo(palabra) ==false){ //Si no se cumple la condicion, entonces la palabra no es palindroma
            cout << "La palabra: " << palabra << " no es palindroma"; 
        }
        }



