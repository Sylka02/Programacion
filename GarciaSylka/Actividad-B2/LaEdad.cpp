#include<iostream>
#include<cstdlib>
#include<locale.h>
using namespace std;
void calcularEdad(int aa,int ma,int fa,int an,int mn,int fn);
int main ()
{
	setlocale (LC_ALL,"");
		int aa;
	        int ma;
		int fa;

		int an;
		int mn;
		int fn;
        cout<<"Ingrese el año actual:"; cin>>fa;
	cout<<"Ingrese el mes actual:"; cin>>ma;
	cout<<"Ingrese la fecha actual:"; cin>>fa;

	cout<<"Ingrese año de nacimiento:"; cin>>an;
	cout<<"Ingrese mes de nacimiento:"; cin>>mn;
	cout<<"Ingrese fecha de nacimiento:"; cin>>fn;

        calcularEdad(aa , ma , fa ,an ,mn ,fn);

	return 0;
}

void calcularEdad(int aa,int ma,int fa,int an,int mn,int fn)

{
	int respfech , respmes;

	if (fa < fn)
	{
		fa = fa + 30;
		ma = ma - 1;
	respfech = fa - fn;
	}
	else
		respfech = fa - fn;

	if (ma < mn)
	{
		ma = ma +12;
		aa = aa -1;
	    respmes = ma -mn;
	}
	else

	respmes = ma -mn;

	cout<<"\nUd. tiene\n";
	cout<<"Edad:"<<aa - an << endl;
	cout<<"Mes:"<<respmes << endl;
	cout<<"Dia:"<<respfech << endl;
}




