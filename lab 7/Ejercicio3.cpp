#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Persona{
private:
    string nombre;//atributos (caracteristicas)
    string ocupacion;
    int edad;

public:
    Persona(string nomb, string ocupa,int edad) {
        nombre = nomb;
		ocupacion= ocupa;
        this ->edad = edad;
    }
    void nombreP(){ //metodos (acciones)
    	cout << "Ingresa tu nombre: ";
    	cin >> nombre;
	}
	void ocupacionP(){ //metodos
		cout << "Ingresa tu ocupacion: ";
		cin >> ocupacion;
	}
	void edadP(){ //metodos
		cout << "Ingresa tu edad: ";
		cin >> edad;
	}
	
    void mostrarInfo() { //metodos
    	cout <<"Nombre: "<< nombre <<endl;
    	cout <<"Ocupacion: "<< ocupacion <<endl;
    	cout <<"Edad: "<< edad <<endl;
        }
    
};
int main() {
	string nombre;
    string ocupacion;
   	int edad;
   	
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << "Ingresa tu ocupacion: ";
    cin >> ocupacion;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    Persona datos(nombre, ocupacion, edad);
    
    cout << "\nInformacion de la persona: " << endl;
    
    datos.mostrarInfo(); //En esta parte se demuestra la instanciacion del objeto en la clase
    return 0;
    
    
   
}
