#include <iostream>

//codigo em C++ que verifica qual seculo de acordo com o ano informado. 
        using namespace std;

        int solution(int ano) {
        
        	int seculo = (ano + 99) / 100;
        	cout << " \n O ano: " << " \n se encontra no seculo:  " << seculo << endl;
        	
        	return seculo;
        }
        
        int main (){
        	
			int ano;	
        	cout << "Informe o ano: ";
        	cin >> ano;
        	
        	
        	int seculo = solution (ano);
        	
        	return 0;
		}
		
