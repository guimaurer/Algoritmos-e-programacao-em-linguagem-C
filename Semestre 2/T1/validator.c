#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool validarCaractere(const char *valor, const char *padrao) {
    int i = 0;
    int j = 0;

    while (valor[i] != '\0' && padrao[j] != '\0') {
        if (padrao[j] == 'x') {
            if (valor[i] < '0' || valor[i] > '9') {
                return false;
            }
            i++;
        } else {
            if (valor[i] != padrao[j]) {
                return false;
            }
            i++;
        }
        j++;
    }

    return (valor[i] == '\0' && padrao[j] == '\0');
}

void testarValidacao(const char *valor, const char *padrao) {
    if (validarCaractere(valor, padrao)) {
        printf("Valor válido: %s\n", valor);
    } else {
        printf("Valor inválido: %s\n", valor);
    }
}

int main() {
    testarValidacao("097.445.829-52", "xxx.xxx.xxx-xx");
    testarValidacao("09744582952", "xxx.xxx.xxx-xx");
    testarValidacao("16/02/1998", "xx/xx/xxxx");

    return 0;
}
