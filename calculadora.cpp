#include <iostream>
#include <algorithm>


class calculadora {
public:
	int soma(int a, int b) {
		return a + b;
	}
	int subtracao(int a, int b) {
		return a - b;
	}
	int multiplicacao(int a, int b) {
		return a * b;
	}
	int divisao(int a, int b) {
		return a / b;
	}
};

int a{};
int b{};
calculadora calculo;

int main() {
	std::cout << "Essa e uma calculadora simples de numeros inteiros\n Escolha o que quer fazer:\nA (Somar)\nB (Subtrair)\nC (Multiplicar)\nD (Dividir)\nE (Sair)\n";
	char escolha{};
	std::cin >> escolha;
	escolha = std::toupper(escolha);

	switch (escolha) {
	case 'A':
		std::cout << "Voce escolheu Somar\nDigite o Primeiro Numero: ";
		std::cin >> a;
		std::cout << "\nDigite o Segundo Numero: ";
		std::cin >> b;
		std::cout << "O resultado e: " << calculo.soma(a, b) << std::endl;
		break;
	case 'B':
		std::cout << "Voce escolheu Subtrair\nDigite o Primeiro Numero: ";
		std::cin >> a;
		std::cout << "\nDigite o Segundo Numero: ";
		std::cin >> b;
		std::cout << "O resultado e: " << calculo.subtracao(a, b) << std::endl;
		break;
	case 'C':
		std::cout << "Voce escolheu Multiplicar\nDigite o Primeiro Numero : ";
		std::cin >> a;
		std::cout << "\nDigite o Segundo Numero: ";
		std::cin >> b;
		std::cout << "O resultado e: " << calculo.multiplicacao(a, b) << std::endl;
		break;
	case 'D':
		std::cout << "Voce escolheu Dividir\nDigite o Primeiro Numero : ";
		std::cin >> a;
		std::cout << "\nDigite o Segundo Numero: ";
		std::cin >> b;
		std::cout << "O resultado e: " << calculo.divisao(a, b) << std::endl;
		break;
	case 'E':
		std::cout << "Saindo..." << std::endl;
		break;
	default:
		std::cout << "Escolha uma opcao valida." << std::endl;
	}
	return 0;
}