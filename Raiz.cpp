#include<stdio.h>
#include<stdlib.h>
#define x 0.00000001

main(){
	   float num, a=0, cont;
	   printf("Ingresa un Numero:  ");
	   scanf("%f", &num);
	   do{
	   	  		   a+=x;
	   	  		   cont=a*a;
				  }while(num>=cont);
	   printf("\n Raiz= %.4f", a);
	   putchar('\n');
	   system("pause");
	   }
