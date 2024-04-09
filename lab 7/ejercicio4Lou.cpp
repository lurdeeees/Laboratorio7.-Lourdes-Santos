#include<iostream>
#include<stdlib.h>
#include <string>
using namespace std;

class Persona{
	private: 
	string nombre;
	int edad;
	public:
		Persona(string, int);//En esta parte se declara la parte del constructor
		void SolicitarDatos();
		void EnsenarDatos();
};
class Estudiante: public Persona{
	private:
		int NumeroEstudiante;
		float PromedioNotas;
	public:
		//Este constructor pertenece a la clase Estudiante
		Estudiante(string, int, int, float);
		void SolicitarDatosE();
		void EnsenarDatosE();
};

Persona::Persona(string nom,int edad){ //Esta es la parte del constructor de la clase Persona, es la clase padre
	nombre=nom;
	edad=edad;
}

Estudiante::Estudiante(string nom,int edad, int num, float prom):Persona(nom, edad){ //Esta es la parte del constructor de la clase Estudiante  que es la clase heredara 
	NumeroEstudiante = num;
	PromedioNotas= prom;
}
void Persona::SolicitarDatos(){ //En esta funcion Persona para solicitar los Datos de consola 
	cout << "Clases, Objetos y Métodos"<< endl;
	cout << "Ingrese el nombre de la Persona: ";
    getline(cin,nombre);
    cout << "Ingrese la edad de la Persona: ";
    cin >> edad;
    cin.ignore();
}
void Persona::EnsenarDatos(){ //Funcion Persona para Mostrar los Datos en la consola
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}
void Estudiante::SolicitarDatosE(){ //Funcion para solicitar los datos como el numero de estudiantes y el promedio del estudiante 
	SolicitarDatos();
	cout << "Ingrese el numero del estudiante: ";
    cin >> NumeroEstudiante;
    cin.ignore();
    cout << "Ingrese el promedio del estudiante: ";
    cin >> PromedioNotas;
    cin.ignore();
}
void Estudiante::EnsenarDatosE(){ 
	EnsenarDatos();
	cout<<"Numero de Estudiante: "<<NumeroEstudiante<<endl;
	cout<<"Promedio de Notas: "<<PromedioNotas<<endl;
}
int main(){ //Este es el menu principal del programa 
	Estudiante alumno("",0,0,0);
	alumno.SolicitarDatosE();
	alumno.EnsenarDatosE();
	return 0;
}