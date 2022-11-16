#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int menu;
	int egm = 56, oxn = 23, joma = 42, totale = egm + oxn + joma;
	float vegm = 145.98, voxn = 129.90, vjoma = 279.90;
	float total1 = 0, total2 = 0, total3 = 0;
	float qegm = 0, qoxn = 0, qjoma = 0;
	
	printf("Seja bem-vindo ao Dream Foot!\n\n");
	
	while(true){
		printf("1 - Mostrar marcas.\n2 - Fazer um pedido.\n0 - Sair.\n\n");
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				system("cls");
				printf("\t=-=-=-=-=-=-=-Chuteiras-=-=-=-=-=-=-=\n\n");
				printf("\tMarca         V. Unit         Quant.\n\n");
				printf("\tEGM           R$ %.2f          %d \n", vegm, egm);
				printf("\tOXN           R$ %.2f          %d \n", voxn, oxn);
				printf("\tJOMA          R$ %.2f          %d \n", vjoma, joma);
				
				printf("\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
				continue;
			case 2:
				system("cls");
				
				printf("Quantas chuteiras da EGM deseja colocar no carrinho? ");
				scanf("%f", &qegm);
				if(qegm > egm){printf("\nNao temos essa quantidade no estoque!\n\n");}else{
					egm = egm - qegm;
				
					total1 = qegm * vegm;
				}
				
				printf("Quantas chuteiras da OXN deseja colocar no carrinho? ");
				scanf("%f", &qoxn);
				if(qoxn > oxn){printf("\nNao temos essa quantidade no estoque!\n\n");}else{
					oxn = oxn - qoxn;
				
					total2 = qoxn * voxn;
				}
				
				printf("Quantas chuteiras da JOMA deseja colocar no carrinho? ");
				scanf("%f", &qjoma);
				if(qjoma > joma){printf("\nNao temos essa quantidade no estoque!\n\n");}else{
				
				joma = joma - qjoma;
				
				total3 = qjoma * vjoma;
				}
				
				printf("\nTotal da compra: R$ %.2f\n\n", total1 + total2 + total3);
				continue;
			case 0:
				system("cls");
				printf("Dream Foot agradece a visita e volte sempre! :)\n\n");
				break;
		}break;
	}
}
