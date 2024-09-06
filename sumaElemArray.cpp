#include<iostream>
using namespace std;

int SumaArray(int[],int);

int main(){
	int arr[]={1,3,5,7,9,11,13,15,17,19,21},n;
	n=-1;
	for(int i=0;arr[i]!='\0';i++){		//Se hace para poder agregar mas numeros al arreglo
		n++;
	}
	for(int i=0;i<=n;i++){
		if(i==n){
			cout<<arr[i]<<". ";
		}else{
			cout<<arr[i]<<", ";
		}
	}
	cout<<"\n\nDe los siguientes numeros, su suma es: "<<SumaArray(arr,n)<<endl;
	return 0;
}

int SumaArray(int arr[],int n){
	
	if(n==0){
		return arr[0];
	}else {
		return arr[n]+SumaArray(arr,n-1);
	}
}
