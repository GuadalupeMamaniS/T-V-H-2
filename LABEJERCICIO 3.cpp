//LAB-2: EJERCICIO 3: DIVISION DE POLINOMIOS POR EL METODO DE HORNER
//APELLIDO Y NOMBRES: MAMANI SARZURI GUADALUPE
//ASIGNATURA: LABORATORIO DE ETN-307
//EN ESTE TRABAJO SE REALIZARA LA DIVISION DE POLINOMIOS POR EL METODO HORNER 
// ^_^
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	int *dividendo=NULL,*cociente=NULL,*divisor=NULL,c1,c2,m;
	
	cout<<"                 SE RESOLVERA DIVISIONES DEPOLINOMIOS POR EL METODO DE HORNER"<<endl<<endl;
	cout<< "INGRESE EL TAMAÑO DEL DIVIDENDO : ";//insertar el valor del mayor exponente mas uno, es decir si su mayor exponente es 3 inserte el valor de 4
 	cin>>c1;
 	dividendo= new int [c1];
 	cociente= new int [c1];
 	cout<<endl;
 	cout<< "INGRESE LOS COEFICIENTES DEL DIVIDENDO CON SU RESPECTIVO SIGNO : "<<endl<<endl;//solo poner el (-), el (+) se sobreentiende 
 	
 	for(int i=0; i<c1; i++)
	{
 		cout<<"X^"<<c1-(i+1)<<" : ";
 		cin>>dividendo[i];
	}
 	cout<<endl; 
 	cout<< "INGRESE EL TAMAÑO DEL DIVISOR: ";//insertar el valor del mayor exponente mas uno, es decir si su mayor exponente es 2 inserte el valor de 3
 	cin>>c2;
 	divisor= new int [c2];	
 	cout<<endl;
	cout<< "INGRESE LOS COEFICIENTES DEL DIVISOR CON SU RESPECTIVO SIGNO : "<<endl<<endl;//solo poner el (-), el (+) se sobreentiende
	
	for(int i=0; i<c2; i++)
	{
 		cout<<"X^"<<c2-(i+1)<<" : ";
 		cin>>divisor[i];
	}
	
	for (int i=0; i<=c1-c2;i++)
	{
		cociente[i]=dividendo[i]/divisor[0];
		
		m=0;
		
		for (int j=0; j<c2-1;j++)
		{
			m=m+1;
			dividendo[j+i+1]=dividendo[j+i+1]-cociente[i]*divisor[m];
		}
	}
	cout<<endl;
	cout<< "EL COCIENTE ES : "<<endl<<endl;
	for(int i=0; i<=c1-c2; i++)
	{
 		cout<<"X^"<<c1-c2-i<<" : "<<cociente[i]<<endl;
	}
	cout<<endl;
	cout<< "EL RESIDUO ES: "<<endl<<endl;
	m=0;
	for(int i=c1-c2+1; i<c1; i++)
	{
 		cout<<"X^"<<c2-2-m<<" : "<<dividendo[i]<<endl;
 		m=m+1;	
	}
	
	return 0;
}

