### Entrada e Saída de Dados

## [Voltar](https://github.com/ThiagoSousa81/Basico-de-CPP#readme)

### Usando ```std::cout``` para Saída de Dados

A saída de dados é uma parte essencial da programação, pois permite que você exiba informações para o usuário. Para isso, a linguagem C++ fornece o objeto std::cout (stream de saída padrão) como parte da biblioteca de entrada/saída padrão.

Aqui estão os passos básicos para usar std::cout para exibir saída de dados:

**1 - Incluindo a Biblioteca:** Certifique-se de incluir a biblioteca de entrada/saída padrão no início do seu programa, como mencionado anteriormente:

```#include <iostream> ```

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
    