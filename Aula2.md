### Lição 2: Entrada e Saída de Dados

## [Voltar](https://github.com/ThiagoSousa81/Basico-de-CPP#readme)

### Usando ```std::cout``` para Saída de Dados

A saída de dados é uma parte essencial da programação, pois permite que você exiba informações para o usuário. Para isso, a linguagem C++ fornece o objeto std::cout (stream de saída padrão) como parte da biblioteca de entrada/saída padrão.

Aqui estão os passos básicos para usar std::cout para exibir saída de dados:

**1 - Incluindo a Biblioteca:** Certifique-se de incluir a biblioteca de entrada/saída padrão no início do seu programa, como mencionado anteriormente:

    #include <iostream>

**2 - Exibindo Dados:** Use std::cout para exibir os dados que você deseja mostrar ao usuário. Por exemplo:

    std::cout << "Isso é uma mensagem de saída." << std::endl;

**3 - Manipulando Formatação:** Você pode usar manipuladores de formatação, como ```std::setw```, ```std::setprecision```, ```std::fixed```, entre outros, para formatar a saída de acordo com suas necessidades.

Aqui está um exemplo completo que usa ```std::cout``` para exibir uma mensagem simples:

    #include <iostream>

    int main() {
        // Exibe uma mensagem na tela
        std::cout << "Isso é uma mensagem de saída." << std::endl;

        return 0;
    }


### Usando ```std::cin``` para Entrada de Dados

Em C++, a entrada de dados é uma parte fundamental da programação. A biblioteca de entrada/saída padrão (```<iostream>```) fornece uma maneira de receber informações do usuário, que é frequentemente feita usando o objeto ```std::cin``` (stream de entrada padrão).

Aqui estão os passos básicos para usar ```std::cin``` para receber entradas do usuário:

**Incluindo a Biblioteca:** Certifique-se de incluir a biblioteca de entrada/saída padrão no início do seu programa:

    #include <iostream>

**Declaração de Variáveis:** Declare as variáveis onde você deseja armazenar os valores de entrada. Por exemplo:

    int numero;

**Recebendo Entrada:** Use ```std::cin``` para receber a entrada do usuário e atribuí-la às variáveis declaradas. Por exemplo:

    std::cout << "Digite um número: ";
    std::cin >> numero;

**Manipulando Entradas:** ```std::cin``` lê os dados até encontrar um caractere de espaço em branco, como espaço ou retorno de carro. Você pode usar ```std::cin.ignore()``` para limpar o buffer de entrada ou ```std::getline()``` para ler uma linha inteira, incluindo espaços.

Aqui está um exemplo completo de como usar ```std::cin``` para receber a entrada de um número inteiro:

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
    