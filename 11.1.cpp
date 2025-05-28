#include <iostream>
using namespace std;
int main (){
int n, i, f;
f=1;
cout<<"Inserte un numero entero positivo: "<<endl;
cin>>n;
if (n<0){
	cout<<"El numero debe ser entero positivo";
	return 0;
	}
for (i=1;i<=n;i++){
	f=f*i;
	}
cout<<"El factorial es: "<<f<<endl;
}
