//LAB-2: EJERCICIO 2: MATRICES DE VANDERMONDE
//APELLIDO Y NOMBRES: MAMANI SARZURI GUADALUPE
//ASIGNATURA: LABORATORIO DE ETN-307
//EN ESTE TRABAJO SE VA A GENERAR MATRICES DE VANDERMONDE Y CALCULAR SU RESPECTIVA DETERMINANTE 
// ^_^

#include <iostream>
#include <cmath>
#include<windows.h>    // Me ayuda a que la linea 23 pueda acceder a propiedades graficas
#define MAX 100

using namespace std;

void A(int matriz[100][100], int n);
int determinante(int matriz[100][100], int n);
int cofactor(int matriz[100][100], int n, int fila, int columna);

COORD coord={0, 0};          // Lo que hace es generar una estructura para guardar las coordenadas donde ponga el cursor
void gotoxy(int x, int y)      // la funcion void no devolvera nada pero recibira dos datos
{
	coord.X= x;
	coord.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);   //Esta funcion me lleva a el cursor a la posicion dadas en coord 
}

int main(){
int main()
{
	short int i, j, n;
	int matriz[100][100], deter;
	
	cout<<"INTRODUZCA EN NUMERO DE ELEMENTOS"<<endl;
	cin>>n;
	cout<<"INTRODUZCA LOS DATOS DE LA MATRIZ A: "<<endl;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
	{
			gotoxy(10+j*9, 4+i);
			cin>>matriz[i][j];
	}
		cout<<endl;
		
		cout << "El determinante es: A = " << determinante(matriz, n) << endl;
		
		return 0;
}

int determinante(int matriz[100][100], int n)
{
	int det = 0.0;
	
	if (n == 1) {
		det = matriz[0][0];
	} else {
		for (int j = 0; j < n; j++) {
			det = det + matriz[0][j] * cofactor(matriz, n, 0, j);
		}
	}
	
	return det;
}

int cofactor(int matriz[100][100], int n, int fila, int columna)
{
	int submatriz[100][100];
	int m = n - 1;
	int x = 0;
	int y = 0;
	for (int i = 0; i < n; i++){ 
		for (int j = 0; j < n; j++){ 
			if (i != fila && j != columna){ 
				submatriz[x][y] = matriz[i][j];
				y++;
				if (y >= m){ 
					x++;
					y = 0;
				}
			}
		}
	}
	return pow(-1.0, fila + columna) * determinante(submatriz, m);
	cout<<endl;
}     
} 
