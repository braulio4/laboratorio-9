#include <iostream>
#include <stdlib.h>

using namespace std;

template <class T>
T maximo(T a,T b,T c){
T max=(a>b?a:b);
return(max>c?max:c);
}

template <class D>
D minimo(D a,D b,D c){
D min=(a<b?a:b);
return(min<c?min:c);
}


int main(){
	int a,b,c;
	cout << "ingrese 3 enteros : " << endl;
	cin >> a >> b >> c;
	int j=maximo(a,b,c);
	int k=minimo(a,b,c);
	
	cout<<"VALOR ENTERO: "<<endl;
	cout << "mayor : " << j << endl;
	cout << "menor : " << k << endl;
	cout<<endl;
	
	float num1,num2,num3;
	cout << "ingrese 3 flotantes : " << endl;
	cin >> num1 >> num2 >> num3;
	float x=maximo(num1,num2,num3);
	float d=minimo(num1,num2,num3);

	cout<<"VALOR FLOTANTE: "<<endl;
	cout << "mayor : " << x << endl;
	cout << "menor : " << d << endl;
	cout<<endl;
	
	double n1,n2,n3;
	cout << "ingrese 3 DOUBLE : " << endl;
	cin >> n1 >> n2 >> n3;
	double i=maximo(n1,n2,n3);
	double f=minimo(n1,n2,n3);
	
	cout<<"VALOR DOUBLE: "<<endl;
	cout << "mayor : " << i << endl;
	cout << "menor : " << f << endl;
	
	
	
	
}
