#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

template <class TIPO1,class TIPO2>
void concatenar(TIPO1 letra,TIPO2 apellido);

int main(){
	concatenar('A',"gonzalez");
	concatenar('B',"rodriguez");
	concatenar('C',"fernandez");
	concatenar('D',"diaz");
	concatenar('E',"perez");
	getch();
	return 0;
}

template <class TIPO1,class TIPO2>
void concatenar(TIPO1 letra,TIPO2 apellido){
	TIPO1 cadenaTemporal[50];
    cadenaTemporal[0] = letra;
    cadenaTemporal[1] = '\0';
    TIPO1 temporal[50] = "@unsa.edu.pe.";
    strcat(cadenaTemporal,apellido );
    strcat(cadenaTemporal, temporal);
    cout<<"LA CADENA ES: "<<cadenaTemporal<<endl;

}