#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// TEXTO COLORIDO NORMAL
#define BLK "\e[0;30m" // PRETO
#define RED "\e[0;31m" // VERMELHO
#define GRN "\e[0;32m" // VERDE
#define YEL "\e[0;33m" // AMARELO
#define BLU "\e[0;34m" // AZUL
#define MAG "\e[0;35m" // MAGENTA
#define CYN "\e[0;36m" // CIANO
#define WHT "\e[0;37m" // BRANCO

// TEXTO COLORIDO CLARO
#define HBLK "\e[0;90m"
#define HRED "\e[0;91m"
#define HGRN "\e[0;92m"
#define HYEL "\e[0;93m"
#define HBLU "\e[0;94m"
#define HMAG "\e[0;95m"
#define HCYN "\e[0;96m"
#define HWHT "\e[0;97m"

// TEXTO COLORIDO ESPECIAL
#define PNK "\033[38;5;206m" // ROSA
#define PUR "\033[38;5;56m" // LILÁS
#define FNT "\033[38;5;36m" // CIANO FANTASMA
#define LIM "\033[38;5;118m" // VERDE LIMÃO
#define FLO "\033[38;5;70m" // VERDE FLORESTA
#define ALM "\033[38;5;42m" // CIANO ALMA
#define MTL "\033[38;5;248m" // PRATA METAL
#define LRJ "\033[38;5;214m" // LARANJA
#define MRM "\033[38;5;94m" // MARROM
#define RPR "\033[38;5;92m" // ROXO PROFUNDO
#define VML "\033[38;5;88m" // VERMELHO LAVA
#define RMX "\033[38;5;183m" // ROSA REMIXES 1
#define LIV "\033[38;5;226m" // AMARELO LIVE 1
#define RMX2 "\033[38;5;123m" // AZUL REMIXES 2
#define LIV2 "\033[38;5;220m" // AMARELO LIVE 2
#define SNG "\033[38;5;125m" // VERMELHO SINGLES 2
#define TBO "\033[38;5;19m" // ROXO THE BEST OF

// RESET
#define reset "\e[0m"

