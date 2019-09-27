#include "Vector.h"
#include <sstream>
#include<iostream>
using std::stringstream;
using std::cout;

Vector::Vector()
{
	vec = new int[tama�o];
	cantidad = 0;
}

void Vector::insertar(int numero)
{ 
	if (vacio()) {
		vec[cantidad] = numero;
		cantidad++;
	}

}

int Vector::buscar_pos(int pos)
{
	return vec[pos];
}

string Vector::toString()
{ 
	stringstream s;

	for (int i = 0; i < cantidad ; i++) {
		cout << vec[i];
	}
	return s.str();
}


bool Vector::vacio() {
	return (cantidad <tama�o) ? true : false;
}

void Vector::eliminar_pos(int pos) {
	if (pos < tama�o) {
		for (int i = pos; i < tama�o - 1; i++) {
			vec[pos] = vec[pos + 1];
		}
		cantidad--;
	}
}

Vector::~Vector()
{	
	delete  []vec;
}
