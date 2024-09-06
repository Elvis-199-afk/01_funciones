#include<iostream>
using namespace std;

int factorial(int);

int main(){
	int num;
	cout<<"Ingrese el numero el cual quiera calcular su factorial: ";
	cin>>num;
	do{
		if(num<0){
		cout<<"Ingrese un numero positivo: ";
		cin>>num;
		}
	}while(num<0);
	system("cls");
	cout<<"El factorial de "<<num<<" es: "<<factorial(num)<<endl;
	return 0;
}

int factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
