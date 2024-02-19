## Funções com e sem parâmetros:

Em C++, uma função é um bloco de código que executa uma tarefa específica.
Funções podem ser definidas com ou sem parâmetros. Parâmetros são variáveis que a função recebe para realizar suas operações.

### Exemplo de função sem parâmetros:

    void funcaoSemParametros() {
        // Código da função sem parâmetros
    }

### Exemplo de função com parâmetros:

   void funcaoComParametros(int a, float b) {
       // Código da função com parâmetros usando 'a' e 'b'
   }


### Passagem com e sem valor:

A passagem de parâmetros pode ser feita por valor ou por referência.
Na passagem por valor, uma cópia do valor é passada para a função. Alterações dentro da função não afetam a variável original.
cpp
Copy code
void passagemPorValor(int x) {
    // Alterações em 'x' não afetam o valor original fora da função
}
Na passagem por referência, a referência (endereço de memória) da variável é passada. Alterações dentro da função afetam a variável original.
cpp
Copy code
void passagemPorReferencia(int &y) {
    // Alterações em 'y' afetam o valor original fora da função
}
Função recursiva:

Uma função recursiva é uma função que chama a si mesma durante sua execução.
Exemplo de função recursiva para calcular fatorial:
cpp
Copy code
int fatorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}
A condição de parada (no exemplo, if (n <= 1)) é crucial para evitar um loop infinito.