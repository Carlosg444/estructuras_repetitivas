#include <iostream>
using namespace std;
int main (){
int n, i, f;
cout<<"Inserte un numero entero positivo: "<<endl;
cin>>n;
if (n<0){
	cout<<"El numero debe ser entero positivo";
	return 0;
	}
i=n-1;
f=1;
while (i>=1){
	f=n*f;
	n=n-1;
	i=i-1;
	}
cout<<"El factorial es: "<<f<<endl;
}
