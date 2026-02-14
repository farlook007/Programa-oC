int main(){
 
    int idade;
    float altura;
    char nome[20];
    char opcao;

    printf("Olá, Insira sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Agora ensira sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %f\n", altura);

    printf("Agora nos diga seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Você está satisfeito com o funcionamento? 'S' para sim e 'N' para não: ");
    scanf(" %c", &opcao);
    printf("A opção escolhida foi:%c\n", opcao);

    printf("Obrigado por testar meu código!\n");

return 0; 
}
