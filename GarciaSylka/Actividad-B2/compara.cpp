#include <iostream>
using namespace std;
int main ()
{

	int X,Y;
	cout<<"Ingrese los numeros a comparar"<<endl;
	cin>>X;
	cin>>Y;
	if (X==Y)
	cout<<"Son iguales"<<endl;
	else
		if (X<Y)
			cout<<X<<"Es menor"<<endl;
		else
			cout<<Y<<"Es menor"<<endl;
	return 0;
} 

