#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	   char num[10];
	   int tam=0, cont=0;
	   
	   printf("Ingresa un numero:  ");
	   scanf("%s", &num);
	   tam=strlen(num);
	   
	   while(num[cont]!='\0'){
	   						 if(tam==6 || tam==3){
							  switch(num[cont]){
							case '1': 
								 if(num[cont+1]!='0')
								 	printf("ciento ");
								 	else
								 	printf("cien");
							 		break;
							 		
						    case '2': printf("doscientos "); break;
							case '3': printf("trescientos "); break;
							case '4': printf("cuatrocientos "); break;
							case '5': printf("quinientos "); break;
							case '6': printf("seiscientos "); break;
							case '7': printf("setecientos "); break;
							case '8': printf("ochocientos "); break;
							case '9': printf("novecientos "); break; 
								 }
								 }
								 
			 if(tam==5 || tam==2){
			 		   
			 		   switch(num[cont]){
			 		   case '1':if(num[cont+1]=='0')
			 		   printf("diez ");
			 		   else{
					   		switch(num[cont+1]){
							   case '1': printf("once "); break;
							   case '2': printf("doce "); break;
							   case '3': printf("trece "); break;
							   case '4': printf("catorce ");break;
							   case '5': printf("quince "); break;
							   
							   default: printf("dieci "); break;
							   }				   
											   }
			 		   
			 		   case '2': if(num[cont]!='0')
			 		   printf("veinti");
			 		   else 
			 		   printf("veinte");
			 		   break;
			 		   
			 		   case '3': printf("treinta "); break;
			 		   case '4': printf("cuarenta "); break;
			 		   case '5': printf("cincuenta "); break;
			 		   case '6': printf("sesenta "); break;
			 		   case '7': printf("setenta "); break;
			 		   case '8': printf("ochenta "); break;
			 		   case '9': printf("noventa "); break;
						
						}
						}
						
				if(tam==4 || tam==1){
				          switch(num[cont]){
			  					case '1': if(tam==4)
								  printf("un ");
								  else
								  printf("uno ");break;
								case '2': printf("dos "); break;
								case '3': printf("tres "); break;
								case '4': printf("cuatro "); break;
								case '5': printf("cinco "); break;
								case '6': printf("seis "); break;
								case '7': printf("siete "); break;
								case '8': printf("ocho "); break;
								case '9': printf("nueve"); break;					  
													  }
								  
								  }
								  if(tam==4)
								  printf("mil");
								  
								  
						cont++;
						tam--;
								  				  
					  }
						   
						   system("pause");
						   }
	   
	   
	   
	   
