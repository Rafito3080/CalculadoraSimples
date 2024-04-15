#include <iostream>
using namespace std;

int main (){
	double num1, num2;
	int escolha;
	do{
	cout << "Selecione uma operação: \n1 - Adição; \n2 - Subtração; \n3 - Multiplicação; \n4 - Divisão.\n";
	cin >> escolha;
	cin.ignore();
	switch(escolha){
	case 1:
		cout << "Primeiro número: \n";
		cin >> num1;
		cin.ignore();
		cout << "Segundo número: \n";
		cin >> num2;
		cin.ignore();
		cout << "O resultado da soma é: " << num1 + num2;
	break;
	case 2:
		cout << "Primeiro número: \n";
		cin >> num1;
		cin.ignore();
		cout << "Segundo número: \n";
		cin >> num2;
		cin.ignore();
		cout << "o resultado da subtração é: " << num1 - num2;
	break;
	case 3:
		cout << "Primeiro número: \n";
		cin >> num1;
		cin.ignore();
		cout << "Segundo número: \n";
		cin >> num2;
		cin.ignore();
		cout << "O resultado da multiplicação é: " << num1 * num2;
	break;
	case 4:
		do{
		cout << "Primeiro número : \n";
		cin >> num1;
		cin.ignore();
		cout << "Segundo número: ";
		cin >> num2;
		cin.ignore();
		if(num2 != 0){
			cout << "O resultado da divisão: " << num1 / num2;
		}else{
			cout << "Nenhum número é divisível por 0. \nTente novamente.\n \n";
		}
		}while(num2 == 0);
			break;
	default:
		cout << "Ocorreu um erro. Tente novamente. \n";
		break;
		}
	}while(escolha > 4);
    return 0;
}
