#include<iostream>
using namespace std;

int Combinatoria(int,int);

int main(){
	int num1, num2;
	cout<<"Ingrese el primer elemento de la combinatoria:";
	cin>>num1;
	do{
		if(num1<1){
			cout<<"Ingrese un numero mayor a 0: ";
			cin>>num1;
		}
	}while(num1<1);
	cout<<"Ingrese el segundo elemento: ";
	cin>>num2;
	do{
		if(num2<1){
			cout<<"Ingrese un numero mayor a 0: ";
			cin>>num2;
		}
	}while(num2<1);
	cout<<"La combinatoria es: "<<Combinatoria(num1,num2)<<endl;
	return 0;
}

int Combinatoria(int n,int k){
	if(n==k){
		return 1;
	}else if(k==1){
		return n;
	}else{
		return Combinatoria(n-1,k-1)+Combinatoria(n-1,k);
	}
}
