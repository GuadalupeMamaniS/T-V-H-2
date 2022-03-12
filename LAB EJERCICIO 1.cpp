//LAB-2: EJERCICIO 1: OBTENDREMOS DE ANGULOS, LADOS, AREA, MEDIANAS y PERIMETRO DE TRIANGULOS, A BASE DE TRES DATOS DADOS DEL TRIANGULO
//APELLIDO Y NOMBRES: MAMANI SARZURI GUADALUPE
//ASIGNATURA: LABORATORIO DE ETN-307
//ESTE TRABAJO ESTA REALIZADO PARA LA RESOLUCION DE TRIANGULOS CONTANDO SOLO CON TRES DATOS DEL TRIANGULO Y PODER OBTENER LOS DATOS RESTANTES
//SE TOMARA UN TRIANGULO EN EL QUE AL FRENTE DE CADA ANGULO ESTARA EL LADO CON LA MISMA VARIABLE PERO EN MINUSCULA
//POR EJEMPLO: NOMBRAMOS A UN ANGULO "A" AL FRENTE DE ESTE ANGULO ESTARA EL LADO "a"
// ^_^
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include<windows.h>
#define PI 3.14159265

using namespace std;

COORD coord={0, 0};          // Lo que hace es generar una estructura para guardar las coordenadas donde ponga el cursor
void gotoxy(int x, int y)      // la funcion void no devolvera nada pero recibira dos datos
{
	coord.X= x;
	coord.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);   //Esta funcion me lleva a el cursor a la posicion dadas en coord 
}

