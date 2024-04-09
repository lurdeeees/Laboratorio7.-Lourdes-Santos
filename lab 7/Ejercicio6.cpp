#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string nombres[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Comparar nombres adyacentes y realizar un intercambio si es necesario
            if (nombres[j] > nombres[j + 1]) {
                swap(nombres[j], nombres[j + 1]);
            }
        }
    }
}

int main() {
    const int numeroNombres = 5; // Cambia según la cantidad de nombres que tengas
    string nombreEstudiantes[numeroNombres];

    // Ingresa los nombres de los estudiantes
    for (int i = 0; i < numeroNombres; ++i) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin >> nombreEstudiantes[i];
    }

    // Ordena los nombres utilizando el algoritmo de burbuja
    bubbleSort(nombreEstudiantes, numeroNombres);

    // Muestra los nombres ordenados
    cout << "\nNombres de estudiantes ordenados:\n";
    for (int i = 0; i < numeroNombres; ++i) {
        cout << nombreEstudiantes[i] <<endl;
    }

    return 0;
}	 	
	
	  	

	 
 
 
 
 
 	

 