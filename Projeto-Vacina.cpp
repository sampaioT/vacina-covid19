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
		cout << "\n\nMarque de acordo com sua classifica��o!";
		cout << "\n\n [1]Trabalho na �rea da Sa�de;\n [2]Idoso(75 anos ou mais);\n [3]Ind�gena;\n [4]Idoso(60 aos 74 anos);\n [5]Maior de 18 anos com comorbidades;\n [6]Professor, Profissional das For�as de Seguran�a ou Sistema Prisional: ";	
		cin >> val;
		
		switch(val){
			case 1:
			case 2:
			case 3:
			cout << "\nSer� vacinado na primeira fase! ";
			break;
			
			case 4:
			cout << "\nSer� vacinado na fase dois! ";
			break;
			
			case 5:
			cout << "\nSer� vacinado na fase tr�s! ";
			break;
			
			case 6:
			cout << "\nSer� vacinado na fase 4! ";
			break;
			
			default: 
			cout << "\nAguarde a pr�xima fase! ";

				
		}
		 	
	return 0;
}
