#include<stdio.h>
#include<stdlib.h>


main(){
	   int res, num, mil;
	   
	   printf("Ingrese un numero en Arabigo");
	   scanf("%d", &num);
	   
	   mil= num/1000;
	   res= num%1000;
	   
	   switch (mil){
	   		  case 1:
			  	   printf("M");break;
			  	   
		  	   case 2:
			   		printf("MM");break;
				   		
				case 3:
			 		printf("MMM");break;
				 }
				 
				 int cent;
				 cent=res/100;
				 
				 switch(cent){
				 			  case 1:
							  	   printf("C");break;
							  	   
				  	   			   case 2:
								   		printf("CC");break;
								   		
  								case 3:
				 				printf("CCC");break;
											 
				 				 case 4: 
					 	  		 printf("CD");break;
											 	  
								 case 5: 
			  	   				 printf("D");break;
												  	   
		   						  case 6:
						   		printf("DC");break;
													   		
						   		case 7:
							 printf("DCC"); break;
							 
							 case 8:
							 printf("DCCC");break;
							 
							 case 9:
							 	  printf("CM");break;
							 	  
							   }
							   
							   int dece;
							   
							   dece= res/10;
							   
							   switch(dece){
			   				
			   				   case 1: 
							   		printf("X");break;
							   		
								case 2:
							 		 printf("XX");break;
										 
								 case 3:
									 printf("XXX");break;
										 	  
						 	      case 4:
								  	   printf("XL");break;
										  	   
							  	   case 5:
						   		printf("L");break;
												  	
									case 6:	
									 printf("LX");break;
															 
									 case 7:
								 	  printf("LXX");break;
								 	  
								 	  case 8:
									  	   printf("LXXX");break;
									  	   
									  	   case 9:
										   		printf("XC");break;
										   		   
											   }
											   
											   int uni;
											   
									   uni= res%10;
									   
									   switch(uni){
									   			   case 1:
												   		printf("I");break;
												   	
													case 2: printf("II");break;
													
													case 3:
														 printf("III");break;
														 
													case 4 :
														 printf("IV");break;
														 
													case 5:
														 printf("V");break;
														 
													case 6:
														 printf("VI");break;
														 
													case 7:
														 printf("VII");break;
														 
													case 8:
														 printf("VIII");break;
														 
													case 9:
														 printf("IX");break;	 	 	 	 	 	 
														 	     	
													  }
				 
				 system("pause");
	   
	   }
