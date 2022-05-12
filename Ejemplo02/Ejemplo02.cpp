//hola 2
#include <iostream>
using namespace std;

struct Fecha {
	int dia, mes, anio;
};

struct Persona {
	char nombre[20];
	int edad, peso;
	Fecha fecha;
}persona = { "Joseph",23,55,16,06,1999 };

struct Empleado {
	Persona persona;
	int salario;
}trabajador = { "Kevin",14,50,30,03,2008,1000 };

int main() {
	cout << "Persona: " << persona.nombre;
	cout << "\nEdad: " << persona.edad;
	cout << "\nPeso: " << persona.peso;
	cout << "\nDia nacimiento: " << persona.fecha.dia;
	cout << "\nMes nacimiento: " << endl;
	return 0;
}