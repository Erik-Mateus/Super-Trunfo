#include <stdio.h>

// int main() {

//     int idade = 18;
//     float altura = 1.8;
//     char sexo = 'M';
//     char nome[20]= "Mateus";



//     printf("%d\n", idade);
//     printf("%f\n", altura);
//     printf("%c\n", sexo);
//     printf("%s\n", nome);

//     return 0;
// }

int main(){

    char nome[20];
    int numero,quantidade;
    float forcaDaCarta;

    printf("Digite seu Nome Em ate 20 caracteres\n");
    scanf("%s", &nome);

    printf("Digite o seu numero e quantas cartas vc ira pegar\n");
    scanf("%d", &numero);
    scanf("%d", &quantidade);

    printf("determine a forca da carta\n");
    scanf("%f",&forcaDaCarta);



    printf("      \n");
    printf("Seu perfil: \n");
    printf("      \n");

    printf("Nome = %s  -  Jogador N* = %d \n",nome, numero);
    printf("Quantidade de cartas = %d\n", quantidade);
    printf("Forca da carta = %f\n",forcaDaCarta);

    return 0;

}