#include <iostream>
using namespace std;

void menu();

int main() {
    int seletor;

    menu();
	cin >> seletor;
	if(seletor >= 1 || seletor <= 6) cout << "\nEscolha válida!";
	else cout << "\nEscolha inválida, escolha um nome entre 1 e 6!";

    switch (seletor) {
        case 1:
            cout << "x eh 1\n";
        break;
        case 2:
            cout << "x eh 2\n";
        break;
	case 3:


	break;

	case 4:

	break;
	case 5:

	break;

	case 6:

        default:
            cout << "\nEscolha inválida, escolha um número entre 1 e 6!\n";
            break;
    }

    return 0;
}

//==============================
//======= Funcao Menu ==========
//==============================
void menu() {
    cout << "╔════════════════════════╗\n";
    cout << "║   Bem-vindo ao menu    ║\n";
    cout << "║  Selecione a sua opcao ║\n";
    cout << "║   [1]                  ║\n";
    cout << "║   [2]                  ║\n";
    cout << "║   [3]                  ║\n";
    cout << "║   [4]                  ║\n";
    cout << "║   [5]                  ║\n";
    cout << "║   [6]                  ║\n";
    cout << "╚════════════════════════╝\n";
}

