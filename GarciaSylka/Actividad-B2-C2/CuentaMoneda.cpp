//=======Nombre de programa: Cuentas de monedas=======//
//=======Archivo:GarciaSylka
//=======Autor: Garcia Sylka
//=======Fecha de elaboracion:07-05-2022
//=======Fecha de ultima actualizacion:19-05-2022
#include<iostream>
using namespace std;
int main ()
{
	int GS_n,GS_c=0,GS_c1=0,GS_c2=0;
	float GS_x,GS_a=0,GS_a1=0,GS_a2=0,GS_m=0.10;
	cout<<"Cantidad de moneda a ingresar:";
	cin>>GS_n;
	do
	{
	cout<<"Ingresar el valor de la moneda(0.10,0.25):";
	cin>>GS_x;
	GS_c=GS_c+1;
	GS_a=GS_a+GS_x;
	if (GS_x==GS_m)
	{
		GS_c1=GS_c1+1;
		GS_a1=GS_a1+GS_x;
	}
	else
	{
		GS_c2=GS_c2+1;
		GS_a2=GS_a2+GS_x;
	}
	}
	while (GS_c<GS_n);
cout<<"//=======Nombre de programa: Cuentas de monedas=======//"<<endl;
cout<<"//=======Archivo:GarciaSylka"<<endl;
cout<<"//=======Autor: Garcia Sylka"<<endl;
cout<<"//=======Fecha de elaboracion:07-05-2022"<<endl;
cout<<"//=======Fecha de ultima actualizacion:19-05-2022"<<endl;
	cout<<"El resultado fue:"<<endl;
	cout<<"Cantidad de monedas ingresadas:"<<GS_c<<endl;
	cout<<"Cantidad total en dinero contado:"<<GS_a<<endl;
	cout<<"Cantidad de moneda de 0.10c ingresadas:"<<GS_c1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10cc:"<<GS_a1<<endl;
	cout<<"Cantidad de moneda de 0.25cc ingresada:"<<GS_c2<<endl;
	cout<<"Cantidad total en dinero de moneda de 0.25cc:"<<GS_a2<<endl;
	
	return 0;
}

