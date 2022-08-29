/******************************************************************************

Escreva um programa que verifique a validade de uma senha fornecida pelo usuário.
A senha válida é o número 1234. Devem ser impressas as seguintes 
mensagens: ACESSO PERMITIDO caso a senha seja válida. ACESSO NEGADO caso a senha seja inválida.

*******************************************************************************/

#include <stdio.h>

int main()
{   int teclado;
    int senha = 1234;

    printf("\nDigite a sua senha: ");
    scanf ("%d", &teclado);

    if(teclado == senha){
        printf("\nSenha correta");
    } else if(teclado == ' '){
        printf("\nSenha em branco");
    }   else{
        printf("\n Senha incorreta");
    }
    main();
}
