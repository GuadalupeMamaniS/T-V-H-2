//LAB-2: EJERCICIO 4: SISTEMA DE ECUACIONES DE 2X2
//NOMBRE Y APELLIDO: GUADALUPE MAMANI SARZURI
//EN ESTE EJERCICIO RESOLVEREMOS DOS ECUACIONES CON DOS INCOGNITAS POR SUSTITUCION
//   PRIMERO DESPEJAREMOS "X" DE AMBAS ECUACIONES Y LAS IGUALAREMOS LAS PARA HALLAR "Y"
//   TRAS HALLAR "Y" PODREMOS HALLAR "X" DE UNA DE LAS ECUACIONES DESPEJADAS
//^_^

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	float a, b, c, d, e, f, x, y;
	cout<<"              HALLAREMOS EL VALOR DE X y Y DE UN SISTEMA DE ECUACIONES DE 2X2"<<endl<<endl;
	    cout<<"Las ecuaciones a resolver son:"<<endl<<endl;
	        cout<<"                   ax+by=c"<<endl;
	        cout<<"                   dx+ey=f"<<endl<<endl;
//Nuestras incognitas son X, Y
	cout<<"INGRESE LOS VALORES DE a,b,c,d,e,f CON SU RESPECTIVO SIGNO"<<endl<<endl;   //a,d,c,d,e,f son las constantes a ingresar, introducir solo el signo (-) en caso de que tenga
	{
	    cout<<"Ingrese el valor para la constante a :";
          cin>>a;
	    cout<<"Ingrese el valor para la constante b :";
	      cin>>b;
	    cout<<"Ingrese el valor para la constante c :";
	      cin>>c;
	    cout<<"Ingrese el valor para la constante d :";
	      cin>>d;
	    cout<<"Ingrese el valor para la constante e :";
	      cin>>e;
	    cout<<"Ingrese el valor para la constante f :";
	      cin>>f;
	    cout<<endl;
	}
	while(a+b+c == 0 || d+e+f == 0)
	{
		cout<<"los 3 valores no puenes ser cero a la vez"<<endl<<endl;
		cout<<"INGRESE LOS VALORES DE a,b,c,d,e,f CON SU RESPECTIVO SIGNO"<<endl<<endl;   //a,d,c,d,e,f son las constantes a ingresar, introducir solo el signo (-) en caso de que tenga
	    cout<<"Ingrese el valor para la constante a :";
          cin>>a;
	    cout<<"Ingrese el valor para la constante b :";
	      cin>>b;
	    cout<<"Ingrese el valor para la constante c :";
	      cin>>c;
	    cout<<"Ingrese el valor para la constante d :";
	      cin>>d;
	    cout<<"Ingrese el valor para la constante e :";
	      cin>>e;
	    cout<<"Ingrese el valor para la constante f :";
	      cin>>f;
	}
	cout<<endl;
	
	//de amabas ecuaciones despejaremos "x" y las igualaremos para obtener el valor de "y"
	
	y= ((c*d)-(f*a))/((d*b)-(a*e));
	
	//ya obtenido "y" podremos hallar el valor de "x" remplazando el valor de "y" en cualquiera de las dos primeras ecuaciones despejadas
	
	x= (c-(b*y))/a;
	
	cout<<"El valor de x calculado es:"<<x<<endl;
	cout<<"El valor de y calculado es:"<<y<<endl;
	cout<<endl;
	
	system("pause");
	return 0;
}
