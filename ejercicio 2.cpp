#include<iostream>
#include<conio.h>

using namespace std;

template <class TIPO1,class TIPO2>
void operacionesBasicas(TIPO1 numero,TIPO2 numero2);

int main()
{
	int num1=30;
	float num2=15.5;
	cout<<"OPERACIONES BASICAS:"<<endl;
	operacionesBasicas(num1,num2);
	getch();
	return 0;
}

template <class TIPO1,class TIPO2>
void operacionesBasicas(TIPO1 numero,TIPO2 numero2){
	TIPO2 suma,resta,multiplicacion,division;
	suma=numero+numero2;
	resta=numero-numero2;
	multiplicacion=numero*numero2;
	division=numero/numero2;
	
	cout<<"la suma es:"<<suma<<endl;
	cout<<"la resta es:"<<resta<<endl;
	cout<<"la multiplicacion es:"<<multiplicacion<<endl;
	cout<<"la division es:"<<division<<endl;
}