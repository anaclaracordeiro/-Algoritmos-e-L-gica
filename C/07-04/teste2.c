//verifica se são iguais

#include <stdio.h>

int main() {
    int varA, varB;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &varA);

    printf("Digite o segundo valor:\n");
    scanf("%d", &varB);

    if (varA > varB) {
        printf("O maior valor é: %d\n", varA);
    } else if (varA < varB) {
        printf("O maior valor é: %d\n", varB);
    } else {
        printf("Os dois valores são iguais.\n");
    }

    return 0;
}
