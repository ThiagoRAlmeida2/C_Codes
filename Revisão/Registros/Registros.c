// Registros
#include <stdio.h>

struct Nome {
    int nome_var_1;
    float nome_var_2;
    char nome_var_3;
    double nome_var_n;
};

int main() {
    // Declaração e inicialização de uma instância da estrutura Nome
    struct Nome minhaStruct;

    minhaStruct.nome_var_1 = 42;
    minhaStruct.nome_var_2 = 3.14f;
    minhaStruct.nome_var_3 = 'A';
    minhaStruct.nome_var_n = 123.456;

    // Exibindo os valores atribuídos
    printf("nome_var_1: %d\n", minhaStruct.nome_var_1);
    printf("nome_var_2: %f\n", minhaStruct.nome_var_2);
    printf("nome_var_3: %c\n", minhaStruct.nome_var_3);
    printf("nome_var_n: %lf\n", minhaStruct.nome_var_n);

    return 0;
}