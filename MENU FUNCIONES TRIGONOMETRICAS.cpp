#include<stdio.h>
#include<stdlib.h>

float pot (float, float);
float fact (float);
float ex (float);
float seno (float);
float coseno (float);
int opcion;
main(){  
		 do{
		 	 
		 
		 printf("MENU\n\n");
		 printf("1.- Exponencial\n");
		 printf("2.- Seno \n");
		 printf("3.- Coseno\n");
		 printf("4.- Tangente\n");
		 printf("5.- Cotangente\n");
		 printf("6.- Secante\n");
		 printf("7.- Cosecante\n");
		 printf("8.- Seno hiperbolico\n");
		 printf("9.- Coseno Hiperbolico\n");
		 printf("10.- Tangente Hiperbolica\n");
		 printf("11.- Salir\n");
		 printf("\nIngrese una opcion: ");
		 
		 scanf("%d", &opcion);
		 system("cls");
		 
		 switch(opcion){
		 				case 1:
							 
	 					float x,a;
	   					printf("\n=== e^x ===\n\n ingresa x: ");
	   					scanf("%f",&x);
	   
	    				a= ex(x);
	     
						   printf("\n RESULTADO \t  %f\n\n", a);  
						   break;
						   
						   case 2:
						   		float b, x1;
						   		printf("\nSENO DE X\n\n");
						   		printf("ingresa X: ");
						   		scanf("%f", &x1);
						   		
						   		b= seno(x1);
						   		
						   		printf("\nRESULTADO= %f\n\n", b);
						   		break;
						   		
						   		case 3:
									 float c, x2;
									 printf("\nCOSENO DE X\n\n");
									 printf("Ingresa X: ");
									 scanf("%f", &x2);
									 
									 c= coseno(x2);
									 
									 printf("RESULTADO= %f\n\n", c);
									 break;
									 
									 case 4:
									 	  float tangente, x3, y;
									 	  printf("\nTANGENTE DE X\n\n");
									 	  printf("ingresa X: ");
									 	  scanf("%f", &x3);
									 	  
									 	  y= coseno(x3);
									 	  
									 	  if(y==0){
                                                   printf("Infinito");
                                           }
										   else{
									 	      tangente= seno(x3)/y;
									 	      printf("RESULTADO= %f\n\n", tangente);
                                          }
									 	  break;
									 	  
									 	  case 5: 
										  	   float x4, y1, cotangente;
										  	   printf("\nCOTANGENTE DE X \n\n");
										  	   printf("Ingresa X: ");
										  	   scanf("%f", &x4);
										  	   
										  	   y1= seno(x4);
										  	   if(y1==0){
										  	   printf("Infinito");
											   }
										  	   else{
										  	   cotangente= (coseno(x4))/(y1);
										  	   printf("RESULTADO= %f\n\n", cotangente);
                                            }
						   		
						   		break;
						   		
						   		case 6: 
									 float x5, secante, y2;
									 printf("\nSECANTE DE X\n\n");
									 printf("Ingresa X: ");
									 scanf("%f", &x5);
									 
									 y2= coseno(x5);
									 if(y2==0){
									 printf("Infinito");
									 }
									 else{
									 secante= 1/y2;
									 printf("RESULTADO= %f\n\n", secante);
                                  }
									 break;
									 
									 case 7:
		 	  		  				 	  float x6, cosecante, y3;
						 	  		 	  printf("\nCOSECANTE DE X\n\n");
						 	  		 	  printf("Ingresa X: ");
						 	  		 	  scanf("%f",&x6);
						 	  		 	  
						 	  		 	  y3= seno(x6);
						 	  		 	  if(y3==0)
						 	  		 	  printf("Infinito");
						 	  		 	  
						 	  		 	  else{
						 	  		 	  cosecante= 1/ y3;
						 	  
						 	  		 	  printf("RESULTADO= %f\n\n", cosecante);
                                        }
						 	  			  break;
						 	  			  
						 	  			  case 8:
										  	   float x7, senoH;
										  	   printf("\n SENO HIPERBOLICO DE X\n\n");
										  	   printf("ingresa X: ");
										  	   scanf("%f",&x7);
										  	   
										  	   senoH= (ex(x7) - (ex(-x7)))/2;
										  	   
										  	   printf("RESULTADO= %f\n\n", senoH);
										  	   break;
										  	   
										  	   case 9:
											   		float x8, cosenoH;
											   		printf("\nCOSENO HIPERBOLICO\n\n");
											   		printf("Ingresa X: ");
											   		scanf("%f",&x8);
											   		
											   		cosenoH= (ex(x8) + (ex(-x8)))/2;
											   		
											   		printf("RESULTADO= %f\n\n", cosenoH);
											   		break;
											   		
				   								case 10:
									 				 float x9, tangenteH, y4;
														 
								 					 printf("\nTANGENTE HIPERBOLICA\n\n");
									 				 printf("Ingresa X: ");
									 				 scanf("%f", &x9);
						 		 					 tangenteH= ((ex(x9) - (ex(-x9)))/2)/((ex(x9) + (ex(-x9)))/2);
														 
									 				 printf("RESULTADO= %f\n\n", tangenteH);
									 				 break;
									 				 
									 				 
									 				 case 11: 
														   break;
														   
														   default :
														   		   printf("\nOPCION INVALIDA\n");
														   		   break;
														   		   
									 				 
						   }
						   printf("\n");
						   system("pause");
						   system("cls");
						   }while(opcion!= 11);
						   system("cls");
	   }

float pot (float x, float y){
	   		 float k=1;
	   		 for(int i=1; i<=y; i++)
	   		 k*=x;
	   		 return k;
	   		 
				}
				
				float fact (float x){
					float k=1;
					for(int i=1; i<=x; i++)
					k=k*i;
					return k ;
					
					}

 float ex(float x){
 	      		float E=0.0001;
	   			float sum=0, k=0;
	   			float  incr ;
	   			
 	   		   do{
		
	   	  			  incr= (pot(x,k)/ fact(k));
	   	  			  sum += incr;
	   	  			  k++;
	   	  			 
	   	  			  
						   }while(incr >E);
 	  					    return sum;
		}

float seno (float x){
	  float E=0.0001;
	  float  sum=0, k=0;
	  float incr;
	  
	  do{
	  	 	incr= pot(-1,k)* ((pot(x, (2*k+1)))/(fact(2*k+1)));
	  	 	sum+= incr;
	  	 	k++;
	  	 	if(incr<0){
					   incr=-incr;
					   
				   }
			   
			   }while (incr> E);
			   return sum;
	  
	  }

float coseno (float x){
	  float E=0.0001;
	  float sum=0, k=0;
	  float incr;
	  
	  do{
	  	 	incr= pot(-1, k)*((pot(x, 2*k))/ fact(2*k));
	  	 	sum+= incr;
	  	 	k++;
	  	 	if(incr<0){
					   incr=-incr;
					   }
					   
			   }while(incr>E);
			   return sum;
	  
	  }
