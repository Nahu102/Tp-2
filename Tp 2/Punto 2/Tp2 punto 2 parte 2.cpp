#include <iostream>
using namespace std;
int main () {
	int num1;
	int num2;
	int rts1;
	int rts2;
	int rts3;
	int rts4;
	cout<<("ingresar el primer valor:");
	cin>>num1;
	cout<<("ingrsar el segundo valor:");
	cin>>num2;
	if(num1>num2)
	{
	rts1=num1+num2;
	rts2=num1-num2;
	cout<<("el resultado de la suma es:")<<rts1;
	cout<<("  /  el resultado de la resta es:")<<rts2;
	}
	else
	{
	rts3=num1*num2;
	rts4=num1/num2;
	cout<<("el resultado del producto es:")<<rts3;
	cout<<("  /  el resultado de la division es:")<<rts4;
	}
	return 0;
}
