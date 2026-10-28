#include <stdio.h>
int main() {
    int numeros[8];
    int maior;

    // 1. Entrada de dados: Leitura dos 8 números inteiros
    printf("Digite 8 numeros inteiros:\n");
    for (int i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // 2. Inicialização: Define o primeiro elemento como o maior atual
    maior = numeros[0];

    // 3. Processamento: Varre o vetor comparando os elementos
    for (int i = 1; i < 8; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i]; // Atualiza o recorde se encontrar um valor maior
        }
    }

    // 4. Saída de dados: Exibe o maior valor encontrado
    printf("\nO maior valor armazenado no vetor eh: %d\n", maior);

}
