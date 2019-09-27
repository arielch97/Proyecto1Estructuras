#pragma once
#include<string>
using std::string;
const int tamaño = 4;

class Vector
{
private:
	int *vec;
	int cantidad;
public:
	Vector();
	void insertar(int);
	int buscar_pos(int);
	string  toString();
	void eliminar_pos(int);
	bool vacio();
	~Vector();
};

