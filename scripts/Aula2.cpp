#include <iostream>

int main() {
    int numero;

    // Solicita que o usuário digite um número
    std::cout << "Digite um número: ";

    // Usa std::cin para receber a entrada do usuário
    std::cin >> numero;

    // Exibe o número de volta para o usuário
    std::cout << "Você digitou: " << numero << std::endl;

    return 0;
}