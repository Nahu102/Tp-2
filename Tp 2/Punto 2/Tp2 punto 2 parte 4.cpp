#include <iostream>
using namespace std;
int main () {
	int num1;
	int num2;
	int num3;
	int rts;
	int promedio;
	cout<<("ingrese la primera nota:");
	cin>>num1;
	cout<<("ingrese la segunda nota:");
	cin>>num2;
	cout<<("ingrese la tercera nota:");
	cin>>num3;
	rts=num1+num2+num3;
	promedio=rts/3;
	if(promedio>=7)
	{
	cout<<("Tea");
	}
	else if(promedio>=4&&promedio<=7)
	{
	cout<<("Tep");
	}
	else if(promedio<=4)
	{
	cout<<("Ted");
	}
	return 0;
}
