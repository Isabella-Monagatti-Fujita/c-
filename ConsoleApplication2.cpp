// ConsoleApplication1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;  
int consistir(int n) {
	cout << "Digite um numero: ";
	cin >> n;
	return(n);
}
int soma(int n) {
	if (n == 0) {
		return(0);
	}
	return(n + soma(n - 1));

}
int main()
{
	int num = 0;
	num = consistir(num);
	cout << soma(num);
}


