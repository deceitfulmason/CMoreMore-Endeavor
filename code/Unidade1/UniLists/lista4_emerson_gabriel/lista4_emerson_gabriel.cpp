#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

int readInt(const string &prompt) {
    string line;
    while (true) {
        cout << prompt;
        if (!getline(cin, line)) exit(0);
        stringstream ss(line);
        int v;
        char extra;
        if (ss >> v && !(ss >> extra)) return v;
        cout << "Entrada inválida. Digite um inteiro.\n";
    }
}

double readDouble(const string &prompt) {
    string line;
    while (true) {
        cout << prompt;
        if (!getline(cin, line)) exit(0);
        stringstream ss(line);
        double v;
        char extra;
        if (ss >> v && !(ss >> extra)) return v;
        cout << "Entrada inválida. Digite um número (com ponto decimal se necessário).\n";
    }
}

char readSingleChar(const string &prompt) {
    string line;
    while (true) {
        cout << prompt;
        if (!getline(cin, line)) exit(0);
        size_t start = line.find_first_not_of(" \t\r\n");
        size_t end = line.find_last_not_of(" \t\r\n");
        if (start == string::npos) { cout << "Entrada vazia. Tente novamente.\n"; continue; }
        string trimmed = line.substr(start, end - start + 1);
        if (trimmed.size() == 1) return trimmed[0];
        cout << "Digite apenas um caractere.\n";
    }
}

void mostrarMenu();
void opcao01_sequenciaLetras();
void opcao02_somatorio();
void opcao03_raizInteiros();
void opcao04_padraoNumericoAsteriscos();
void opcao05_valoresFx();
void opcao06_zerosQuadratica();

int main() {
    char seletor = '0';
    bool rodando = true;

    while (rodando) {
        mostrarMenu();
        seletor = readSingleChar("Escolha (0 = sair, 1-6 = opcoes): ");
        if (!isdigit(static_cast<unsigned char>(seletor)) || seletor < '0' || seletor > '6') {
            cout << "Entrada inválida. Digite um número entre 0 e 6.\n\n";
            continue;
        }

        switch (seletor) {
            case '1': opcao01_sequenciaLetras(); break;
            case '2': opcao02_somatorio(); break;
            case '3': opcao03_raizInteiros(); break;
            case '4': opcao04_padraoNumericoAsteriscos(); break;
            case '5': opcao05_valoresFx(); break;
            case '6': opcao06_zerosQuadratica(); break;
            case '0': rodando = false; break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }

        if (rodando) {
            cout << "\nPressione Enter para voltar ao menu...";
            string tmp; getline(cin, tmp);
            cout << "\n";
        }
    }

    cout << "Programa encerrado.\n";
    return 0;
}

void mostrarMenu() {
    cout << "\n╔════════════════════════════════╗\n";
    cout << "║        MENU PRINCIPAL          ║\n";
    cout << "╠════════════════════════════════╣\n";
    cout << "║ 1 - Sequencia de letras        ║\n";
    cout << "║ 2 - Somatorio (k + 33)         ║\n";
    cout << "║ 3 - Raiz quadrada em [a,b]     ║\n";
    cout << "║ 4 - Padrao numerico/asteriscos ║\n";
    cout << "║ 5 - Valores de f(x)PS  (float) ║\n";
    cout << "║ 6 - Zeros de equacao 2º grau   ║\n";
    cout << "║ 0 - Sair                       ║\n";
    cout << "╚════════════════════════════════╝\n";
}

void opcao01_sequenciaLetras() {
    cout << "\n--- Sequencia de letras ---\n";
    char a = readSingleChar("Digite a primeira letra: ");
    char b = readSingleChar("Digite a segunda letra: ");

    if (!isalpha(static_cast<unsigned char>(a)) || !isalpha(static_cast<unsigned char>(b))) {
        cout << "Erro: ambas devem ser letras do alfabeto.\n";
        return;
    }

    char A = static_cast<char>(tolower(static_cast<unsigned char>(a)));
    char B = static_cast<char>(tolower(static_cast<unsigned char>(b)));

    if (A > B) swap(A, B);

    cout << "Sequencia entre '" << A << "' e '" << B << "':\n";
    for (char c = A; c <= B; ++c) {
        cout << c;
        if (c != B) cout << ' ';
    }
    cout << '\n';
}