int main ()
// Desenvolver um sistema que permita a inclusão e exclusão de estoque de uma empresa. Victor
{
    // Variáveis e SETUP
    FILE *file;
    // Se o arquivo não existir, cria um novo
    if (file==NULL){
    file=fopen("spectermoon.txt", "w+");
    }
    int urs, nos, lov, lil, sou, nol, cos, ght, and, lip, sos, mon, btm, lol, tuf, moo, pyr, apo, shw, fin, wts1, wts2, rmx1, rmx2, lv1, lv2, tbo1, tbo2; // VARIAVEIS PARA SOMAR NO ESTOQUE
    int ursT, nosT, lovT, lilT, souT, nolT, cosT, ghtT, andT, lipT, sosT, monT, btmT, lolT, tufT, mooT, pyrT, apoT, shwT, finT, wts1T, wts2T, rmx1T, rmx2T, lv1T, lv2T, tbo1T, tbo2T; // ESTOQUE
    int opcaoum, adicionar;
    char continuar;
    system("color 0");
    setlocale(LC_ALL, "Portuguese");
    // Programa

    // Lendo os Álbuns que já estão no estoque (TXT)
    file=fopen("spectermoon.txt", "r"); // Abre o arquivo no modo READ, lê as somas, assim definindo a quantidade de ábuns no estoque, e depois se fecha.
    fscanf(file, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &ursT, &nosT, &lovT, &lilT, &souT, &nolT, &cosT, &ghtT, &andT, &lipT, &sosT, &monT, &btmT, &lolT, &tufT, &mooT, &pyrT, &apoT, &shwT, &finT, &wts1T, &rmx1T, &lv1T, &tbo1T, &wts2T, &rmx2T, &lv2T, &tbo2T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |       BEM VINDO AO ESTOQUE DA BANDA        |\n" reset);
    printf(MAG "                                                                                                            |                SPECTER MOON                |\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%c", &continuar);
    system("clear || cls");

    menu:
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |       1. Adicionar álbuns ao estoque       |\n" reset);
    printf(MAG "                                                                                                            |       2. Remover álbuns do estoque         |\n" reset);
    printf(MAG "                                                                                                            |       3. Ver álbuns do estoque             |\n" reset);
    printf(MAG "                                                                                                            |       4. Encerrar o Programa               |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%d", &opcaoum);
    switch (opcaoum){
    case 1:
    // FUNÇÃO ADICIONAR ÁLBUNS
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |       Qual álbum você quer adicionar       |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    albuns(); // FUNÇÃO QUE CHAMA A LISTA DOS ÁLBUNS
    scanf("%d", &adicionar);

    switch (adicionar){

    // URBAN SOUNDS
    case 1:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &urs);
    ursT=ursT+urs;
    fprintf(file, "%d", ursT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &ursT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", urs);
    printf(HWHT " Urban Sounds adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // NOSTALGIA
    case 2:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &nos);
    nosT=nosT+nos;
    fprintf(file, "%d", nosT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &nosT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", nos);
    printf(LIM " Nostalgia adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Lovetheme
    case 3:
   system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lov);
    lovT=lovT+lov;
    fprintf(file, "%d", lovT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lovT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lov);
    printf(PNK " Lovetheme adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Liquid Life
    case 4:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lil);
    lilT=lilT+lil;
    fprintf(file, "%d", lilT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lilT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lil);
    printf(CYN " Liquid Life adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Soulsaver
    case 5:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &sou);
    souT=souT+sou;
    fprintf(file, "%d", souT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &souT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", sou);
    printf(ALM " Soulsaver adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Northern Lights
    case 6:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &nol);
    nolT=nolT+nol;
    fprintf(file, "%d", nolT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &nolT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", nol);
    printf(HCYN " Northern Lights adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Cosmic
    case 7:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &cos);
    cosT=cosT+cos;
    fprintf(file, "%d", cosT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &cosT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", cos);
    printf(RPR " Cosmic adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Ghost Tales
    case 8:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &ght);
    ghtT=ghtT+ght;
    fprintf(file, "%d", ghtT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &ghtT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", ght);
    printf(FNT " Ghost Tales adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Angels And Demons
    case 9:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &and);
    andT=andT+and;
    fprintf(file, "%d", andT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &andT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", and);
    printf(RED " Angels And Demons adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Life In Purple
    case 10:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lip);
    lipT=lipT+lip;
    fprintf(file, "%d", lipT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lipT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lip);
    printf(MAG " Life In Purple adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Sounds Of The Solar System
    case 11:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &sos);
    sosT=sosT+sos;
    fprintf(file, "%d", sosT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &sosT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", sos);
    printf(BLU " Sounds Of The Solar System adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Mother Nature
    case 12:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &mon);
    monT=monT+mon;
    fprintf(file, "%d", monT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &monT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", mon);
    printf(FLO " Mother Nature adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Bound To Metal
    case 13:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &btm);
    btmT=btmT+btm;
    fprintf(file, "%d", btmT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &btmT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", btm);
    printf(MTL " Bound To Metal adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Lights Of Life
    case 14:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lol);
    lolT=lolT+lol;
    fprintf(file, "%d", lolT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lolT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lol);
    printf(LRJ " Lights Of Life adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Tutti Frutti
    case 15:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &tuf);
    tufT=tufT+tuf;
    fprintf(file, "%d", tufT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &tufT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", tuf);
    printf(HMAG " Tutti Frutti adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Memories Of Old
    case 16:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &moo);
    mooT=mooT+moo;
    fprintf(file, "%d", mooT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &mooT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", moo);
    printf(MRM " Memories Of Old adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Pyramid
    case 17:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &pyr);
    pyrT=pyrT+pyr;
    fprintf(file, "%d", pyrT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &pyrT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", pyr);
    printf(HYEL " Pyramid adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Apocalypse
    case 18:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &apo);
    apoT=apoT+apo;
    fprintf(file, "%d", apoT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &apoT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", apo);
    printf(VML " Apocalypse adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Shadow World
    case 19:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &shw);
    shwT=shwT+shw;
    fprintf(file, "%d", shwT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &shwT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", shw);
    printf(HBLK " Shadow World adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Finale
    case 20:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &fin);
    finT=finT+fin;
    fprintf(file, "%d", finT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &finT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", fin);
    printf(PUR " Finale adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Warehouse: The Singles Vol. 1
    case 21:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &wts1);
    wts1T=wts1T+wts1;
    fprintf(file, "%d", wts1T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &wts1T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", wts1);
    printf(HBLU " Warehouse: The Singles Vol. 1 adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Remixes Vol. 1: R3fr3sh
    case 22:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &rmx1);
    rmx1T=rmx1T+rmx1;
    fprintf(file, "%d", rmx1T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &rmx1T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", rmx1);
    printf(RMX " Remixes Vol. 1: R3fr3sh adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Live Mixes Vol. 1
    case 23:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lv1);
    lv1T=lv1T+lv1;
    fprintf(file, "%d", lv1T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lv1T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lv1);
    printf(LIV " Live Mixes Vol. 1 adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // The Best of Specter Moon Vol. 1
    case 24:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &tbo1);
    tbo1T=tbo1T+tbo1;
    fprintf(file, "%d", tbo1T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &tbo1T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", tbo1);
    printf(TBO " The Best of Specter Moon Vol. 1 adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Warehouse: The Singles Vol. 2
    case 25:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &wts2);
    wts2T=wts2T+wts2;
    fprintf(file, "%d", wts2T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &wts2T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", wts2);
    printf(SNG " Warehouse: The Singles Vol. 2 adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Remixes Vol. 2: 0v3rh4ul
    case 26:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &rmx2);
    rmx2T=rmx2T+rmx2;
    fprintf(file, "%d", rmx2T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &rmx2T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", rmx2);
    printf(RMX2 " Remixes Vol. 2: 0v3rh4ul adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Live Mixes Vol. 2
    case 27:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lv2);
    lv2T=lv2T+lv2;
    fprintf(file, "%d", lv2T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lv2T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lv2);
    printf(LIV2 " Live Mixes Vol. 2 adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // The Best of Specter Moon Vol. 2
    case 28:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                 adicionar?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &tbo2);
    tbo2T=tbo2T+tbo2;
    fprintf(file, "%d", tbo2T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &tbo2T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", tbo2);
    printf(TBO " The Best of Specter Moon Vol. 2 adicionadas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;



    // Nenhuma Opção
    default:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |==============================|\n" reset);
    printf(RED "                                                                                                            |OPÇÃO INVÁLIDA! SELECIONE     |\n" reset);
    printf(RED "                                                                                                            |       UMA OPÇÃO VÁLIDA!      |\n" reset);
    printf(RED "                                                                                                            |==============================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |==============================|\n" reset);
    printf(RED "                                                                                                            |DIGITE QUALQUER TECLA PARA    |\n" reset);
    printf(RED "                                                                                                            |          CONTINUAR           |\n" reset);
    printf(RED "                                                                                                            |==============================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;
    }

    break;

    case 2:
    // FUNÇÃO REMOVER ÁLBUNS
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |==============================|\n" reset);
    printf(MAG "                                                                                                            | Qual álbum você quer remover |\n" reset);
    printf(MAG "                                                                                                            |==============================|\n" reset);
    albuns(); // FUNÇÃO QUE CHAMA A LISTA DOS ÁLBUNS
    scanf("%d", &adicionar);

    switch (adicionar){

    // URBAN SOUNDS
    case 1:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (ursT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &urs);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (urs>ursT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    ursT=ursT-urs;
    fprintf(file, "%d", ursT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &ursT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", urs);
    printf(HWHT " Urban Sounds removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // NOSTALGIA
    case 2:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (nosT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &nos);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (nos>nosT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    nosT=nosT-nos;
    fprintf(file, "%d", nosT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &nosT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", nos);
    printf(LIM " Nostalgia removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Lovetheme
    case 3:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (lovT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lov);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (lov>lovT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    lovT=lovT-lov;
    fprintf(file, "%d", lovT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lovT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lov);
    printf(PNK " Lovetheme removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Liquid Life
    case 4:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (lilT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lil);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (lil>lilT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    lilT=lilT-lil;
    fprintf(file, "%d", lilT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lilT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lil);
    printf(CYN " Liquid Life removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Soulsaver
    case 5:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (souT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &sou);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (sou>souT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    souT=souT-sou;
    fprintf(file, "%d", souT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &souT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", sou);
    printf(ALM " Soulsaver removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Northern Lights
    case 6:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (nolT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &nol);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (nol>nolT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    nolT=nolT-nol;
    fprintf(file, "%d", nolT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &nolT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", nol);
    printf(HCYN " Northern Lights removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Cosmic
    case 7:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (cosT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &cos);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (cos>cosT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    cosT=cosT-cos;
    fprintf(file, "%d", cosT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &cosT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", cos);
    printf(RPR " Cosmic removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Ghost Tales
    case 8:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (ghtT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &ght);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (ght>ghtT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    ghtT=ghtT-ght;
    fprintf(file, "%d", ghtT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &ghtT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", ght);
    printf(FNT " Ghost Tales removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Angels And Demons
    case 9:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (andT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &and);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (and>andT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    andT=andT-and;
    fprintf(file, "%d", andT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &andT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", and);
    printf(RED " Angels And Demons removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Life In Purple
    case 10:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (lipT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lip);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (lip>lipT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    lipT=lipT-lip;
    fprintf(file, "%d", lipT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lipT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lip);
    printf(MAG " Life In Purple removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Sounds Of The Solar System
    case 11:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (sosT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &sos);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (sos>sosT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    sosT=sosT-sos;
    fprintf(file, "%d", sosT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &sosT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", sos);
    printf(BLU " Sounds Of The Solar System removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Mother Nature
    case 12:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (monT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &mon);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (mon>monT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    monT=monT-mon;
    fprintf(file, "%d", monT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &monT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", mon);
    printf(FLO " Mother Nature removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Bound To Metal
    case 13:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (btmT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &btm);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (btm>btmT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    btmT=btmT-btm;
    fprintf(file, "%d", btmT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &btmT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", btm);
    printf(MTL " Bound To Metal removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Lights Of Life
    case 14:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (lolT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lol);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (lol>lolT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    lolT=lolT-lol;
    fprintf(file, "%d", lolT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lolT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lol);
    printf(LRJ " Lights Of Life removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Tutti Frutti
    case 15:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (tufT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &tuf);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (tuf>tufT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    tufT=tufT-tuf;
    fprintf(file, "%d", tufT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &tufT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", tuf);
    printf(HMAG " Tutti Frutti removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Memories Of Old
    case 16:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (mooT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &moo);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (moo>mooT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    mooT=mooT-moo;
    fprintf(file, "%d", mooT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &mooT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", moo);
    printf(MRM " Memories Of Old removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Pyramid
    case 17:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (pyrT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &pyr);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (pyr>pyrT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    pyrT=pyrT-pyr;
    fprintf(file, "%d", pyrT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &pyrT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", pyr);
    printf(HYEL " Pyramid removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Apocalypse
    case 18:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (apoT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &apo);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (apo>apoT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    apoT=apoT-apo;
    fprintf(file, "%d", apoT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &apoT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", apo);
    printf(VML " Apocalypse removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Shadow World
    case 19:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (shwT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &shw);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (shw>shwT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    shwT=shwT-shw;
    fprintf(file, "%d", shwT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &shwT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", shw);
    printf(HBLK " Shadow World removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Finale
    case 20:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (finT<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &fin);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (fin>finT){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    finT=finT-fin;
    fprintf(file, "%d", finT);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &finT);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", fin);
    printf(PUR " Finale removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Warehouse: The Singles Vol. 1
    case 21:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (wts1T<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &wts1);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (wts1>wts1T){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    wts1T=wts1T-wts1;
    fprintf(file, "%d", wts1T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &wts1T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", wts1);
    printf(HBLU " Warehouse: The Singles Vol. 1 removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Remixes Vol. 1: R3fr3sh
    case 22:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (rmx1T<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &rmx1);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (rmx1>rmx1T){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    rmx1T=rmx1T-rmx1;
    fprintf(file, "%d", rmx1T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &rmx1T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", rmx1);
    printf(RMX " Remixes Vol. 1: R3fr3sh removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Live Mixes Vol. 1
    case 23:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (lv1T<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lv1);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (lv1>lv1T){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    lv1T=lv1T-lv1;
    fprintf(file, "%d", lv1T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lv1T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lv1);
    printf(LIV " Live Mixes Vol. 1 removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // The Best Of Specter Moon Vol. 1
    case 24:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (tbo1T<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &tbo1);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (tbo1>tbo1T){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    tbo1T=tbo1T-tbo1;
    fprintf(file, "%d", tbo1T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &tbo1T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", tbo1);
    printf(TBO " The Best Of Specter Moon Vol. 1 removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Warehouse: The Singles Vol. 2
    case 25:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (wts2T<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &wts2);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (wts2>wts2T){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    wts2T=wts2T-wts2;
    fprintf(file, "%d", wts2T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &wts2T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", wts2);
    printf(SNG " Warehouse: The Singles Vol. 2 removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Remixes Vol. 2: 0v3rh4ul
    case 26:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (rmx2T<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &rmx2);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (rmx2>rmx2T){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    rmx2T=rmx2T-rmx2;
    fprintf(file, "%d", rmx2T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &rmx2T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", rmx2);
    printf(RMX2 " Remixes Vol. 2: 0v3rh4ul removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // Live Mixes Vol. 2
    case 27:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (lv2T<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &lv2);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (lv2>lv2T){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    lv2T=lv2T-lv2;
    fprintf(file, "%d", lv2T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &lv2T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", lv2);
    printf(LIV2 " Live Mixes Vol. 2 removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;

    // The Best Of Specter Moon Vol. 2
    case 28:

    // CASO NÃO TENHA ÁLBUNS PARA REMOVER
    if (tbo2T<=0){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |         NÃO HÁ ÁLBUNS PARA REMOVER         |\n" reset);
    printf(RED "                                                                                                            |         SELECIONE UMA OPÇÃO VÁLIDA!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }
    // QUANTAS UNIDADES QUER REMOVER

    else
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |         Quantas unidades você quer         |\n" reset);
    printf(MAG "                                                                                                            |                   remover?                 |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    scanf("%d", &tbo2);

    // CASO TENTE REMOVER MAIS DO QUE HÁ NO ESTOQUE
    if (tbo2>tbo2T){
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |        NÃO É POSSÍVEL REMOVER MAIS         |\n" reset);
    printf(RED "                                                                                                            |       ÁLBUNS DO QUE TEM NO ESTOQUE!        |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    }

    // ÁLBUNS REMOVIDOS DO ESTOQUE
    else
    tbo2T=tbo2T-tbo2;
    fprintf(file, "%d", tbo2T);
    fclose(file);
    file=fopen("spectermoon.txt", "r");
    fscanf(file, "%d", &tbo2T);
    fclose(file);
    file=fopen("spectermoon.txt", "w");
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                                 %d Cópias de", tbo2);
    printf(TBO " The Best Of Specter Moon Vol. 2 removidas");
    printf(MAG "\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;




    // Nenhuma Opção
    default:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |OPÇÃO INVÁLIDA! SELECIONE UMA OPÇÃO VÁLIDA! |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(RED "                                                                                                            |============================================|\n" reset);
    printf(RED "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(RED "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;
    break;
    }

    break;

    case 3:
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |ÁLBUNS DE ESTÚDIO                           |\n" reset);
    printf(HWHT "                                                                                                            |1. Urban Sounds                             |\n" reset);
    printf(HWHT "                                                                                                            Unidades: %d\n\n", ursT);
    printf(LIM "                                                                                                            |2. Nostalgia                                |\n" reset);
    printf(LIM "                                                                                                            Unidades: %d\n\n", nosT);
    printf(PNK "                                                                                                            |3. Lovetheme                                |\n" reset);
    printf(PNK "                                                                                                            Unidades: %d\n\n", lovT);
    printf(CYN "                                                                                                            |4. Liquid Life                              |\n" reset);
    printf(CYN "                                                                                                            Unidades: %d\n\n", lilT);
    printf(ALM "                                                                                                            |5. Soulsaver                                |\n" reset);
    printf(ALM "                                                                                                            Unidades: %d\n\n", souT);
    printf(HCYN "                                                                                                            |6. Northern Lights                          |\n" reset);
    printf(HCYN "                                                                                                            Unidades: %d\n\n", nolT);
    printf(RPR "                                                                                                            |7. Cosmic                                   |\n" reset);
    printf(RPR "                                                                                                            Unidades: %d\n\n", cosT);
    printf(FNT "                                                                                                            |8. Ghost Tales                              |\n" reset);
    printf(FNT "                                                                                                            Unidades: %d\n\n", ghtT);
    printf(RED "                                                                                                            |9. Angels And Demons                        |\n" reset);
    printf(RED "                                                                                                            Unidades: %d\n\n", andT);
    printf(MAG "                                                                                                            |10. Life In Purple                          |\n" reset);
    printf(MAG "                                                                                                            Unidades: %d\n\n", lipT);
    printf(BLU "                                                                                                            |11. Sounds Of The Solar System              |\n" reset);
    printf(BLU "                                                                                                            Unidades: %d\n\n", sosT);
    printf(FLO "                                                                                                            |12. Mother Nature                           |\n" reset);
    printf(FLO "                                                                                                            Unidades: %d\n\n", monT);
    printf(MTL "                                                                                                            |13. Bound To Metal                          |\n" reset);
    printf(MTL "                                                                                                            Unidades: %d\n\n", btmT);
    printf(LRJ "                                                                                                            |14. Lights Of Life                          |\n" reset);
    printf(LRJ "                                                                                                            Unidades: %d\n\n", lolT);
    printf(HMAG "                                                                                                            |15. Tutti Frutti                            |\n" reset);
    printf(HMAG "                                                                                                            Unidades: %d\n\n", tufT);
    printf(MRM "                                                                                                            |16. Memories Of Old                         |\n" reset);
    printf(MRM "                                                                                                            Unidades: %d\n\n", mooT);
    printf(HYEL "                                                                                                            |17. Pyramid                                 |\n" reset);
    printf(HYEL "                                                                                                            Unidades: %d\n\n", pyrT);
    printf(VML "                                                                                                            |18. Apocalypse                              |\n" reset);
    printf(VML "                                                                                                            Unidades: %d\n\n", apoT);
    printf(HBLK "                                                                                                            |19. Shadow World                            |\n" reset);
    printf(HBLK "                                                                                                            Unidades: %d\n\n", shwT);
    printf(PUR "                                                                                                            |20. Finale                                  |\n" reset);
    printf(PUR "                                                                                                            Unidades: %d\n\n", finT);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |COMPILAÇÕES                                 |\n" reset);
    printf(HBLU "                                                                                                            |21. Warehouse: The Singles Vol. 1           |\n" reset);
    printf(HBLU "                                                                                                            Unidades: %d\n\n", wts1T);
    printf(RMX "                                                                                                            |22. Remixes Vol. 1: R3fr3sh                 |\n" reset);
    printf(RMX "                                                                                                            Unidades: %d\n\n", rmx1T);
    printf(LIV "                                                                                                            |23. Live Mixes Vol. 1                       |\n" reset);
    printf(LIV "                                                                                                            Unidades: %d\n\n", lv1T);
    printf(TBO "                                                                                                            |24. The Best of Specter Moon Vol. 1         |\n" reset);
    printf(TBO "                                                                                                            Unidades: %d\n\n", tbo1T);
    printf(SNG "                                                                                                            |25. Warehouse: The Singles Vol. 2           |\n" reset);
    printf(SNG "                                                                                                            Unidades: %d\n\n", wts2T);
    printf(RMX2 "                                                                                                            |26. Remixes Vol. 2: 0v3rh4ul                |\n" reset);
    printf(RMX2 "                                                                                                            Unidades: %d\n\n", rmx2T);
    printf(LIV2 "                                                                                                            |27. Live Mixes Vol. 2                       |\n" reset);
    printf(LIV2 "                                                                                                            Unidades: %d\n\n", lv2T);
    printf(TBO "                                                                                                            |28. The Best of Specter Moon Vol. 2         |\n" reset);
    printf(TBO "                                                                                                            Unidades: %d\n\n", tbo2T);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |    DIGITE QUALQUER TECLA PARA CONTINUAR    |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    fflush(stdin);
    scanf("%c", &continuar);
    system("clear || cls");
    goto menu;

    break;
    case 4:
    // ENCERRA O PROGRAMA
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(GRN "                                                                                                            |============================================|\n" reset);
    printf(GRN "                                                                                                            |          OBRIGADO E VOLTE SEMPRE!          |\n" reset);
    printf(GRN "                                                                                                            |============================================|\n" reset);
    fprintf(file, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", ursT, nosT, lovT, lilT, souT, nolT, cosT, ghtT, andT, lipT, sosT, monT, btmT, lolT, tufT, mooT, pyrT, apoT, shwT, finT, wts1T, rmx1T, lv1T, tbo1T, wts2T, rmx2T, lv2T, tbo2T);
    fclose(file);
    exit(0);
    break;
    }
    return (0);

}


// LISTA DOS ÁLBUNS
void albuns(){
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |ÁLBUNS DE ESTÚDIO                           |\n" reset);
    printf(HWHT "                                                                                                            |1. Urban Sounds                             |\n" reset);
    printf(LIM "                                                                                                            |2. Nostalgia                                |\n" reset);
    printf(PNK "                                                                                                            |3. Lovetheme                                |\n" reset);
    printf(CYN "                                                                                                            |4. Liquid Life                              |\n" reset);
    printf(ALM "                                                                                                            |5. Soulsaver                                |\n" reset);
    printf(HCYN "                                                                                                            |6. Northern Lights                          |\n" reset);
    printf(RPR "                                                                                                            |7. Cosmic                                   |\n" reset);
    printf(FNT "                                                                                                            |8. Ghost Tales                              |\n" reset);
    printf(RED "                                                                                                            |9. Angels And Demons                        |\n" reset);
    printf(MAG "                                                                                                            |10. Life In Purple                          |\n" reset);
    printf(BLU "                                                                                                            |11. Sounds Of The Solar System              |\n" reset);
    printf(FLO "                                                                                                            |12. Mother Nature                           |\n" reset);
    printf(MTL "                                                                                                            |13. Bound To Metal                          |\n" reset);
    printf(LRJ "                                                                                                            |14. Lights Of Life                          |\n" reset);
    printf(HMAG "                                                                                                            |15. Tutti Frutti                            |\n" reset);
    printf(MRM "                                                                                                            |16. Memories Of Old                         |\n" reset);
    printf(HYEL "                                                                                                            |17. Pyramid                                 |\n" reset);
    printf(VML "                                                                                                            |18. Apocalypse                              |\n" reset);
    printf(HBLK "                                                                                                            |19. Shadow World                            |\n" reset);
    printf(PUR "                                                                                                            |20. Finale                                  |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
    printf(MAG "                                                                                                            |COMPILAÇÕES                                 |\n" reset);
    printf(HBLU "                                                                                                            |21. Warehouse: The Singles Vol. 1           |\n" reset);
    printf(RMX "                                                                                                            |22. Remixes Vol. 1: R3fr3sh                 |\n" reset);
    printf(LIV "                                                                                                            |23. Live Mixes Vol. 1                       |\n" reset);
    printf(TBO "                                                                                                            |24. The Best of Specter Moon Vol. 1         |\n" reset);
    printf(SNG "                                                                                                            |25. Warehouse: The Singles Vol. 2           |\n" reset);
    printf(RMX2 "                                                                                                            |26. Remixes Vol. 2: 0v3rh4ul                |\n" reset);
    printf(LIV2 "                                                                                                            |27. Live Mixes Vol. 2                       |\n" reset);
    printf(TBO "                                                                                                            |28. The Best of Specter Moon Vol. 2         |\n" reset);
    printf(MAG "                                                                                                            |============================================|\n" reset);
}
