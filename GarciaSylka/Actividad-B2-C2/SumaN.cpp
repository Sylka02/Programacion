//=======Nombre del Programa:Suma de dos numeros=======//
//=======Archivo:GarciaSylka-SumaN.cpp
//=======Autor: Garcia Sylka
//=======Fecha de elaboracion:07-05-2022
//=======Fecha de ultima actualizacion:19-05-2022
#include<iostream>
using namespace std;
int main ()
{
	int GS_c=0,GS_n;
	float GS_s=0,GS_x;
	cout<<"Ingrese la cantidad de valores a sumar:";
	cin>>GS_n;
	do{
		cout<<"Ingrese el elemento"<<GS_c+1;
		cin>>GS_x;
		GS_c=GS_c+1;
		GS_s=GS_s+GS_x;
	}while(GS_c<GS_n);

cout<<"//=======Nombre del programa:Suma de dos numeros=======//"<<endl;
cout<<"Archivo:GarciaSylka-Suma.cpp"<<endl;
cout<<"Autor: Garcia Sylka"<<endl;
cout<<"Fecha de elaboracion:07-05-2022"<<endl;
cout<<"Fecha de ultima actualizacion:19-05-2022"<<endl;
	cout<<"La suma de los elementos fue:"<<GS_s<<endl;
	return 0;
}

