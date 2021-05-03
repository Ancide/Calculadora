#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int decisao;
	int soma, soma1, soma3, sub, sub2, sub3, div, div2, div3, mul, mul2, mul3;
	char yn, ny;
	float num1, num2, res, ress;
	inicio:
	
	system("color 1");
	//banner
	printf(" ¦¦¦¦¦¦+ ¦¦¦¦¦+ ¦¦+      ¦¦¦¦¦¦+¦¦+   ¦¦+¦¦+      ¦¦¦¦¦+ ¦¦¦¦¦¦+  ¦¦¦¦¦¦+ ¦¦¦¦¦¦+  ¦¦¦¦¦+ \n");
	printf("¦¦+----+¦¦+--¦¦+¦¦¦     ¦¦+----+¦¦¦   ¦¦¦¦¦¦     ¦¦+--¦¦+¦¦+--¦¦+¦¦+---¦¦+¦¦+--¦¦+¦¦+--¦¦+\n");
	printf("¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦     ¦¦¦     ¦¦¦   ¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦++¦¦¦¦¦¦¦¦\n");
	printf("¦¦¦     ¦¦+--¦¦¦¦¦¦     ¦¦¦     ¦¦¦   ¦¦¦¦¦¦     ¦¦+--¦¦¦¦¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦+--¦¦+¦¦+--¦¦¦\n");
	printf("+¦¦¦¦¦¦+¦¦¦  ¦¦¦¦¦¦¦¦¦¦++¦¦¦¦¦¦++¦¦¦¦¦¦++¦¦¦¦¦¦¦+¦¦¦  ¦¦¦¦¦¦¦¦¦+++¦¦¦¦¦¦++¦¦¦  ¦¦¦¦¦¦  ¦¦¦\n");
	printf("+-----++-+  +-++------+ +-----+ +-----+ +------++-+  +-++-----+  +-----+ +-+  +-++-+  +-+-\n");
	//fim do banner             
	printf("Escolha uma opção: \n (1) soma \t (2) subtração \n (3) divisão \t (4) multiplicação \n (5) porcetagem \n\n");                                                  
	scanf("%i", &decisao);
	system("cls");
	
	switch(decisao) {
		case 1: {
			//mudando a cor do terminal
			system("color a");
			//banner da tool
			printf("¦¦¦¦¦¦¦+ ¦¦¦¦¦¦+ ¦¦¦+   ¦¦¦+ ¦¦¦¦¦+ \n");
			printf("¦¦+----+¦¦+---¦¦+¦¦¦¦+ ¦¦¦¦¦¦¦+--¦¦+\n");
			printf("¦¦¦¦¦¦¦+¦¦¦   ¦¦¦¦¦+¦¦¦¦+¦¦¦¦¦¦¦¦¦¦¦\n");
			printf("+----¦¦¦¦¦¦   ¦¦¦¦¦¦+¦¦++¦¦¦¦¦+--¦¦¦\n");
			printf("¦¦¦¦¦¦¦¦+¦¦¦¦¦¦++¦¦¦ +-+ ¦¦¦¦¦¦  ¦¦¦\n");
			printf("+------+ +-----+ +-+     +-++-+  +-+\n\n\n");
			//fim do banner
			printf("Digite um valor: \n");
			scanf("%i", &soma);
			system("cls");
			printf("Digite mais um valor: \n");
			scanf("%i", &soma1);
			system("cls");
			soma3 = soma + soma1;
			printf("A soma entre %i e %i é igual à: %i \n",soma, soma1, soma3);
			printf("Deseja fazer mais alguma operação? ((y) sim (n) não) \n");
			scanf("%s", &yn);
			if (yn == 'y'){
				printf("Voltando...");
				system("cls");
				goto inicio;
			}
			else if (yn == 'n') {
				printf("Saindo...");
			}
			else {
				printf("Opção não valida.");
			}
		break;
		}
		
		case 2: {
			system("color 5");
			//banner
			printf("¦¦¦¦¦¦¦+¦¦+   ¦¦+¦¦¦¦¦¦+ ¦¦¦¦¦¦¦¦+¦¦¦¦¦¦+  ¦¦¦¦¦+  ¦¦¦¦¦¦+ ¦¦¦¦¦+  ¦¦¦¦¦¦+  \n");
			printf("¦¦+----+¦¦¦   ¦¦¦¦¦+--¦¦++--¦¦+--+¦¦+--¦¦+¦¦+--¦¦+¦¦+----+¦¦+--¦¦+¦¦+---¦¦+ \n");
			printf("¦¦¦¦¦¦¦+¦¦¦   ¦¦¦¦¦¦¦¦¦++   ¦¦¦   ¦¦¦¦¦¦++¦¦¦¦¦¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦ \n");
			printf("+----¦¦¦¦¦¦   ¦¦¦¦¦+--¦¦+   ¦¦¦   ¦¦+--¦¦+¦¦+--¦¦¦¦¦¦     ¦¦+--¦¦¦¦¦¦   ¦¦¦ \n");
			printf("¦¦¦¦¦¦¦¦+¦¦¦¦¦¦++¦¦¦¦¦¦++   ¦¦¦   ¦¦¦  ¦¦¦¦¦¦  ¦¦¦+¦¦¦¦¦¦+¦¦¦  ¦¦¦+¦¦¦¦¦¦++ \n");
			printf("+------+ +-----+ +-----+    +-+   +-+  +-++-+  +-+ +-----++-+  +-+ +-----+ \n\n");
			//fim do banner
			printf("Digite um numero: \n");
			scanf("%i", &sub);
			system("cls");
			printf("digite mais um numero: \n");
			scanf("%i", &sub2);
			system("cls");
			sub3 = sub - sub2;
			printf("O resultado da subtração entre %i e %i é igual a : %i \n", sub, sub2, sub3);
			printf("Deseja fazer mais alguma operação? ((y) sim (n) não) \n");
			scanf("%s", &yn);
			if (yn == 'y'){
				printf("Voltando...");
				system("cls");
				goto inicio;
			}
			else if (yn == 'n') {
				printf("Saindo...");
			}
			else {
				printf("Opção não valida.");
			}
		break;
		}
		
		case 3: {
			system("color 4");
			//banner
			printf("¦¦¦¦¦¦+ ¦¦+¦¦+   ¦¦+¦¦+¦¦¦¦¦¦¦+ ¦¦¦¦¦+  ¦¦¦¦¦¦+ \n");
			printf("¦¦+--¦¦+¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦+----+¦¦+--¦¦+¦¦+---¦¦+ \n");
			printf("¦¦¦  ¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦¦¦¦¦+¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦ \n");
			printf("¦¦¦  ¦¦¦¦¦¦+¦¦+ ¦¦++¦¦¦+----¦¦¦¦¦+--¦¦¦¦¦¦   ¦¦¦ \n");
			printf("¦¦¦¦¦¦++¦¦¦ +¦¦¦¦++ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦+¦¦¦¦¦¦++ \n");
			printf("+-----+ +-+  +---+  +-++------++-+  +-+ +-----+ \n\n");
			//fim do banner
			printf("Digite um numero: \n");
			scanf("%i", &div);
			system("cls");
			printf("Digite mais um numero: \n");
			scanf("%i", &div2);
			system("cls");
			div3 = div / div2;
			printf("O resultado da divisão de %i e %i é igual a: %i \n", div, div2, div3);
			printf("Deseja fazer mais alguma operação? ((y) sim (n) não) \n");
			scanf("%s", &yn);
			if (yn == 'y'){
				printf("Voltando...");
				system("cls");
				goto inicio;
			}
			else if (yn == 'n') {
				printf("Saindo...");
			}
			else {
				printf("Opção não valida.");
			}
		break;
		}
		
		case 4: {
			system("color E");
			//banner
			printf("¦¦¦+   ¦¦¦+¦¦+   ¦¦+¦¦+  ¦¦¦¦¦¦¦¦+¦¦+¦¦¦¦¦¦+ ¦¦+     ¦¦+ ¦¦¦¦¦¦+ ¦¦¦¦¦+  ¦¦¦¦¦¦+ ¦¦¦¦¦+  ¦¦¦¦¦¦+ \n");
			printf("¦¦¦¦+ ¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦  +--¦¦+--+¦¦¦¦¦+--¦¦+¦¦¦     ¦¦¦¦¦+----+¦¦+--¦¦+¦¦+----+¦¦+--¦¦+¦¦+---¦¦+ \n");
			printf("¦¦+¦¦¦¦+¦¦¦¦¦¦   ¦¦¦¦¦¦     ¦¦¦   ¦¦¦¦¦¦¦¦¦++¦¦¦     ¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦ \n");
			printf("¦¦¦+¦¦++¦¦¦¦¦¦   ¦¦¦¦¦¦     ¦¦¦   ¦¦¦¦¦+---+ ¦¦¦     ¦¦¦¦¦¦     ¦¦+--¦¦¦¦¦¦     ¦¦+--¦¦¦¦¦¦   ¦¦¦ \n");
			printf("¦¦¦ +-+ ¦¦¦+¦¦¦¦¦¦++¦¦¦¦¦¦¦+¦¦¦   ¦¦¦¦¦¦     ¦¦¦¦¦¦¦+¦¦¦+¦¦¦¦¦¦+¦¦¦  ¦¦¦+¦¦¦¦¦¦+¦¦¦  ¦¦¦+¦¦¦¦¦¦++ \n");
			printf("+-+     +-+ +-----+ +------++-+   +-++-+     +------++-+ +-----++-+  +-+ +-----++-+  +-+ +-----+  \n\n");
            //fim do banner
			printf("Digite um valor: \n");
			scanf("%i", &mul);
			system("cls");
			printf("Digite mais um valor: \n");
			scanf("%i", &mul2);
			system("cls");
			mul3 = mul * mul2;
			printf("Asoma de %i e %i é igual a: %i \n", mul, mul2, mul3);
			printf("Deseja fazer mais alguma operação? ((y) sim (n) não) \n");
			scanf("%s", &ny);
			if (ny == 'y'){
				printf("Voltando...");
				system("cls");
				goto inicio;
			}
			else if (ny == 'n') {
				printf("Saindo...");
			}
			else {
				printf("Opção não valida.");
			}
		break;
		}
		
		case 5: {
			system("color 8");
			//banner
			printf("¦¦¦¦¦¦+  ¦¦¦¦¦¦+ ¦¦¦¦¦¦+  ¦¦¦¦¦¦+¦¦¦¦¦¦¦+¦¦¦+   ¦¦+¦¦¦¦¦¦¦¦+ ¦¦¦¦¦+  ¦¦¦¦¦¦+ ¦¦¦¦¦¦¦+¦¦¦+   ¦¦¦+ \n");
			printf("¦¦+--¦¦+¦¦+---¦¦+¦¦+--¦¦+¦¦+----+¦¦+----+¦¦¦¦+  ¦¦¦+--¦¦+--+¦¦+--¦¦+¦¦+----+ ¦¦+----+¦¦¦¦+ ¦¦¦¦¦ \n");
			printf("¦¦¦¦¦¦++¦¦¦   ¦¦¦¦¦¦¦¦¦++¦¦¦     ¦¦¦¦¦+  ¦¦+¦¦+ ¦¦¦   ¦¦¦   ¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦+¦¦¦¦¦+  ¦¦+¦¦¦¦+¦¦¦ \n");
			printf("¦¦+---+ ¦¦¦   ¦¦¦¦¦+--¦¦+¦¦¦     ¦¦+--+  ¦¦¦+¦¦+¦¦¦   ¦¦¦   ¦¦+--¦¦¦¦¦¦   ¦¦¦¦¦+--+  ¦¦¦+¦¦++¦¦¦ \n");
			printf("¦¦¦     +¦¦¦¦¦¦++¦¦¦  ¦¦¦+¦¦¦¦¦¦+¦¦¦¦¦¦¦+¦¦¦ +¦¦¦¦¦   ¦¦¦   ¦¦¦  ¦¦¦+¦¦¦¦¦¦++¦¦¦¦¦¦¦+¦¦¦ +-+ ¦¦¦ \n");
			printf("+-+      +-----+ +-+  +-+ +-----++------++-+  +---+   +-+   +-+  +-+ +-----+ +------++-+     +-+ \n\n");
            //fim do banner
			printf("Digite o primeiro numero: \n");
			scanf("%f", &num1);
			res = num1 / 100;
			system("cls");
			printf("Digite o segundo numero : \n");
			scanf("%f", &num2);
			ress = res * num2;
			system("cls");
			printf("O resultado da porcentagem foi de: %f \n", ress);
			printf("Deseja fazer mais alguma operação? ((y) sim (n) não) \n");
			scanf("%s", &ny);
			if (ny == 'y'){
				printf("Voltando...");
				system("cls");
				goto inicio;
			}
			else if (ny == 'n') {
				printf("Saindo...");
			}
			else {
				printf("Opção não valida.");
			}
			break;
		}

		//else tipo if so que no switch
		default: {
			system("color 4f");
			printf("Opção não valida \n");
			printf("Saindo...");
		break;
		}
	}
	
	
	
	return 0;
}
