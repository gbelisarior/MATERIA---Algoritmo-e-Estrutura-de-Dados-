#include <iostream>


        using namespace std;

        int solution(int ano) {
        
        	int seculo = (ano + 99) / 100;
        	cout << "O ano " << "se encontra no seculo  " << seculo << endl;
        	
        	return seculo;
        }
        
        int main (){
        	
			int ano;	
        	cout << "Informe o ano: ";
        	cin >> ano;
        	
        	
        	int seculo = solution (ano);
        	
        	return 0;
		}
		
