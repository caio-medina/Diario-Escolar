#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int opcao, menu =1;
	do
	{

		cout << "\t\t\t\tBem Vindo ao Diario Escolar" << endl;
		cout << "\t\t\t\t\tMenu" << endl;
		cout << "\t\t0 - Sair" << endl;
		cout << "\t\t1 - Cadastrar" << endl;
		cout << "\t\t2 - Entrar" << endl;
		cout << "\t\tDigite uma opcao: ";
		cin >> opcao;
		cout << endl;
		
		switch (opcao)
		{
			case 0:
				menu = 0;
				break;
			case 1:
				menu = 0;
				break;
			case 2:
				menu = 0;
				break;

			default:
			cout << "\t\tOPCAO INVALIDA" << endl;
		}
	} while(menu == 1);

	return 0;
}