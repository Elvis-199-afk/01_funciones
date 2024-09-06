#include<iostream>

using namespace std;

int Multiplicacion(int, int);

int main(){
	int a,b;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	do{
		if(a<1){
			cout<<"Ingrese un numero mayor a '0': ";
			cin>>a;
		}
	}while(a<1);
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	do{
		if(b<1){
			cout<<"Ingrese un numero mayor a '0': ";
			cin>>b;
		}
	}while(b<1);
	system("cls");
	cout<<"\nLa multiplicacion de "<<a<<" x "<<b<<" es: "<<Multiplicacion(a,b)<<endl;
	return 0;
}

int Multiplicacion(int m,int n){
	if(n==1){
		return m;
	}else{
		return m+Multiplicacion(m,n-1);
	}
}
