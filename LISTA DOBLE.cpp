/* LISTA DOBLE */

#include<stdio.h>
#include<stdlib.h>

struct nodo{
	   int dato;
	   nodo *izq;
	   nodo *der;
	   
	   };
	   

void *crear(void *);
void *eliminar(void *);
void mostrar_Asc(void *);
void mostrar_Desc(void *);


main(){
	   void *p=NULL;
	   int opc;
	   
	   do{
	   	   printf("\tMENU\n");
	   	   printf("\t1.- Introducir en lista\n");
	   	   printf("\t2.- Eliminar un elemento de lista\n");
	   	   printf("\t3.- Mostrar Ascendente\n");
	   	   printf("\t4.- Mostrar Descendente\n");
	   	   printf("\t5.- Salir\n");
	   	   scanf("%d", &opc);
	   	   system("cls");
	   	   
	   	   switch(opc){
		   			   
		   			   case 1: p=crear(p); 
						  system("cls"); continue;
						  
		   			   case 2: p=eliminar(p);
						  system("cls"); break;
						  
		   			   case 3: mostrar_Asc(p);
		   			   putchar('\n');
		   			   system("pause");
						  system("cls"); continue;
						  
		   			   case 4: mostrar_Desc(p);
		   			   putchar('\n');
		   			   system("pause");
						  system("cls"); continue;
						  
						  }
			  
			  }while(opc!=5);
	   
	   system("pause");
	   
	   }
	   
	   

	
	
	
	/*     */
void *crear(void *p){
	 nodo *q, *aux, *aux1;
	 int x;
	 printf("Indica el valor a introducir en la lista:  ");
	 scanf("%d", &x);
	 
	 q=(nodo *)malloc(sizeof(nodo));
	 q->dato= x;
	 q->izq= NULL;
	 q->der= NULL;
	 
	 if(p==NULL)
	 p=q;
	 
	 else{
	 	  aux1=aux=(nodo *)p;
	 	  
	 	  if(x < aux->dato){
		  				  q->der=aux;
		  				  aux->izq=q;
		  				  p=q;
		  				  
							}
							
							else{
								 while(aux!=NULL && aux->dato < x){
								 		 aux1= aux;
								 		 aux= aux->der;
												  
										  }
										  aux1->der= q;
										  q->izq= aux1;
												  
										  if(aux!=NULL){ /* El dato se colocara en medio*/
								  				q->der= aux;
								  				aux->izq=q;
												  				
												  }
								 
								 }
		   
		   }
		   
		   return (p);
		   
	 }	
	 
	 
	 /*     */
void *eliminar(void *s){
	 if(s==NULL)
	 printf("LISTA VACIA\n");
	 
	 else{
	 	  nodo *p, *aux, *aux1;
	 	  int x;
	 	  
	 	  printf("Indica el elemento a eliminar:   ");
	 	  scanf("%d", &x);
	 	  
	 	  aux= p= (nodo*)s;
	 	  
	 	  while(p->der!=NULL && p->dato < x){
		  					 aux= p;
		  					 p= p->der;
		  					 
							   }
							   
							   if(p->dato == x){
							   			  if(p==s){
										  		   s= aux1= p->der;
										  		   if(aux1!=NULL)
										  		   aux1->izq= NULL;
													 
													 }
													 
													 else{
													 	  aux1= aux->der= p->der;
													 	  if(aux1!=NULL)
													 	  aux1->izq= aux;
														   
														   }
														   free(p);
							   			  
											 }
											 else
											 printf("DATO NO ENCONTRADO\n");
		   
		   }
	 
	 return(s);
	 
	 }
	 

void mostrar_Asc(void *p){
	 nodo *s;
	 
	 s=(nodo*)p;
	 if(p==NULL)
	 printf("LISTA VACIA\n");
	 
	 else{
	 	  do{
		  	 	   printf("%d..", s->dato);
		  	 	   s= s->der;
		  	 	   
					  }while(s!=NULL);
		   
		   }
	 
	 }
	 
	 
void mostrar_Desc(void *p){
	 nodo *s;
	 
	 s= (nodo *)p;
	 
	 if(p==NULL)
	 printf("LISTA VACIA\n");
	 
	 else{
	 	  while(s->der != NULL)
	 	  s= s->der;
	 	  
	 	  do{
		  	 		printf("%d..", s->dato);
		  	 		s= s->izq;
		  	 		
					   }while(s!=NULL);
		   
		   }
	 
	 
	 }