void opcao02_somatorio() {
    cout << "\n--- Somatorio y = sum_{k=a}^{b} (k + 33) ---\n";
    int a = readInt("Digite a (inteiro): ");
    int b = readInt("Digite b (inteiro): ");
    if (a > b) swap(a, b);

    long long soma = 0;
    for (int k = a; k <= b; ++k) soma += (k + 33LL);

    cout << "Resultado: y = " << soma << '\n';
}

void opcao03_raizInteiros() {
    cout << "\n--- Raiz quadrada dos inteiros em [a,b] ---\n";
    int a = readInt("Digite a (inteiro): ");
    int b = readInt("Digite b (inteiro): ");
    if (a > b) swap(a, b);

    cout << fixed << setprecision(6);
    for (int k = a; k <= b; ++k) {
        cout << k << " -> ";
        if (k >= 0) {
            cout << sqrt(static_cast<double>(k)) << '\n';
        } else {
            double r = sqrt(static_cast<double>(-k));
            cout << "i*" << r << " (imaginario)\n";
        }
    }
}

void opcao04_padraoNumericoAsteriscos() {
    cout << "\n--- Padrao numerico/asteriscos ---\n";
    int n = readInt("Digite n (inteiro positivo): ");
    if (n <= 0) { cout << "n deve ser positivo.\n"; return; }

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= n - i; ++j) cout << j;
        for (int k = 0; k < i; ++k) cout << '*';
        cout << '\n';
    }
}

void opcao05_valoresFx() {
    cout << "\n--- Valores de f(x) = 3*a*x^2 + b*x + c ---\n";
    double a = readDouble("Digite a (float): ");
    double b = readDouble("Digite b (float): ");
    double c = readDouble("Digite c (float): ");
    double xmin = readDouble("Digite xmin (float): ");
    double xmax = readDouble("Digite xmax (float): ");
    double delta = readDouble("Digite delta (passo, != 0): ");
    if (delta == 0.0) { cout << "delta não pode ser zero.\n"; return; }

    bool crescente = (xmin <= xmax && delta > 0) || (xmin >= xmax && delta < 0);
    if (!crescente) {
        cout << "Sinal de delta incompatível com os limites (xmin, xmax). Ajuste delta ou os limites.\n";
        return;
    }

    cout << fixed << setprecision(6);
    double x = xmin;
    const double EPS = 1e-12;
    if (delta > 0) {
        while (x <= xmax + EPS) {
            double fx = 3.0 * a * x * x + b * x + c;
            cout << "x = " << setw(10) << x << "  f(x) = " << fx << '\n';
            x += delta;
        }
    } else {
        while (x >= xmax - EPS) {
            double fx = 3.0 * a * x * x + b * x + c;
            cout << "x = " << setw(10) << x << "  f(x) = " << fx << '\n';
            x += delta;
        }
    }
}

void opcao06_zerosQuadratica() {
    cout << "\n--- Zeros da equacao ax^2 + bx + c ---\n";
    double a = readDouble("Digite a (float): ");
    double b = readDouble("Digite b (float): ");
    double c = readDouble("Digite c (float): ");

    cout << fixed << setprecision(6);

    if (fabs(a) < 1e-15) {
        if (fabs(b) < 1e-15) {
            if (fabs(c) < 1e-15) cout << "Infinitas solucoes (0 = 0).\n";
            else cout << "Sem solucoes (equacao inconsistente).\n";
        } else {
            double x = -c / b;
            cout << "Equacao linear. Solucao: x = " << x << '\n';
        }
        return;
    }

    double D = b*b - 4.0*a*c;
    if (D > 0) {
        double r1 = (-b + sqrt(D)) / (2.0*a);
        double r2 = (-b - sqrt(D)) / (2.0*a);
        cout << "D = " << D << " > 0: duas raizes reais distintas:\n";
        cout << "x1 = " << r1 << "\n";
        cout << "x2 = " << r2 << "\n";
    } else if (fabs(D) <= 1e-15) {
        double r = -b / (2.0*a);
        cout << "D = 0: raiz real dupla: x = " << r << "\n";
    } else {
        double realPart = -b / (2.0*a);
        double imag = sqrt(-D) / (2.0*a);
        cout << "D < 0: raizes complexas:\n";
        cout << "x1 = " << realPart << " + i*" << imag << '\n';
        cout << "x2 = " << realPart << " - i*" << imag << '\n';
    }
}
