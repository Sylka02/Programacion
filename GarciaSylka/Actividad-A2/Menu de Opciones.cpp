//fuciones de SYLKA GARCIA
int GS_compara()
{
    int GS_a, GS_b ;
     cout<<"Ingrese el primer numero a comparar: ";  cin>> GS_a;  
     cout<<"Ingrese el segundo numero a comparar: ";  cin>> GS_b;
	if (GS_a==GS_b)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (GS_a>GS_b)
		{
		cout<<GS_a<<" es mayor"<<endl;
		}
		else
		{
		cout<<GS_b<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara"<<endl;
	cout<<"//==> Archivo : GarciaSylka-compara.cpp"<<endl;
	cout<<"//==>Autor: Garcia Sylka"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-05-07"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-19"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int GS_cuentamoneda()
{
	int GS_n,GS_c, GS_c1, GS_c2, GS_cl, GS_cz;
	float GS_x, GS_al, GS_a, GS_a1, GS_a2, GS_az;
	GS_c = 0;
	GS_c1 = 0;
	GS_c2 = 0;
	GS_a = 0;
	GS_a1 = 0;
	GS_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>GS_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>GS_x;
		GS_c = GS_c+1;
		GS_a = GS_a+GS_x;
		if(GS_x==0.25)
			{
				GS_c1 = GS_c1+1;
				GS_a1 = GS_x+GS_a1;
			}
		else
			{
				GS_c2 = GS_c2+1;
				GS_a2 = GS_a2+GS_x;
			}
	}
	while(GS_c<GS_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<GS_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<GS_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<GS_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<GS_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<GS_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<GS_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Cuenta Monedas"<<endl;
	cout<<"//==> Archivo : GarciaSylka-CuentaMoneda.cpp"<<endl;
	cout<<"//==>Autor: Garcia Sylka"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-05-07"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int GS_laedad()
{
	int GS_dAct; 
	int GS_mAct; 
	int GS_aAct; 
	int GS_dNac; 
	int GS_mNac; 
	int GS_aNac;			
	int GS_anoR, GS_mesR, GS_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> GS_aAct;
	cout << "Ingrese Mes Actual: ";   cin >> GS_mAct;
	cout << "Ingrese Dia Actual: ";  cin >> GS_dAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> GS_aNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> GS_mNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> GS_dNac;			
	if (GS_aAct > GS_aNac)
	{
		if(GS_mAct > GS_mNac)	 
		{
			GS_anoR=GS_anoAct-GS_anoNac;	
			GS_mesR=GS_mesAct-GS_mesNac;					
		}
		else
		{
			GS_anoR=GS_aAct-GS_aNac-1;	
			GS_mesR=(GS_mAct+12)-GS_mNac;					
		}												
		if(GS_dAct > GS_dNac)
		{				
			GS_diaR=GS_dAct-GS_dNac;
		}
		else
		{
			GS_mesR=GS_mesR-1;
			GS_diaR=(GS_dAct+30)-GS_dNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<GS_anoR<< endl;
		cout << " Mes: " <<GS_mesR << endl;
		cout << " Dia: " << GS_diaR << endl;								
	}
	else
	{
		 cout << "\n Calculo no es posible ";
	}
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: GarciaSylka-laedad.cpp"<<endl;
    cout<<"//==========Autor: Garcia Sylka"<<endl;
    cout<<"//==========Fecha de elaboracion: 07-05-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 19-05-2022"<<endl;
	return 0;
}
int GS_PuntoVenta()
{
	float GS_x, GS_c, GS_at, GS_n, GS_vb, GS_viva, GS_vdes, GS_vfi, GS_vft;
	GS_c = 0;
	GS_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> GS_n;			
	do
	{
		cout<<"Ingrese el valor del producto " <<GS_c+1 <<": " ;   cin>> GS_x;
		GS_c = GS_c+1;
		GS_at = GS_at+GS_x;
	}
	while(GS_c<GS_n);			
	GS_vb = GS_at;
	GS_viva = GS_vb*0.12;
	GS_vdes = GS_vb*0.10;
	GS_vfi = GS_vb+GS_viva;
	GS_vft = GS_vfi-GS_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<GS_vfi<<endl;
	cout<<"Valor final es: "<<GS_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
	cout<<"//==> Archivo : GarciaSylka-puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Garcia Sylka"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-05-07"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int GS_Suma()
{
	int GS_a, GS_b, GS_c;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>GS_a;
	cout<<"Ingrese el segundo número a sumar: "; cin>>GS_b;
	GS_c = GS_a+GS_b;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<GS_a<<" + "<<GS_b<<" es igual a: "<<GS_c<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : GarciaSylka-suma.cpp"<<endl;
	cout<<"//==>Autor: Garcia Sylka"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-05-07"<<endl;
	cout<<"//==>Fecha ultima actualizacion: 2022-05-19"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int GS_Menu()
{
	int opcion, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\n\t\t\t\t----------BIENVENIDOS-----------"<<endl;
		cout<<"\t\t\t----------Programacion-----------"<<endl;
		cout<<"\t\t\t----------------Submenú de opciones----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. comparar numero"<<endl;
		cout<<"2. Cuenta monedas"<<endl;
		cout<<"3. Calcular la edad"<<endl;
		cout<<"4. Punto de venta"<<endl;
		cout<<"5. Suma de dos numeros"<<endl;
		cout<<"0. Para salir al menu principal"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>opcion;
		switch (opcion)
		{
			
			case 1:
				system("cls");
				GS_compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				GS_cuentamoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				GS_laedad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				GS_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				GS_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opcion!=0 && opcion>0)
			{
				cout << "\nopcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(opcion==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
		}
	}
	while(opcion != 0);
	return(0);
}	
