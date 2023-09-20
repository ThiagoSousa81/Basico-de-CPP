### Lição 3: Variáveis e Tipos de Dados em C++

## [Voltar](https://github.com/ThiagoSousa81/Basico-de-CPP#readme)

### Tipos de Dados de Variáveis

Em C++, os tipos de dados especificam o tipo de valor que uma variável pode armazenar. Existem vários tipos de dados nativos em C++, que podem ser divididos em algumas categorias principais:

- **Tipos Numéricos**

    - **```int```:** Representa números inteiros.
    - **```float```:** Representa números de ponto flutuante de precisão simples.
    - **```double```:** Representa números de ponto flutuante de dupla precisão.

- **Tipos Lógicos**

    **```bool```:** Representa valores verdadeiro (```true```) ou falso (```false```).

- **Tipos de Texto**
    - ```char```: Representa caracteres individuais.
    - ```std::string```: Representa sequências de caracteres (```strings```).

- **Tipos Compostos**

    - ```Arrays```: Coleções de elementos do mesmo tipo.
    - ```Structs```: Estruturas de dados personalizadas que podem conter diversos tipos de dados.

- **Outros Tipos**

    - **enum**: Define um conjunto de constantes nomeadas.
    - **void** Usado em funções que não retornam valores.

### Declaração de Variáveis

A declaração de variáveis é o processo de informar ao compilador qual tipo de dado uma variável conterá e qual será o seu nome. Em C++, uma declaração de variável segue o seguinte formato:


    tipo_de_dado nome_da_variavel;

Aqui estão alguns exemplos de declaração de variáveis:

    int idade;
    float preco;
    char letra;
    bool esta_chovendo;
    std::string nome;

### Inicialização de Variáveis

A inicialização de variáveis é o ato de atribuir um valor inicial a uma variável. Em C++, você pode inicializar uma variável no momento de sua declaração ou posteriormente no código.

### Inicialização no momento da declaração:

    
    int numero = 42;
    float altura = 1.75;
    char letra_inicial = 'A';
    bool ligado = true;
    std::string nome = "Alice";


### Inicialização posterior:

    int idade;
    idade = 25;

    std::string sobrenome;
    sobrenome = "Silva";
    
É importante notar que nem todas as variáveis precisam ser inicializadas imediatamente, mas é uma boa prática fazê-lo sempre que possível para evitar comportamentos indefinidos.