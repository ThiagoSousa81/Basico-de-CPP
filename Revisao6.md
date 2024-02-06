### Revisão 6: Vetores e Arrays

## [Voltar](https://github.com/ThiagoSousa81/Basico-de-CPP#readme) | | [Compilar C++ Online](https://www.onlinegdb.com/online_c++_compiler)

### Preenchimento e impressão de vetores

Além de declarar e inicializar vetores, é comum precisarmos preenchê-los dinamicamente e imprimir seus elementos. Utilizaremos a função <code>push_back</code> para adicionar elementos ao final do vetor. Veja um exemplo de preenchimento e impressão:

    #include <iostream>
    #include <vector>

    int main() {
        // Vetor vazio de inteiros
        std::vector<int> numeros;

        // Preenchendo o vetor dinamicamente
        for (int i = 1; i <= 5; ++i) {
            numeros.push_back(i * 10);
        }

        // Imprimindo os elementos do vetor
        for (int i = 0; i < numeros.size(); ++i) {
            std::cout << numeros[i] << " ";
        }

        return 0;
    }

### Busca no Vetor

Para buscar um elemento específico em um vetor, podemos utilizar um loop para percorrer os elementos até encontrar o valor desejado. Se encontrarmos o elemento, podemos realizar a ação desejada. Caso contrário, podemos indicar que o elemento não foi encontrado. Aqui está um exemplo de busca em um vetor:

    #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> numeros = {10, 20, 30, 40, 50};
        int elementoDesejado = 30;
        bool encontrado = false;

        // Buscando o elemento no vetor
        for (int i = 0; i < numeros.size(); ++i) {
            if (numeros[i] == elementoDesejado) {
                encontrado = true;
                std::cout << "Elemento encontrado no índice " << i << std::endl;
                break; // Sair do loop, pois já encontramos o elemento
            }
        }

        // Se o elemento não for encontrado
        if (!encontrado) {
            std::cout << "Elemento não encontrado no vetor." << std::endl;
        }

        return 0;
    }

### Preenchimento do Vetor de Forma Estática

Além do preenchimento dinâmico, podemos inicializar e preencher um vetor de forma estática durante a declaração. Isso é útil quando conhecemos os valores dos elementos antecipadamente. Aqui está um exemplo:

    #include <iostream>
    #include <vector>

    int main() {
        // Preenchendo um vetor de forma estática
        std::vector<int> numeros = {2, 4, 6, 8, 10};

        // Imprimindo os elementos do vetor
        for (int i = 0; i < numeros.size(); ++i) {
            std::cout << numeros[i] << " ";
        }

        return 0;
    }

### Realizar uma Ação com Todos os Elementos do Vetor

Às vezes, precisamos realizar uma operação em todos os elementos de um vetor. Podemos usar um loop para percorrer cada elemento e realizar a operação desejada. O exemplo a seguir mostra como duplicar cada elemento de um vetor:

    #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> numeros = {1, 2, 3, 4, 5};

        // Duplicando cada elemento do vetor
        for (int i = 0; i < numeros.size(); ++i) {
            numeros[i] *= 2;
        }

        // Imprimindo os elementos duplicados
        for (int i = 0; i < numeros.size(); ++i) {
            std::cout << numeros[i] << " ";
        }

        return 0;
    }

### Acumular todos os elementos do Vetor

Neste exemplo, é mostrado como acumular todos os elementos de um vetor numa variável.

    #include <iostream>
    #include <vector>
    int main() {
        // Criando um vetor de valores monetários
        std::vector<double> despesas = {20.50, 75.00, 12.95, 34.62};

        //Variável do total
        double total = 0;

        // Laço que percorre cada elemento
        for (int i = 0; i < despesas.size(); i++) {
            total += despesas[i];
        }

        std::cout << "O total de gastos é " << total;

        // Saída: O total de gastos é 143.07
        return 0;
    }