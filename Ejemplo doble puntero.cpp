#include<stdio.h>
#include<stdlib.h>

main(){
	   int f, c;
	   int **pm;
	   printf("Hileras: ");
	   scanf("%d", &f);
	   printf("columnas: ");
	   scanf("%d", &c);
	   
	   pm=(int**)malloc(sizeof(int *)*f);
	   for(int j=0; j<c; j++)
	   		  pm[j]=(int*)malloc(sizeof(int)*c);
	   		  for(int i=0; i<f; i++)
	   		  for(int j=0; j<c; j++)
	   		  pm[i][j]=i*j+1;
	   		  printf("Mostrar Corchetes\n");
	   		  for(int i=0; i<f; i++){
	   		  for(int j=0; j<c;j++)
	   		  printf("%d\t", pm[i][j]);
	   		  putchar('\n');
			  }
			  printf("Mostrar Punteros\n");
			  for(int i=0; i<f; i++){
			  		  for(int j=0; j<c; j++)
			  		  printf("%d\t", *(*(pm+i)+j));
			  		  putchar('\n');
						
						}
	   system("pause");
	   
	   }
