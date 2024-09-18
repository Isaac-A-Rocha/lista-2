// Escreva um programa que transforme o computador em uma urna eletrônica para eleição para pre-
// sidente de um certo paı́s, às quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser
// dado pelo número do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto
// diferente dos já citados é considerado nulo; em qualquer situação, o eleitor deve ser consultado quanto
// à confirmação do seu voto. No final da eleição o programa deve emitir um relatório contendo as por-
// centagens de votação de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O
// código para finalizar a urna (votação) é o usuário digitar algum número negativo.
#include <stdio.h>

int main()
{
    int voto = 0, paulo = 0, renata = 0, nulo = 0, branco = 0, total = 0, loop = 0;
    float porcentagem_paulo, porcentagem_renata, porcentagem_nulo, porcentagem_branco;
    printf("Digite 5 para votar em Paulo \n");
    printf("Digite 7 para votar em Renata \n");
    printf("Digite 0 para votar em branco \n");
    printf("Digite um número negativo para finalizar a votação \n");

    while (1)
    {
        loop++;
        // Solicitar voto ao eleitor
        printf("\nDigite o número do candidato: ");
        scanf("%d", &voto);

        // Verificar se o voto é negativo para encerrar a votação
        if (voto < 0)
        {
            break;
        }
        else
        {
            //candidato
            char *nome_candidato = "";

            // Processar o voto do eleitor e exibir o nome do candidato escolhido
            if (voto == 5){
                nome_candidato = "Paulo";
            }
            else if (voto == 7){
                nome_candidato = "Renata";
            }
            else if (voto == 0){
                nome_candidato = "BRANCO";
            }
            else{
                nome_candidato = "NULO";
            }

            // Confirmar voto com o eleitor e exibir o nome do candidato escolhido
            if (voto != 0)
            {
                printf("Você escolheu: %s. Deseja confirmar? (1 - Sim, 0 - Não): ", nome_candidato);
            }
            else
            {
                printf("Você escolheu voto em %s. Deseja confirmar? (1 - Sim, 0 - Não): ", nome_candidato);
            }
            int confirmacao;
            scanf("%d", &confirmacao);
            if (confirmacao == 1)
            {
                // Atualizar contagem de votos apenas se o voto for confirmado
                if (voto == 5)
                {
                    paulo++;
                }
                else if (voto == 7)
                {
                    renata++;
                }
                else if (voto == 0)
                {
                    branco++;
                }
                else
                {
                    nulo++;
                }
                total++;
            }
            else
            {
                printf("Voto cancelado.\n");
            }
        }
    }
    // porcentagem de votos
    porcentagem_paulo = (paulo * 100) / total;
    porcentagem_renata = (renata * 100) / total;
    porcentagem_nulo = (nulo * 100) / total;
    porcentagem_branco = (branco * 100) / total;
    // relatório
    printf("Relatório final da eleição\n");

    printf("Total de votos: %d\n", total);
    printf("Total de votos em Paulo: %d\n", paulo);
    printf("Total de votos em Renata: %d\n", renata);
    printf("Total de votos em branco: %d\n", branco);
    printf("Total de votos nulos: %d\n", nulo);

    printf("Porcentagem de votos em Paulo: %.2f%%\n", porcentagem_paulo);
    printf("Porcentagem de votos em Renata: %.2f%%\n", porcentagem_renata);
    printf("Porcentagem de votos nulos: %.2f%%\n", porcentagem_nulo);
    printf("Porcentagem de votos em branco: %.2f%%\n", porcentagem_branco);

    // vencedor
    if (paulo > renata)
    {
        printf("Vencedor(a): Paulo\n");
    }
    else if (paulo < renata)
    {
        printf("Vencedor(a): Renata\n");
    }
    else
    {
        printf("Empate!\n");
    }
    printf("O progrema rodou %d vezes:\n", loop);

    return 0;
}