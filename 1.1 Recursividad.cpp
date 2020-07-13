#include<stdio.h>
#include<stdlib.h>

int buscar(int[], int, int);

main(){
	   int t;
	   printf("Ingresa el Tamaño de tu Arreglo:  ");
	   scanf("%d", &t);
	   system("cls");
	   
	   int x[t];
	   for(int i=0;i<t;i++){
	   		   printf("Dato %d:   ", i+1);
	   		   scanf("%d", &x[i]);
				  }
				  system("cls");
				  
				  printf("Tamaño= %d\n", t);
				  printf("Arreglo=  ");
				  for(int i=0; i<t; i++)
				  printf("%d  ", x[i]);
				  printf("\n");
				  getchar();
				  
				  int num;
				  printf("\nNumero a buscar?:  ");
				  scanf("%d", &num);
				  
				  if(buscar(x,t,num)<0 || buscar(x,t,num)>t)
				  printf("\nEl numero no se encuentra en el arreglo\n\n");
				  else
				  printf("\nPosicion en el Arreglo: %d\n\n", buscar(x,t,num));
				  
	   system("pause");
	   }

int buscar(int x[], int t, int num){
	return x[t]==num ? t : buscar(x,t-1, num);
    }
