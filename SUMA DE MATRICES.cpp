#include<stdio.h>
#include<stdlib.h>

void asin (int fil, int col, int matrizA[20][20]);
void imp (int fil, int col, int matrizA[20][20]);
void sum (int fil, int col, int matrizA[20][20], int matrizB[20][20]);
void multi (int fil, int col, int matrizA[20][20], int matrizB[20][20]);

main(){
	   int opc;
	   int i,j,a,b,d;
	   do{
	   
	   printf("1.- SUMA DE MATRICES\n");
	   printf("2.- MULTIPLICACION DE MATRICES\n");
	   printf("3.- SALIR\n");
	   
	   scanf("%d", &opc);
	   
	   switch(opc){
	   			   case 1:
				   		
	   printf("SUMA DE MATRICES\n\n");
	   printf("Ingresa la dimencion de las matrices: ");
	   
	   int fil, col;
	   scanf("%d %d", &fil, &col);
	   
	   printf("Ingresa los datos de la Matriz A:\n ");
	   int matrizA[20][20], matrizB[20][20];
	   
	   asin(fil, col, matrizA);
	   
	   printf("\nIngresa los datos de la Matriz B:\n ");
	   asin(fil, col, matrizB);
	   
	   system("cls");
	   
	   imp(fil, col, matrizA);
	   printf("\n+ \n");
	   
	   imp(fil, col, matrizB);
	   printf("\n\n");
	   
	   printf("RESULTADO\n");
	   
	   sum(fil, col, matrizA, matrizB);
	   
	   printf("\n\n");
	   system("pause");
	   break;
	   
	   case 2:
	   		int fil1, col1, fil2, col2;
	   		printf("MULTIPLICACION DE MATRICES\n");
	   		printf("Ingrese las dimensiones de la primer matriz: ");
	   			
	   			
	   		scanf("%d %d", &fil1, &col1);
	   		
	   		printf("Ingrese las dimenciones de la segunda matriz: ");
	   		scanf("%d %d", &fil2, &col2);
	   		
	   		if(col1 != fil2){
					printf("\n\nERROR (Las matrices no son CONFORMABLES)");
					}
					else{
	   		
  		printf("Ingresa los datos de la Matriz A:\n ");
	   int matrizA1[20][20], matrizB1[20][20], c[60][60];
	   
	    for(int i=0; i<fil1; i++){
	   		   for(int j=0; j<col1; j++){
			   		   
			   		   printf("Dato (%d, %d)",i, j);
			   		   scanf("%d", &matrizA1[i][j]);
			   		   
						  }
				  }
	   
	   printf("\nIngresa los datos de la Matriz B:\n ");
	    for(int i=0; i<fil2; i++){
	   		   for(int j=0; j<col2; j++){
			   		   
			   		   printf("Dato (%d, %d)",i, j);
			   		   scanf("%d", &matrizB1[i][j]);
			   		   
						  }
				  }
	   system("cls");
	   
	   imp(fil1, col1, matrizA1);
	   printf("\n* \n");
	   
	   imp(fil2, col2, matrizB1);
	   printf("\n\n");
	   
	   printf("RESULTADO\n");
	   for(a=0; a<fil1; a++){
	   for(b=0; b<col2; b++){
	  c[a][b]=0;
	  }}
			 for(a=0; a<fil1; a++){
		          for(b=0; b<col2; b++){
					   for(d=0; d<col1; d++){
										   									   										
										 c[a][b]=(matrizA1[a][d]*matrizB1[d][b])+ c[a][b];
						
							 }
							  printf("      %d", c[a][b]); 
				 
							 }
						   printf("\n");
							
				   }
				   }
	   printf("\n\n");
	   system("pause");
	   	break;
	   		
	   }
	   system("cls");
	   }while(opc!=3);
	   
	   
}
void asin (int fil, int col, int matrizA[20][20]){
	 for(int i=0; i<fil; i++){
	   		   for(int j=0; j<col; j++){
			   		   
			   		   printf("Dato (%d, %d)",i, j);
			   		   scanf("%d", &matrizA[i][j]);
			   		   
						  }
				  }
	 }

void imp (int fil, int col, int matrizA[20][20]){
	 for(int i=0; i<fil; i++){
	   		   for(int j=0; j<col; j++){
			   		   
			   		   printf("     %d", matrizA[i][j]);
						  
						  }
						  printf("\n");
						  }
						  }

void sum (int fil, int col, int matrizA[20][20], int matrizB[20][20]){
	 for(int i=0; i<fil; i++){
	   		   for(int j=0; j<col; j++){
			   		   
			   		   printf("     %d", matrizA[i][j] + matrizB[i][j]);
						  
						  }
						  printf("\n");
						  }
						  }
						  

