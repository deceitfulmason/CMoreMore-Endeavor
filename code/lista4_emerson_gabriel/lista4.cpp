#include <iostream>
using namespace std;

void mostrarMenu();

int main() {
    int seletor = -1;


while(true){
   mostrarMenu();
	cin >> seletor;
	if(seletor >= 1 || seletor <= 6) cout << "\nEscolha válida!";
	else cout << "\nEscolha inválida, escolha um nome entre 1 e 6!";
}


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
            cout << "\nEscolha inválida, escolha um número entre 0 e 6!\n";
            break;
    }

    return 0;
}

//==============================
//======= Funcao Menu ==========
//==============================
void mostrarMenu() {
    cout << "\n╔════════════════════════════════╗\n";
    cout << "║        MENU PRINCIPAL          ║\n";
    cout << "╠════════════════════════════════╣\n";
    cout << "║ 1 - Sequencia de letras        ║\n";
    cout << "║ 2 - Somatorio (k + 33)         ║\n";
    cout << "║ 3 - Raiz quadrada em [a,b]     ║\n";
    cout << "║ 4 - Padrao numerico/asteriscos ║\n";
    cout << "║ 5 - Valores de f(x) (float)    ║\n";
    cout << "║ 6 - Zeros de equacao 2º grau   ║\n";
    cout << "║ 0 - Sair                       ║\n";
    cout << "╚════════════════════════════════╝\n";
}