int main(){
	gotoxy(10, 12);cout<<"*";gotoxy(13, 12);cout<<"*";gotoxy(16, 12);cout<<"*";
	gotoxy(19, 12);cout<<"*";gotoxy(22, 12);cout<<"*";gotoxy(25, 12);cout<<"*";
	gotoxy(11, 11);cout<<"*";gotoxy(12, 10);cout<<"*";gotoxy(13, 9);cout<<"*";
	gotoxy(14, 8);cout<<"*";gotoxy(15, 7);cout<<"*";gotoxy(16, 6);cout<<"*";gotoxy(17, 5);cout<<"*";
	gotoxy(24, 11);cout<<"*";gotoxy(23, 10);cout<<"*";gotoxy(22, 9);cout<<"*";
	gotoxy(21, 8);cout<<"*";gotoxy(20, 7);cout<<"*";gotoxy(19, 6);cout<<"*";
	gotoxy(5, 9);cout<<"lado a";gotoxy(25, 9);cout<<"lado b";gotoxy(15, 13);cout<<"lado c";
	gotoxy(7, 13);cout<<"B";gotoxy(27,13);cout<<"A";gotoxy(18, 4);cout<<"C";gotoxy(18, 5);cout<<"*";
	gotoxy(36, 8);cout<<"En el lado izquierdo de la pantalla se muestra la referencia";
	gotoxy(36, 9);cout<<"del como deden interpretar la posicion de los lados y angulos";
	gotoxy(36, 10);cout<<"Ejemplo: el lado a esta al frente del angulo A";
	gotoxy(0, 13);cout<<endl;
	
	float a, b, c, A, B, C;     //(a,b,c) son los lados y (A,B,C) son los angulos
	int opcion;
	float At, P;                // (At)Es el area total del triangulo y (P) Es el perimetro del triangulo  
	float arcoseno;             // son las funciones trigonometricas de los angulos en radianes
	float j, f;                 // Son variables que ayudan en una operacion 
	float ma, mb, mc;           // Son las medianas de cada lado
	
	gotoxy(2,1);cout<<"  OBTENDREMOS: ANGULOS, LADOS, AREA, MEDIANAS Y PERIMETROS DE TRIANGULOS A BASE DE TRES DATOS DADOS DEL MISMO"<<endl<<endl;
	gotoxy(0, 13);cout<<endl<<endl;
	cout<<"RECOMENDACION: Tras insertar alguna opcion o dato precione enter, para pasar al siguiente paso"<<endl<<endl;
	cout<< "  ELIJA UNA OPCION "<<endl<<endl;
	    cout<<" 1.SE CONOCE UN LADO Y DOS ANGULOS ADYACENTES"<<endl;
	    cout<<" 2.SE CONOCE DOS LADOS Y EL ANGULO QUE FORMAN ESTOS"<<endl;
	    cout<<" 3.SE CONOCE DOS LADOS Y UN ANGULO DIFERENTE AL QUE FORMAN ESTOS"<<endl;
	    cout<<" 4.SE CONOCEN TRES LADOS"<<endl;
	    cout<<" 5.SE CONOCEN TRES ANGULOS"<<endl;
	cin>>opcion;
	    if (opcion < 0 || opcion > 5)
		 {
        cout <<"\nEl numero ingresado no es valido\n "<<endl;
        cout << "Ingrese nuevamente el numero: ";
    cin >> opcion;
         }
	cout<<endl;
	
	switch(opcion)
	{
	case 1:
	{
		cout<<"INGRESE LOS DATOS"<<endl<<endl;
		cout<<"Lea detenidamente y siga las intrucciones"<<endl<<endl;
		   cout<<"Ingrese el lado (a) en centimetro:"<<endl;
		     cin>> a;
		   cout<<"Ingrese uno de los angulos (B) en grados:"<<endl;
		     cin>> B;
		   cout<<"Ingrese el siguiente angulo (C) en grados:"<<endl;
		     cin>> C;
		cout<<endl;
		    A=180-B-C;
		    b= (a*sin((B*PI)/180))/sin((A*PI)/180);
		    c= (a*sin((C*PI)/180))/sin((A*PI)/180);
		    At= (a*a*sin((B*PI)/180)*sin((C*PI)/180)/(2*sin(((B+C)*PI)/180)));
		    ma= (sqrt(2*(b*b+c*c)-(a*a)))/2;
		    mb= (sqrt(2*(a*a+c*c)-(b*b)))/2;
		    mc= (sqrt(2*(b*b+a*a)-(c*c)))/2;
		    P= a+b+c; 
	// Los reultados con los tipos de datos presentados	seran:  
		cout<<"El resultado del angulo A es:"<<A<<endl;
		cout<<"El resultado del lado b es:"<<b<<endl;
		cout<<"El resultado del lado c es:"<<c<<endl;
		cout<<"El area del triangulo es:"<<At<<endl;
		cout<<"La media de a es:"<<ma<<endl;
		cout<<"La media de b es:"<<mb<<endl;
		cout<<"La media de c es:"<<mc<<endl;
		cout<<"El perimetro del triangulo es:"<<P<<endl;
		break;
	}
	case 2:
	{	
		cout<<"INGRESE LOS DATOS"<<endl<<endl;
		cout<<"Lea detenidamente y siga las intrucciones"<<endl<<endl;
		  cout<<"Ingrese el lado mas pequeno (a) en centimetros"<<endl;
		    cin>> a;
		  cout<<"Ingrese el siguiente lado (b) en centimetros"<<endl;
	    	cin>> b;
		  cout<<"Ingrese el angulo que forman los dos lados (C) en grados"<<endl;
		    cin>> C;
		 while (b < a)
		 {
        cout <<"\n b es menor que a: Lea detenidamente e ingrese nuevamente los datos porfavor\n "<<endl;
        cout<<"Ingrese el lado mas pequeno (a) en centimetros"<<endl;
		    cin>> a;
		  cout<<"Ingrese el siguiente lado (b) en centimetros"<<endl;
	    	cin>> b;
		  cout<<"Ingrese el angulo que forman los dos lados (C) en grados"<<endl;
		    cin>> C;
         }    
		cout<<endl;
		    c= sqrt((a*a)+(b*b)-(2*a*b*cos(C*PI/180)));
		    f= (a*sin((C*PI)/180))/c;
		    arcoseno= asin(f);
		    A= arcoseno*180/PI;
		    B=180-A-C;
		    At= (a*b*sin(C*PI/180))/(2);
		    ma= (sqrt(2*(b*b+c*c)-(a*a)))/2;
	    	mb= (sqrt(2*(a*a+c*c)-(b*b)))/2;
	    	mc= (sqrt(2*(b*b+a*a)-(c*c)))/2;
	    	P= a+b+c;
	//Los resultados con los tipos de datos presentados seran:    
		cout<<"El resultado del lado c es:"<<c<<endl;
		cout<<"El resultado del angulo A en grados es:"<<A<<endl;
		cout<<"El resultado del angulo B en grados es:"<<B<<endl;
		cout<<"El area del triangulo es:"<<At<<endl;
		cout<<"La media de a es:"<<ma<<endl;
		cout<<"La media de b es:"<<mb<<endl;
		cout<<"La media de c es:"<<mc<<endl;
		cout<<"El perimetro del triangulo es:"<<P<<endl;
		break;
    }
	case 3:
	{	
		cout<<"INGRESE LOS DATOS"<<endl<<endl;
		cout<<"Lea detenidamente y siga las intrucciones"<<endl<<endl;
		  cout<<"Ingrese el lado mas grande en centimetros"<<endl;
		    cin>> c;
		  cout<<"Ingrese el siguiente lado en centimetros"<<endl;
		    cin>> b;
		  cout<<"Ingrese el angulo que no forman los lados dados en grados"<<endl;
		    cin>> C;
		while (c < b)
	    {
           cout <<"\n c es menor que b: Lea detenidamente e ingrese nuevamente los datos porfavor\n "<<endl;
           cout<<"Ingrese el lado mas grande en centimetros"<<endl;
		    cin>> c;
		  cout<<"Ingrese el siguiente lado en centimetros"<<endl;
		    cin>> b;
		  cout<<"Ingrese el angulo que no forman los lados dados en grados"<<endl;
		    cin>> C;
         }     
		cout<<endl;
		    f= (b*sin((C*PI)/180))/c;
	    	arcoseno= asin(f);
		    B= arcoseno*180/PI;
		    A=180-B-C;
		    a= (b*sin((A*PI)/180))/ sin((B*PI)/180);
	    	At= (a*b*sin((C*PI)/180))/(2);
	    	ma= (sqrt(2*(b*b+c*c)-(a*a)))/2;
	    	mb= (sqrt(2*(a*a+c*c)-(b*b)))/2;
	    	mc= (sqrt(2*(b*b+a*a)-(c*c)))/2;
	    	P= a+b+c;
	//Los resultados con los tipos de datos presentados seran: 	
		cout<<"El resultado del angulo B en grados es:"<<B<<endl;
		cout<<"El resultado del angulo A en grados es:"<<A<<endl;
		cout<<"El resultado del lado a es:"<<a<<endl;
		cout<<"El area del triangulo es:"<<At<<endl;
		cout<<"La media de a es:"<<ma<<endl;
		cout<<"La media de b es:"<<mb<<endl;
		cout<<"La media de c es:"<<mc<<endl;
		cout<<"El perimetro del triangulo es:"<<P<<endl;
		break;
    }
		
	case 4:
	{
		cout<<"INGRESE LOS DATOS,QUE NO SEAN MULTIPLOS ENTRE LOS TRES DATOS:"<<endl;
		cout<<"Lea detenidamente y siga las instrucciones"<<endl<<endl;
	      cout<<"Ingrese lado mas pequeno (a) en centimetros"<<endl;
		    cin>> a;
		  cout<<"Ingrese el lado mas grande (b) en centimetros)"<<endl;
		    cin>> b;
		  cout<<"Ingrese el ultimo lado (c) en centimetros"<<endl;
		    cin>> c;
		while (a > b || b < c || a > c)
		{
          cout <<"\nLos datos no estan insertados correctamente lea detenidamente e ingrese nuevamente los datos porfavor\n "<<endl;
          cout<<"Ingrese lado mas pequeno (a) en centimetros"<<endl;
		    cin>> a;
		  cout<<"Ingrese el lado mas grande (b) en centimetros)"<<endl;
		    cin>> b;
		  cout<<"Ingrese el ultimo lado (c) en centimetros"<<endl;
		    cin>> c;
        }    
		cout<<endl;
		    j= ((b*b+c*c)-(a*a))/(2*b*c);
	    	A= acos(j)*180/PI;
	    	f= ((a*a+c*c)-(b*b))/(2*a*c);
	    	B= acos(f)*180/PI;
	    	C=180-A-B;
	    	At= (a*b*sin((C*PI)/180))/2;
	    	ma= (sqrt(2*(b*b+c*c)-(a*a)))/2;
	    	mb= (sqrt(2*(a*a+c*c)-(b*b)))/2;
	    	mc= (sqrt(2*(b*b+a*a)-(c*c)))/2;
	    	P= a+b+c;
	//Los resultados con los tipos de datos presentados seran:	
		cout<<"El resultado del angulo A en grados es:"<<A<<endl;
		cout<<"El resultado del angulo B en grados es:"<<B<<endl;
		cout<<"El resultado del angulo C en grados es:"<<C<<endl;
		cout<<"El area del triangulo es:"<<At<<endl;
		cout<<"La media de a es:"<<ma<<endl;
		cout<<"La media de b es:"<<mb<<endl;
		cout<<"La media de c es:"<<mc<<endl;
		cout<<"El perimetro del triangulo es:"<<P<<endl;
		break;
	}
	case 5:
	{			
		cout<<"INGRESE LOS ANGULOS:"<<endl<<endl;
        cout<<"Lea detenidamente y siga las instrucciones"<<endl<<endl;
	      cout<<"Ingrese el angulo A en grados"<<endl;
		    cin>>A;
		  cout<<"Ingrese el angulo B en grados"<<endl;
		    cin>>B;
		  cout<<"Ingrese el angulo C en grados"<<endl;
		    cin>>C;
		  cout<<"valor del Area = "<<endl; 
		    cin>>At;
		while (A+B+C < 180 )
		{
          cout <<"\nLos angulos necesariamente deben sumar 180\n "<<endl;
          cout<<"Ingrese el angulo A en grados"<<endl;
		    cin>>A;
		  cout<<"Ingrese el angulo B en grados"<<endl;
		    cin>>B;
		  cout<<"Ingrese el angulo C en grados"<<endl;
		    cin>>C;
		  cout<<"valor del Area = "<<endl; 
		    cin>>At;
        }    
		cout<<endl; 
			c=sqrt((At*2*sin((A*PI)/180))/sin((A*PI)/180)*sin((B*PI)/180));
			a=(c*sin((A*PI)/180))/sin((C*PI)/180);
			b=(c*sin((B*PI)/180))/sin((C*PI)/180);
			At=(b*a*sin((C*PI)/180)/2);
			P=a+b+c;
			ma = (sqrt(2*(b*b+c*c)-a*a))/2;
	        mb = (sqrt(2*(a*a+c*c)-b*b))/2;
	        mc = (sqrt(2*(a*a+b*b)-c*c))/2;
	//Los resultados con los tipos de datos presentados seran:	
		cout<<"El resultado de a es :"<<a<<endl;
		cout<<"El resultado de b es :"<<b<<endl;
		cout<<"El resultado de c es :"<<c<<endl;
		cout<<"El area del triangulo es:"<<At<<endl;
		cout<<"La media de a es:"<<ma<<endl;
		cout<<"La media de b es:"<<mb<<endl;
		cout<<"La media de c es:"<<mc<<endl;
		cout<<"El perimetro del triangulo es:"<<P<<endl;
		break;
	}
    }	
}
