#include<iostream>
#include<conio.h>

using namespace std;

int numeros;

template <class TIPO1,class TIPO2>
void ordenAscendente(TIPO1 *ptarreglo,TIPO2 primero,TIPO2 ultimo);

template <class TIPO1,class TIPO2>
void ordenDescendente(TIPO1 *ptarreglo2,TIPO2 primero,TIPO2 ultimo);

int main(){
	int a,b;
	do{
		cout<<"--------PROGRAMA DE ARREGLOS CON TEMPLATE----------------"<<endl;
		cout<<"1.- arreglo ascendente y descendente FLOTANTE:"<<endl;
		cout<<"2.- arreglo descendente y descendente ENTERO:"<<endl;
		cout<<"3.- salir:"<<endl;
		cin>>a;
		
		switch(a){
			case 1:
				float arreglo[100];
				cout<<"cuantos numeros flotantes desea ingresar: "; cin>>numeros;
				for(int i=0;i<numeros;i++){
					cout<<"ingresa numero["<<i+1<<"]: "; cin>>arreglo[i];
				}
				int num1,num2;
				float *ptarreglo;
				ptarreglo=arreglo;
				num1=arreglo[0];
				num2=arreglo[(sizeof arreglo/sizeof arreglo[0])-1];
				ordenAscendente(ptarreglo,num1,num2);
				
				cout<<endl;
				cout<<"EL RESULTADO ASCENDENTE ES:"<<endl;
				for(int i=0;i<numeros;i++){
					cout<<arreglo[i]<<" ";
				}
				ordenDescendente(ptarreglo,num1,num2);
				cout<<endl;
				cout<<"EL RESULTADO DESCENDENTE ES:"<<endl;
				for(int i=0;i<numeros;i++){
					cout<<arreglo[i]<<" ";
				}
				cout<<endl;
				break;
			case 2:
				int arreglo2[100];
				cout<<"cuantos numeros enteros desea ingresar: "; cin>>numeros;
				for(int i=0;i<numeros;i++){
					cout<<"ingresa numero["<<i+1<<"]: "; cin>>arreglo2[i];
				}
				int n1,n2;
				int *ptarreglo2;
				ptarreglo2=arreglo2;
				n1=arreglo[0];
				n2=arreglo[(sizeof arreglo/sizeof arreglo[0])-1];
				ordenAscendente(ptarreglo2,n1,n2);
				
				cout<<endl;
				cout<<"EL RESULTADO ASCENDENTE ES:"<<endl;
				for(int i=0;i<numeros;i++){
					cout<<arreglo2[i]<<" ";
				}
				ordenDescendente(ptarreglo2,n1,n2);
				cout<<endl;
				cout<<"EL RESULTADO DESCENDENTE ES:"<<endl;
				for(int i=0;i<numeros;i++){
					cout<<arreglo2[i]<<" ";
				}
				cout<<endl;
				break;
			case 3:
				cout<<"seguro que quieres salir? SI o NO"<<endl;
				cout<<"1.- SI"<<endl;
				cout<<"2.- NO"<<endl;
				cin>>b;
				if(b==1){
					return 0;
				}
				else{
					return main();
				}
				break;
			default:
				return main();
				break;
		}
	}
	while(a!=3);
	getch();
	return 0;
}

template <class TIPO1,class TIPO2>
void ordenAscendente(TIPO1 *ptarreglo,TIPO2 primero,TIPO2 ultimo){
	TIPO1 aux;
	for(int i=0;i<numeros;i++){
		for(int j=0;j<numeros-1;j++){
			if(*(ptarreglo+j)>*(ptarreglo+j+1)){
				aux=*(ptarreglo+j);
				*(ptarreglo+j)=*(ptarreglo+j+1);
				*(ptarreglo+j+1)=aux;
			}
		}
	}
}

template <class TIPO1,class TIPO2>
void ordenDescendente(TIPO1 *ptarreglo2,TIPO2 primero,TIPO2 ultimo){
	TIPO1 aux;
	for(int i=0;i<numeros;i++){
		for(int j=0;j<numeros-1;j++){
			if(*(ptarreglo2+j)<*(ptarreglo2+j+1)){
				aux=*(ptarreglo2+j);
				*(ptarreglo2+j)=*(ptarreglo2+j+1);
				*(ptarreglo2+j+1)=aux;
			}
		}
	}
}