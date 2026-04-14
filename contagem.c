#include <stdio.h>
#include <windows.h>
void main() {
	SetConsoleOutputCP(CP_UTF8);
    char nome[20], sexo, continuar;
    int cont = 0, m = 0, f = 0;
    
    do{
    	printf("Qual seu nome\n");
     scanf("%s", &nome);
     printf("Qual seu sexo'm' ou 'f' :");
     scanf(" %c", &sexo);
     cont++;
     printf("Você é o paciente numero %d\n", cont);
     if(sexo == 'm') m++;
     else f++;
     printf("mais algum paciente 's' ou 'n': ");
     scanf(" %c", &continuar);
	}while(continuar == 's');
	printf("Hoje foram atendidos %d pacientes,");
	printf(" %d do sexo masculino e %d do sexo feminino\n", m, f);
     getch();
}