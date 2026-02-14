int main(){

    int idade, matricula;
    float altura;
    char nome[20], sexualidade[20], turma[3], estado[3];

    printf("Vamos realizar seu cadastro!\n");
    
    printf("\nEnsira seu nome: ");
    scanf("%s", nome);

    printf("Ensira sua idade: ");
    scanf("%d", &idade);

    printf("Ensira sua altura: ");
    scanf("%f", &altura);

    printf("Estado(Com duas letras): ");
    scanf("%s", estado);

    printf("Ensira sua matricula: ");
    scanf("%d", &matricula);

    printf("Ensira sua sexualidade: ");
    scanf("%s", sexualidade);

    printf("Ensira sua turma(com 2 caracteres): ");
    scanf("%s", turma);

    printf("\nCadastro do Aluno: ");

    printf("\nNome:%s\n", nome);
    printf("Idade:%d\n", idade);
    printf("Altura:%.2f\n", altura);
    printf("Estado:%s\n", estado);
    printf("Matricula:%d\n", matricula);
    printf("Sexualidade:%s\n", sexualidade);
    printf("Turma:%s\n", turma);

    return 0;
/*
Nome, idade, altura, estado, matricula, sexualidade, turma

%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.


*/

}
