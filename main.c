#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero,primero,segundo,tercero,cuarto,resultado,resultado1=0,resultado2=0,resultado3=0,resultado4=0,resultado5=0,resultado6=0,resultado7=0,resultado8=0,resultado9=0,resultado10=0;
	int resultado11=0,resultado12=0,resultado13=0,resultado14=0,resultado15=0,resultado16=0,resultado17=0,resultado18=0,resultado19=0,resultado20=0,resultado21=0,resultado22=0,resultado23=0;
	int resultado24=0,resultado25=0,resultado26=0,resultado27=0,resultado28=0,resultado29=0,resultado30=0,resultado31=0,resultado32=0,resultado33=0,resultado34=0,resultado35=0,resultado36=0,resultado37=0,resultado38=0;
	char c;
	fflush(stdin);
	system("color 0F");
	system("cls");
	do{
		system("cls");
		printf("\t\t\t\t\tN%cmeros Vampiro\t\t\t\t\t",163);
		printf("\n\n\t\tIntroduce un N%cmero (Maximo 4 Digitos): ",163);
		scanf("%d",&numero);
		numero=abs(numero);
		if(numero<999999999){
			if(numero>=1&&numero<=9){
				printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
			}
			if(numero>9&&numero<=99){
				primero=numero/10;
				segundo=numero%10;
				resultado=primero*segundo;
				resultado2=(segundo*10)+primero;
				if(numero==resultado){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero==resultado2){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				else{
					printf("\n\t\tEstas a Salvo, No es Vampiro");
				}
				
			}
			if(numero>99&&numero<=999){
				primero=numero/100;
				segundo=(numero%100)/10;
				tercero=numero%10;
				resultado=primero*segundo*tercero;
				resultado2=((tercero*100)+(segundo*10)+(primero));
				resultado3=((primero*100)+(tercero*10)+(segundo));
				resultado4=((segundo*100)+(tercero*10)+(primero));
				resultado5=((segundo*100)+(primero*10)+(tercero));
				resultado6=((tercero*100)+(primero*10)+(segundo));
				resultado7=(primero+segundo*10);
				resultado7=resultado7*tercero;
				resultado8=(segundo+primero*10);
				resultado8=resultado8*tercero;
				resultado9=(tercero+primero*10);
				resultado9=resultado9*segundo;
				resultado10=(primero+tercero*10);
				resultado10=resultado10*segundo;
				resultado11=(segundo+tercero*10);
				resultado11=resultado11*primero;
				resultado12=(tercero+segundo*10);
				resultado12=resultado12*primero;
				if(numero==resultado||numero==resultado2||numero==resultado3||numero==resultado4||numero==resultado5||numero==resultado6||numero==resultado7||numero==resultado8||numero==resultado9||numero==resultado10||numero==resultado11||numero==resultado12){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				/*if(numero==resultado){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero==resultado2){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero==resultado3){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero==resultado4){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero==resultado5){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero==resultado6){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero==resultado7){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}	
				if(numero==resultado8){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero==resultado9){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero==resultado10){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero=resultado11){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				if(numero=resultado12){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}*/
				else{
					printf("\n\n\t\tEstas a Salvo, No es Vampiro");
				}
			}
			if(numero>999&&numero<=9999){
				
				primero=numero/1000;
				segundo=(numero/100)%10;
				tercero=(numero%100)/10;
				cuarto=numero%10;
				resultado=primero*segundo*tercero*cuarto;
				resultado1=(primero*1000)+(segundo*100)+(tercero*10)+cuarto;
				resultado2=(primero*1000)+(segundo*100)+(cuarto*10)+tercero;
				resultado3=(primero*1000)+(tercero*100)+(cuarto*10)+segundo;
				resultado4=(primero*1000)+(cuarto*100)+(tercero*10)+segundo;
				resultado5=(primero*1000)+(tercero*100)+(segundo*10)+cuarto;
				resultado6=(primero*1000)+(cuarto*100)+(segundo*10)+tercero;
				resultado7=(segundo*1000)+(primero*100)+(tercero*10)+cuarto;
				resultado8=(segundo*1000)+(primero*100)+(cuarto*10)+tercero;
				resultado9=(segundo*1000)+(tercero*100)+(cuarto*10)+primero;
				resultado10=(segundo*1000)+(cuarto*100)+(tercero*10)+primero;
				resultado11=(segundo*1000)+(tercero*100)+(primero*10)+cuarto;
				resultado12=(segundo*1000)+(cuarto*100)+(primero*10)+tercero;
				resultado13=(tercero*1000)+(segundo*100)+(primero*10)+cuarto;
				resultado14=(tercero*1000)+(segundo*100)+(cuarto*10)+primero;
				resultado15=(tercero*1000)+(primero*100)+(cuarto*10)+segundo;
				resultado16=(tercero*1000)+(cuarto*100)+(primero*10)+segundo;
				resultado17=(tercero*1000)+(primero*100)+(segundo*10)+cuarto;
				resultado18=(tercero*1000)+(cuarto*100)+(segundo*10)+primero;
				resultado19=(cuarto*1000)+(segundo*100)+(tercero*10)+primero;
				resultado20=(cuarto*1000)+(segundo*100)+(primero*10)+tercero;
				resultado21=(cuarto*1000)+(tercero*100)+(primero*10)+segundo;
				resultado22=(cuarto*1000)+(primero*100)+(tercero*10)+segundo;
				resultado23=(cuarto*1000)+(tercero*100)+(segundo*10)+primero;
				resultado24=(cuarto*1000)+(primero*100)+(segundo*10)+tercero;
				
				resultado25=(tercero*100)+(segundo*10)+primero;
				resultado25=resultado25*cuarto; 
				resultado26=(tercero*100)+(segundo*10)+cuarto;
				resultado26=resultado26*primero;
				resultado27=(tercero*100)+(cuarto*10)+primero;
				resultado27=resultado27*segundo;
				resultado28=(cuarto*100)+(segundo*10)+primero;
				resultado28=resultado28*tercero;
				
				resultado29=(primero*10)+segundo;
				resultado30=(tercero*10)+cuarto;
				resultado31=resultado29*resultado30;
				
				resultado32=(tercero*10)+primero;
				resultado33=(cuarto*10)+segundo;
				resultado34=resultado32*resultado33;
				
				resultado35=(cuarto*10)+primero;
				resultado36=(tercero*10)+segundo;
				resultado37=resultado35*resultado36;
				
				if(numero==resultado||numero==resultado1||numero==resultado2||numero==resultado3||numero==resultado4||numero==resultado5||numero==resultado6||numero==resultado7||numero==resultado8||numero==resultado9||numero==resultado10||numero==resultado11||numero==resultado12||numero==resultado13||numero==resultado14||numero==resultado15||numero==resultado16||numero==resultado17||numero==resultado18||numero==resultado19||numero==resultado20||numero==resultado21||numero==resultado22||numero==resultado23||numero==resultado24||numero==resultado25||numero==resultado26||numero==resultado27||numero==resultado28||numero==resultado31||numero==resultado34||numero==resultado37){
					printf("\n\n\t\t%c%c%c%cN%cmero Vampiro!!!!",173,173,173,173,163);
				}
				else{
					printf("\n\n\t\tEstas a Salvo, No es Vampiro");
				}
			}
		}
		printf("\n\n\t\tPresiona una tecla para calcular otro numero");
		
	}
	while(c=getch());
	
	
	return 0;
}
