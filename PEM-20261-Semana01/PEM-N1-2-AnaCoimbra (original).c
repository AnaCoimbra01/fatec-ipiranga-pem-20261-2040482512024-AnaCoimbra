/*--------------------------------------------------------*
* Disciplina: Programaçao Estruturada e Modular           *
*          Prof. Carlos Veríssimo                         *
*---------------------------------------------------------*
* Objetivo do Programa: Codificar o diagrama do quadro    *
*                       "Contador de Palavras"            *
* Data - 20/02/2026                                       * 
* Autor: Ana Gabriela Fernandes de Paula Coimbra          *
*---------------------------------------------------------*/

//Bibliotecas a serem Utilizadas no Programa
#include <stdio.h>
#include <string.h>

//Programa Principal
int main()
{
//Declaração de Variáveis
    char texto [300];
    int contadorDePalavras = 0;
//Entrada de Dados
    printf ("Entrada do Texto: ");
    fgets (texto, sizeof(texto), stdin);
    int TAM = strlen(texto);
//Processamento
    for (int i=0; i < TAM; i++) {
        if ((i == 0 && texto[i] != ' ' && texto[i] != '\n') ||
            (i > 0 && texto[i] != ' ' && texto[i] != '\n' && texto[i-1] == ' '))
            contadorDePalavras++;
    }
//Saída de Dados
    printf ("\n\nQuantidade de palavras no Texto: %i\n", contadorDePalavras);
//Final do Programa
    return 0; 
}



1_LEIA-ME.pdf
PEM-20261-Semana01/1_LEIA-ME.pdf
PEM-20261-Semana01/index.html
PEM-20261-Semana01/style.css
PEM-20261-Semana02/1_LEIA-ME.pdf
PEM-20261-Semana03/1_LEIA-ME.pdf
PEM-20261-Semana04/1_LEIA-ME.pdf
PEM-20261-Semana05/1_LEIA-ME.pdf
PEM-20261-Semana06/1_LEIA-ME.pdf
PEM-20261-Semana07/1_LEIA-ME.pdf
PEM-20261-Semana08/1_LEIA-ME.pdf
PEM-20261-Semana09/1_LEIA-ME.pdf
PEM-20261-Semana10/1_LEIA-ME.pdf
PEM-20261-Semana11/1_LEIA-ME.pdf
PEM-20261-Semana12/1_LEIA-ME.pdf
PEM-20261-Semana13/1_LEIA-ME.pdf
PEM-20261-Semana14/1_LEIA-ME.pdf
PEM-20261-Semana15/1_LEIA-ME.pdf