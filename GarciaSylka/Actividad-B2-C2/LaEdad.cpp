//=======Nombre de programa:Calacular la Edad=======//
//=======Archivo:GarciaSylka
//=======Autor: Garcia Sylka
//=======Fecha de elaboracion:07-05-2022
//=======Fecha de ultima actualizacion:19-05-2022
#include<iostream>
#include<cstdlib>
#include<locale.h>
using namespace std;
void calcularEdad(int GS_aa,int GS_ma,int GS_fa,int GS_an,int GS_mn,int GS_fn);
int main ()
{
	setlocale (LC_ALL,"");
		int GS_aa;
	        int GS_ma;
		int GS_fa;

		int GS_an;
		int GS_mn;
		int GS_fn;
        cout<<"Ingrese el año actual:"; cin>>GS_fa;
	cout<<"Ingrese el mes actual:"; cin>>GS_ma;
	cout<<"Ingrese la fecha actual:"; cin>>GS_fa;

	cout<<"Ingrese año de nacimiento:"; cin>>GS_an;
	cout<<"Ingrese mes de nacimiento:"; cin>>GS_mn;
	cout<<"Ingrese fecha de nacimiento:"; cin>>GS_fn;

        calcularEdad(GS_aa , GS_ma , GS_fa ,GS_an ,GS_mn ,GS_fn);

	return 0;
}

void calcularEdad(int GS_aa,int GS_ma,int GS_fa,int GS_an,int GS_mn,int GS_fn)

{
	int respfech , respmes;

	if (GS_fa < GS_fn)
	{
		GS_fa = GS_fa + 30;
		GS_ma = GS_ma - 1;
	respfech = GS_fa - GS_fn;
	}
	else
		respfech = GS_fa - GS_fn;

	if (GS_ma < GS_mn)
	{
		GS_ma = GS_ma +12;
		GS_aa = GS_aa -1;
	    respmes = GS_ma -GS_mn;
	}
	else

cout<<"//========Nombre de programa:Calcular la edad=======//"<< endl;
cout<<"//========Archivo:GarciaSylka"<<endl;
cout<<"//========Autor: Garcia Sylka"<<endl;
cout<<"//========Fecha de elaboracion:07-05-2022"<<endl;
cout<<"//========Fecha de ultima actualizacion:07-05-2022"<<endl;

	respmes = GS_ma -GS_mn;

	cout<<"\nUd. tiene\n";
	cout<<"Edad:"<<GS_aa - GS_an << endl;
	cout<<"Mes:"<<respmes << endl;
	cout<<"Dia:"<<respfech << endl;
}




