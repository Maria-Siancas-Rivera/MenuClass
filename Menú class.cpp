// Menú class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector.h"
#include <conio.h>

using namespace std;

void main()
{
	int n,vec[100],inv[100],op;
	Vector vectorcito;
	do {
		cout<<"Ingrese el tamano del vector : ";
		cin>>n;
	   } while ((n>MAX) || (n<=0));
	do{
		cout<<"-----   MENU VECTORES     -----"<<endl;
		cout<<"|1.- Cargar Vector            |"<<endl;
		cout<<"|2.- Mostrar Vector           |"<<endl;
		cout<<"|3.- Mostrar Inverso          |"<<endl;
		cout<<"|4.- Mostrar Capicua          |"<<endl;
		cout<<"|0.- Salir                    |"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<" Elija una opcion"<<endl;
		cin>>op;
		switch(op){
		case 1:
			vectorcito.cargarVector(vec,n);  //Llamar al metodo
			break;
		case 2:
			vectorcito.mostrarVector(vec,n);  //Llamar al metodo
			break;
			getch();
		case 3:
			vectorcito.Inverso(vec,inv,n);
			vectorcito.mostrarInverso(inv,n);  //Llamar al metodo
			break;
		case 4:
			vectorcito.Inverso(vec,inv,n);
			vectorcito.Capicua(vec,inv,n);
			break;
		case 0: 
			cout<<"Salir"<<endl;
			break;
		default:
			cout<<"Error: Opcion no valida..."<<endl;
			break;
		}
	}while(op!=0);
	getch();
}
