### Lição 6: Vetores e Arrays

## [Voltar](https://github.com/ThiagoSousa81/Basico-de-CPP#readme)

Nesta lição, exploraremos um aspecto crucial da programação em C++ - vetores e arrays. Essas estruturas de dados são fundamentais para armazenar e manipular conjuntos de dados de maneira eficiente. Ao compreender como declarar, inicializar, acessar elementos e percorrer vetores, você estará melhor preparado para lidar com problemas mais complexos em suas aplicações.

### Declarando e Inicializando Vetores

Em C++, a declaração e inicialização de vetores são tarefas essenciais. Um vetor é uma coleção de elementos do mesmo tipo, e a sintaxe para declarar e inicializar é direta. Por exemplo:

    #include <iostream>
    #include <vector>

    int main() {
        // Declarando e inicializando um vetor de inteiros
        std::vector<int> numeros = {1, 2, 3, 4, 5};

        // Declarando um vetor vazio de caracteres
        std::vector<char> caracteres;

        // Adicionando elementos ao vetor de caracteres
        caracteres.push_back('a');
        caracteres.push_back('b');
        
        //Agora o conteúdo do vetor caracteres é {'a', 'b'}

        return 0;
    }

### Acesso a Elementos de Vetores

Uma vez que você tenha declarado e inicializado um vetor, é crucial entender como acessar seus elementos. A indexação em C++ começa em 0, ou seja, o primeiro elemento está no índice 0, o segundo no índice 1, e assim por diante. Veja um exemplo:

    #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> numeros = {10, 20, 30, 40, 50};

        // Acessando o terceiro elemento (índice 2) do vetor
        int terceiroElemento = numeros[2];

        std::cout << "O terceiro elemento é: " << terceiroElemento << std::endl;

        return 0;
    }
