#include <iostream>
using namespace std;
int main () {
	int num1;
	cout << ("ingrese el primer valor:");
	cin >>num1;
	if(num1<0)
	{
	cout<<("es negativo");
	}
	else
	{
	if (num1==0)
	{
	cout<<("es nulo");
	}
	else
	cout<<("es positivo");
	}
	return 0;
	}
