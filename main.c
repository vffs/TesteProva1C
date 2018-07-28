
/* 
 * File:   main.c
 * Author: valeria
 *
 * Created on 21 de Julho de 2018, 13:09
 */

#include <stdio.h>
#include <stdlib.h>
#define valea 3.20
#define valeb 4.40

float Imprimir(float salbase,float salliq,float dvt,float dinss,float somam,float salbruto ){
     printf("\t\t\t\t""CONTRA CHEQUE \n\n");
				printf("\t""Proventos \n");
				printf("\t""Salario base..........................................R$%.2f \n",salbase);
				printf("\t""Vale transporte.......................................R$%.2f\n\n",somam);
				printf("\t""Descontos \n");
				printf("\t""Vale transporte.......................................R$%.2f\n",dvt);
				printf("\t""INSS..................................................R$%.2f \n\n",dinss);
				printf("\t""Salario bruto........R$%.2f   Salario liquido......R$%.2f\n\n",salbruto,salliq);
}


int main(void){
	int ida,volta,dias,n,m,somaq;
	char a,b;
	float salbase,salliq,dvt,dinss,somam,salbruto;
	
	printf("Digite o valor do salario \n");
	scanf("%f",&salbase);
	
	if(salbase<954.00){
		printf("salario invalido menor que R$ 954.00\n\n");
		printf("Por favor corrija! \n\n");
	}
	else if(salbase>=954.00){
		printf("Digite a quantidade de passagem que gasta para ir ao trabalho \n");
		scanf("%d",&ida);
		printf("Digite a quantidade de passagem que gasta para voltar para casa \n");
		scanf("%d",&volta);
		printf("Digite a quantidade de dias trabalhados no mes \n");
		scanf("%d",&dias);
		somaq=(ida+volta)*dias;//quantidade de passagem mes
		
		printf("Todas as passagens sao do mesmo tipo A ou B? Digite s(sim) ou n(nao) \n");
		scanf("%s",&b);
		
		if((b!='s'&& b!='n'&& b!='S'&&b!='N')){
			printf("opcao invalida! \n\n");
			printf("corrija a opcao! \n\n");
			
		}
		else {
			if(b=='s'|| b=='S'){		 
				printf("Didite o tipo A ou B \n");
			 	scanf("%s",&a);
			
				if(a!='a' && a!='b'&& a!='A'&& a!='B' ){
				printf("tipo invalido! \n\n");
				printf("corrija o tipo \n\n");
				}
			
				else{
			    	if(a=='a'|| a=='A'){
				
				somam=somaq*valea;//valor das passagens em reais R$ do mes
				}
				else if(a=='b'|| a=='B'){
				somam=somaq*valeb;//valor das passagens em reais R$ do mes
				}
				salbruto=salbase+somam;//salario bruto
				dvt=salbase*0.06;//desconto das passagens
				dinss=salbruto*0.08;//desconto do INSS
				salliq=salbruto-dvt-dinss;// salario liquido
		                
                                Imprimir(salbase,salliq,dvt,dinss,somam,salbruto );
		
			
				} 
				
				
				}	
			else if(b=='n'||b=='N'){
				printf("Quantas passagens sao do tipo A \n");
				scanf("%d",&n);
				printf("quantas passagens sao do tipo B \n");
				scanf("%d",&m);
				
				somam=((valea*n)+(valeb*m))*dias;//valor das passagens em reais R$ do mes
				
				salbruto=salbase+somam;//salario bruto
				dvt=salbase*0.06;//desconto das passagens
				dinss=salbruto*0.08;//desconto do INSS
				salliq=salbruto-dvt-dinss;// salario liquido
		
                               Imprimir(salbase,salliq,dvt,dinss,somam,salbruto );
				
                        }
		
		}
	}	
	system("PAUSE");
	return 0;
}

