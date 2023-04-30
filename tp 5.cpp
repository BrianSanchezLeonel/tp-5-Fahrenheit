#include<bits/stdc++.h>
using namespace std;
float CalcularFahrenheit(int Celciuls);
int main(){
	int Celciuls;
	cout<<"Ingrese los grados fahrenheit:";
	cin>>Celciuls;
	float c=CalcularFahrenheit(Celciuls);
	cout<<"Destino:"<<c;
	return 0;
}
float CalcularFahrenheit(int Celciuls){
	float Fahrenheit;
	Fahrenheit=(Celciuls-32)*5/9;
	return Fahrenheit;
}