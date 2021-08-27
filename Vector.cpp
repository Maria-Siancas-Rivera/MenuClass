#include "StdAfx.h"
#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector(void)
{
}


Vector::~Vector(void)
{
}

void Vector::cargarVector(int vec[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"Ingrese v[";i;"]= ";
		cin>> vec[i];
	}
}

void Vector::mostrarVector(int vec[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"v["<<i<<"]= ";
		cout<<vec[i]<< endl;
	}
}

void Vector::Inverso(int Vec[], int Inv[], int n)
{	
		for (int i=0;i<n;i++)
		{	
			Inv[i] = Vec[i];
		}
	int j = n - 1;
	float aux;
	for (int i=0;i<n/2;i++)
	{	
		aux = Inv[i];
		Inv[i] = Inv[j];
		Inv[j] = aux;
		j = j-1;
	}
}

void Vector::mostrarInverso(int inv[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"v["<<i<<"]= ";
		cout<<inv[i]<<endl;
	}
}

void Vector::Capicua(int vec[], int inv[], int n)
{	
	int Cap = 0;
	for (int i=0;i<n;i++)
	{	
		if (inv[i] != vec[i])
		{	
			Cap = 1;
		}
	}
	if (Cap == 0)
	{	
		cout<<"\n El vector es capicua \n"<<endl;
	}
	else
	{	
		cout<<"\n El vector no es capicua \n"<<endl;
	}
}
