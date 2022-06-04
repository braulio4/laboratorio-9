#include<iostream>
#include<conio.h>

using namespace std;

int largo=5;

template <class TIPO>
TIPO maximo(TIPO arreglo[]);

template <class TIPO2>
TIPO2 minimo(TIPO2 arreglo[]);

int main(){
	int arreglo[5]={10,7,2, 8, 6};
	int j=maximo(arreglo);
	int k=minimo(arreglo);
	cout<<"VALOR ENTERO: "<<endl;
	cout << "mayor : " << j << endl;
	cout << "menor : " << k << endl;
	cout<<endl;
	
	float arreglo2[5]={12.1, 8.7, 5.6, 8.4, 1.2};
	float a=maximo(arreglo2);
	float b=minimo(arreglo2);
	cout<<"VALOR FLOTANTE: "<<endl;
	cout << "mayor : " << a << endl;
	cout << "menor : " << b << endl;
	cout<<endl;
	getch();
	return 0;
}

template <class TIPO>
TIPO maximo(TIPO arreglo[]){
	TIPO mayor;
	mayor=arreglo[0];
	for(int i=0;i<largo;i++){
		if(mayor<arreglo[i]){
			mayor=arreglo[i];
		}
	}
	return mayor;
}

template <class TIPO2>
TIPO2 minimo(TIPO2 arreglo[]){
	TIPO2 menor;
	menor=arreglo[0];
	for(int i=0;i<largo;i++){
		if(menor>arreglo[i]){
			menor=arreglo[i];
		}
	}
	return menor;
}