#include<stdio.h>
#include<stdlib.h>

struct nodo{
	   int dato;
	   nodo *siguiente;
	   };
	   
	   /* Declaracion de funciones */
	   void *crear(void *);
	   void *eliminar(void *);
	   void mostrar(void *);
	   
main(){
	   void *p=NULL;
	   int opc;
	   
	   do{
	   	  printf("\t1.- Introducir un elemento a la pila\n");
	   	  printf("\t2.- Eliminar un elemento\n");
	   	  printf("\t3.- Mostrar la pila\n");
	   	  printf("\t4.- Salir\n");
	   	  scanf("%d", &opc);
	   	  system("cls");
	   	  
			 switch(opc){
			 				  case 1: p= crear(p); 
			 				   system("pause");
							   system("cls");
							   continue; 
			 				  
			 				  case 2: p= eliminar(p);
							   system("cls");
							    break;
							    
			 				  case 3: mostrar(p);
			 				  printf("\n");
							   system("pause");
							   system("cls");
							    continue;
			 				  
							   }
							    
			  }while(opc!=4);
			  
	   }
	   
	
	void *crear(void *p){
		 nodo *q, *aux;
		 putchar('\n');
		 printf("Indica el valor a introducir a la pila=>");
		 q= (nodo*)malloc(sizeof(nodo));
		 scanf("%d", &q -> dato);
		 q ->siguiente=NULL;
		 
		 if(p==NULL)	/*La pila esta vacia primer elemento*/
			p=q;
		 
		 else{
		 	  q -> siguiente=(nodo*)p;
		 	  p=q;
			   }
			   return (p);
		 }
		 
		 void *eliminar(void *s){
		 	  nodo *p, *aux;
		 	  if(s==NULL)
		 	  printf("\n Pila vacia\n");
		 	  
		 	  else{
			  	   p= (nodo *)s;
			  	   s= p -> siguiente;
			  	   free(p);
					 }
					 return(s);
			   }
			   
			   void mostrar (void *p){
			   		nodo *s;
			   		s= (nodo *)p;
			   		if(p==NULL)
			   		printf("PILA VACIA\n");
			   		
			   		else 
			   		do{
					   	 printf("%d..", s -> dato);
					   	 s=s -> siguiente;
					   	 		 
									 }while (s!=NULL);
					   }
