/*11: Diseña un algoritmo que reciba un número entero positivo y calcule su factorial. El
factorial de un número, representado como n!, es el producto de todos los números
positivos menores o iguales a n. Por ejemplo: 5! = 5 × 4 × 3 × 2 × 1 = 120.*/
#include <iostream>
using namespace std;
// Funcion que calcula el factorial de un numero entero positivo
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
	//Entrada
	cout<<"Inserte un numero entero positivo: "<<endl;
	cin>>n;
	//Salida
	cout<<"El factorial de "<<n<<" es: "<<calcularFactorial(n)<<endl;	
}

