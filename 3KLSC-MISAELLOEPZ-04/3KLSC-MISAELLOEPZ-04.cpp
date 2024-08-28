#include<iostream>
using namespace std;

int main() {
  
    float matriz[3][5];

   
    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 5; columna++) {
            cout << "Ingresa el valor en la posición [" << fila << "][" << columna << "]: ";
            cin >> matriz[fila][columna];
        }
    }


    cout << "Contenido de la matriz:" << endl;
    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 5; columna++) {
            cout << matriz[fila][columna] << "  ";
        }
        cout << endl;  
    }

    return 0;
}
