//=======Nombre de programa:Punto de Ventas=======//
//=======Archivo:GarciaSylka
//=======Autor:Garcia Sylka
//=======Feha de elaboracion:09-05-2022
//=======Fecha de ultima actualizacion:19-05-2022
#include<iostream>
using namespace std;
int main ()
{
	float GS_x,GS_c,GS_a,GS_n,GS_vb1,GS_vd,GS_vb2,GS_viva,GS_fi,GS_vt;
	GS_c=0;
	GS_a=0;
	cout<<"\n\nPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:";
	cin>>GS_n;
	do{
		cout<<"Ingrese el valor del producto:";
		cin>>GS_x;
		GS_c=GS_c+1;
		GS_a=GS_a+GS_x;
	} while(GS_c<GS_n);
cout<<"//=======Nombre de programa:Punto de ventas=======//"<<endl;
cout<<"//=======Archivo:GarciaSylka"<<endl;
cout<<"//=======Autor:Garcia Sylka"<<endl;
cout<<"//=======Fecha de elaboracion:09-05-2022"<<endl;
cout<<"//=======Fecha de ultima actualizacion:19-05-2022"<<endl;
	 GS_vb1=GS_a;
	 GS_vd=GS_vb1*0.10;
	 GS_viva=GS_vb2*0.12;
	 GS_fi=GS_vb2+GS_viva;
	 GS_vt=GS_fi-GS_vd;
	 cout<<"\n\nResultado\n\n"<<endl;
	 cout<<"Valor con iva es:"<<GS_fi<<endl;
	 cout<<"Valor total es:"<<GS_vt<<endl;
	 return 0;
} 
