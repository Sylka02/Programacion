#include<iostream>
using namespace std;
int main ()
{
	float x,c,a,r,vb1,vd,vb2,viva,fi,vt;
	c=0;
	a=0;
	cout<<"\r\rPunto de Venta\r\r"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:";
	cin>>r;
	do{
		cout<<"Ingrese el valor del producto:";
		cin>>x;
		c=c+1;
		a=a+x;
	} while(c<r);
	 vb1=a;
	 vd=vb1*0.10;
	 viva=vb2*0.12;
	 fi=vb2+viva;
	 vt=fi-vd;
	 cout<<"\r\rResultado\r\r"<<endl;
	 cout<<"Valor con iva es:"<<fi<<endl;
	 cout<<"Valor total es:"<<vt<<endl;
	 return 0;
} 
