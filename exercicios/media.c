#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"portuguese");
	float prova, exercicios, portfolio, nota;
	printf("Qual nota você tirou nos exercícios ? ");
	scanf("%f",&exercicios);
	
	printf("Qual sua nota na prova ? ");
	scanf("%f",&prova);
	
	printf("Qual sua nota no portfólio ? ");
	scanf("%f",&portfolio);
	
	exercicios = exercicios*0.2;
	prova = prova*0.5;
	portfolio = portfolio*0.3;
	nota = exercicios + prova + portfolio;
	
	printf("Sua média é %f ",nota );
	
	
	
	
	return 0;
}