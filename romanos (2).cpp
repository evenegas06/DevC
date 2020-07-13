#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int valor(char c);

main(){
	   int opc;
	   do{
	   	   printf("1.- Continuar   Cualquier otro para salir\n");
	   	   scanf("%d", &opc);
	   	   system("cls");
	   	   
	   	   switch(opc){
		   			   
  			   case 1:
	   	   
	   char num[10];
	   int cont=0, y, sum=0;
	   
	   printf("Ingresa un numero en Romano");
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
	   system("pause");
	   system("cls");
	   break;
	   
	   }
	   
	   }while(opc==1);
	   
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
