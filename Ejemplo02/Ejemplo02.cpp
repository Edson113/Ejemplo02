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
}persona = { "Cindy",20,45,2,12,1997 };

struct Empleado {
	Persona persona;
	int salario;
}trabajador = { "Steven",19,60,22,7,1998,1000 };

int main() {
	cout << "Persona: " << persona.nombre;
	cout << "\nEdad: " << persona.edad;
	cout << "\nPeso: " << persona.peso;
	cout << "\nDia nacimiento: " << persona.fecha.dia;
	cout << "\nMes nacimiento: " << endl;
	return 0;
}