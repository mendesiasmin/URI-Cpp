/*
*	URI - Problema 1003: Soma Simples
*	Iniciante
*
*	Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir 
*	escrever o valor desta variável.
*
*	Entrada
*	O arquivo de entrada contém 2 valores inteiros.
*
*	Saída
*	Imprima a variável SOMA com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor 
*	correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você 
*	receberá "Presentation Error".
*
*/

#include <iostream>

using namespace std;

int sum(int a, int b){
	return a+b;
}

int main(){

	int a, b;

	cin >> a;
	cin >> b;

	cout << "SOMA = " << sum(a,b) << endl;

	return 0;
}

