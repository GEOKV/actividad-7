#include <iostream> 
using namespace std;
 
int suma3(int num1,int num2, int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}
void suma(int num1,int num2){
	int resultado = 0;
	resultado = num1+num2;
	cout<<resultado<<endl;
}


main() {

	suma(10,20);

	system("pause");
}

