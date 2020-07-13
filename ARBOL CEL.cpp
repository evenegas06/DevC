#include<stdio.h>
#include<stdlib.h>

struct arbol{
	   int dato;
	   arbol *hjizq;
	   arbol *hjder;
	   
	   };
	   
void Escribir(struct arbol *punt);
void Insertar(struct arbol **punt, int valor);

main(){
	   struct arbol *arbol = NULL;
	   Insertar(&arbol, 5);
	   Insertar(&arbol, 3);
	   Insertar(&arbol, 7);
	   Insertar(&arbol, 2);
	   Insertar(&arbol, 4);
	   Insertar(&arbol, 8);
	   Insertar(&arbol, 9);
	   
	   Escribir(arbol);
	   
	   putchar('\n');
	   system("pause");
	   
	   
	   }
	   
void Escribir(struct arbol *punt){
	 if(punt){
	 		  Escribir(punt->hjizq);
	 		  printf("%d ", punt->dato);
	 		  Escribir(punt->hjder);
			   
			   };
	 
	 };
	 
void Insertar(struct arbol **punt, int valor){
	  arbol *actual = *punt;
	 
	 if(actual == NULL){
	 		   *punt = (arbol *)malloc(sizeof(arbol));
	 		   actual= *punt;
	 		   actual->dato= valor;
	 		   actual->hjizq=NULL;
	 		   actual->hjder=NULL;
				}
	 else
	 	  if(actual->dato > valor)
	 	  Insertar(&actual->hjizq, valor);
		   
		 else
		 Insertar(&actual->hjder, valor);  
	 };
