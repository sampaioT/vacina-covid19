#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int val;
	char opc;
	inicio: 
	system("cls");
		
		cout << "===============Quando Serei Vacinado?===============";
		cout << "\n\nMarque de acordo com sua classificação!";
		cout << "\n\n [1]Trabalho na Área da Saúde;\n [2]Idoso(75 anos ou mais);\n [3]Indígena;\n [4]Idoso(60 aos 74 anos);\n [5]Maior de 18 anos com comorbidades;\n [6]Professor, Profissional das Forças de Segurança ou Sistema Prisional: ";	
		cin >> val;
		
		switch(val){
			case 1:
			case 2:
			case 3:
			cout << "\nSerá vacinado na primeira fase! ";
			break;
			
			case 4:
			cout << "\nSerá vacinado na fase dois! ";
			break;
			
			case 5:
			cout << "\nSerá vacinado na fase três! ";
			break;
			
			case 6:
			cout << "\nSerá vacinado na fase 4! ";
			break;
			
			default: 
			cout << "\nAguarde a próxima fase! ";

				
		}
		 	
	return 0;
}
