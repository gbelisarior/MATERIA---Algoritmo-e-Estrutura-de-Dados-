#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	cout << " \n  Seja muito bem vindo ao nosso site OFICIAL para pesquisa quantitativa de filhos baseados na sua idade ! \n";
	
	string nome;
	
	cout << " \n Informe seu primeiro nome : ";
	 cin >> nome;
	 
	int idade;
	
	cout << " \n Informe sua Idade: ";
	 cin >> idade;
	 
	 
	if(idade % 3 == 0) {
		cout << "voce tera 3 filhos\n";
	} else {
		cout << "voce tera 2 filhos\n";
	}
	
	system("pause");
	
		return 0;
}
