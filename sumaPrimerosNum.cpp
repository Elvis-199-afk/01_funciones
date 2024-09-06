#include<iostream>

using namespace std;

int SumaPrimerosNum(int);

int main(){
	int num;
	cout<<"Ingrese cuantos numeros quiere sumar, los primeros numeros: ";
	cin>>num;
	do{
		
		if(num<1){
			cout<<"Ingrese un numero mayor a 0: ";
			cin>>num;
		}
	}while(num<1);
	system("cls");
	cout<<"La suma de los primeros "<<num<<" numeros es: "<<SumaPrimerosNum(num)<<endl;
	return 0;
}

int SumaPrimerosNum(int n){
	if(n==1){
		return 1;
	}else{
		return n+SumaPrimerosNum(n-1);
	}
}
