#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int valor(char c);

main(){
	   int opc;
	   do{
	   	   printf("Presiona uno para continuar, Cualquier otro para Salir  ");
	   	   scanf("%d", &opc);
	   	   switch(opc){
		   			   
		   			   case 1:
	   	   
	   char num[10];
	   int cont=0, y, sum=0;
	   
	   printf("Ingresa un numero en Romano(Letras Mayusculas!!!)  ");
	   scanf("%s", &num);
	   
	   
	   while(num[cont]!='\0'){
	   						   
				y=valor(num[cont]);	
	   			
					if((valor(num[cont])) < (valor(num[cont+1])))
							y=valor(num[cont])*-1;
							
						
									sum+=y;
									cont++;
											  
						  }
	   printf("%d", sum);
	   printf("\n\n");
	   
	   break;
	   
	   
	   
	   }
	   }while(opc==1);
	   
	   system("pause");
	   }
	   
int valor(char c){
	int x;
	
	switch(c){
			  case 'M': x=1000; break;
			  case 'D': x=500; break;
			  case 'C': x=100; break;
			  case 'L': x=50; break;
			  case 'X': x=10; break;
			  case 'V': x=5; break;
			  case 'I': x=1; break;
			  	   
			  }
		   return x;
	} 
