
#include <iostream> 
#include <vector> 
#include <string> 
#include <queue> 
#include <stack> 
#include <algorithm> 
#include <set> 
using namespace std; 

const int N = 5; 

int main() { 
    vector<int> precios;  
    stack<string> historial; 
    vector<pair<int, string>> pedidos; 
    queue<string> fila; 

    for (int i = 0; i < N; i++) { 
        string nombre; 
        int precio; 

        cin >> nombre >> precio; 

        pedidos.push_back({precio, nombre}); 
        fila.push(pedidos[i].second); 
        precios.push_back(pedidos[i].first); 
    } 
    string buscado; 
    cin >> buscado; 
    auto it = pedidos.begin(); 
    while (it != pedidos.end()) { 
        if ((*it).second == buscado) { 
            cout << buscado << " pidio por " << (*it).first << " colones" << endl; 
            break; 
        } 
        ++it; 
    } 
    if (it == pedidos.end()) { 
        cout << buscado << " no hizo ningun pedido" << endl; 
    } 
    cout << "Pedido mayor: "; 
    int maximo = *max_element(precios.begin(), precios.end()); 
    cout << maximo; 
    auto it2 = pedidos.begin(); 
    while (it2 != pedidos.end()) { 
        if ((*it2).first == maximo) { 
            cout << (*it2).second << " (" << (*it2).first << ")" << endl; 
            break; 
        } 
        ++it2; 
    } 
    while (!fila.empty()) { 
        string nombre = fila.front(); 
        fila.pop(); 
        cout << "Atendido: " << nombre << endl; 
        historial.push(nombre); 
    } 
    string instruccion; 
    cin >> instruccion; 
    if (instruccion == "deshacer") { 
        string ultimo = historial.top(); 
        historial.pop(); 
        fila.push(ultimo); 
        cout << ultimo << " vuelve a la fila" << endl; 
    } 
}
