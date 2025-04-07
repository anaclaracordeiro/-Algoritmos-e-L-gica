//verifica VarA é maior que VarB

#include <stdio.h>

int main() {
    int varA, varB;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &varA);

    printf("Digite o segundo valor:\n");
    scanf("%d", &varB);

    if (varA >= varB) {
        printf("O maior valor é: %d\n", varA);
    } else {
        printf("O maior valor é: %d\n", varB);
    }

    return 0;
}
