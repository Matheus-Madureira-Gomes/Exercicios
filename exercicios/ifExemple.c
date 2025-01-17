#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    float sal_atual, sal_aumento, sal_liquido;
    float aumento;
    
    printf("Informe seu salário atual ");
    scanf("%d",&sal_atual);
    
    if(sal_atual <=3000){
    sal_aumento = sal_atual * 0,1545;
    sal_liquido = sal_atual + sal_aumento;
    
    printf("Seu salário com o aumento de %d ficou, %d",sal_aumento, sal_liquido);
}
    
    else {
    if(sal_atual <= 5500){
    sal_aumento = sal_atual * 0,1015;
    sal_liquido = sal_atual + sal_aumento;
    
    printf("Seu salário com o aumento de %d ficou, %d",sal_aumento, sal_liquido);  
    }

    
    else { 
    sal_aumento = sal_atual * 0,075;
    sal_liquido = sal_atual + sal_aumento;
    
    printf("Seu salário com o aumento de %d ficou, %d",sal_aumento, sal_liquido);
	}
}

    system("pause");
    return 0;
 }