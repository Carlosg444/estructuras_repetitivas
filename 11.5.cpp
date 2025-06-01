#include <iostream>
using namespace std;
long long int calcularFactorial (int n){
	long long int f;
	f=1;
	for (int i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}

int main (){
	int n;
	cout<<"Inserte un numero entero positivo: "<<endl;
	cin>>n;
	cout<<"El factorial de "<<n<<" es: "<<calcularFactorial(n)<<endl;	
}
