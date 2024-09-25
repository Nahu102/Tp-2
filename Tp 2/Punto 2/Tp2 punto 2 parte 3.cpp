#include <iostream>
using namespace std;
int main () {
	int A;
	int B;
	int C;
	cout<<("ingrese el primer valor:");
	cin>>A;
	cout<<("ingrese el segundo valor:");
	cin>>B;
	cout<<("ingrese el segundo valor:");
	cin>>C;
	if(A==B&&B==C)
	{
	cout<<("no se pudo realizar la operacion debido a que los tre valores son iguales la proxima ponga 3 valores diferentes.");
	}
	else if(A>B&&A>C)
	{
	cout<<("el mayor numero es:")<<A;
	}
	else if(B>A&&B>C)
	{
	cout<<("el mayor numero es:")<<B;
	}
	else
	{
	cout<<("el mayor numero es:")<<C;
	}
	return 0;
	}

