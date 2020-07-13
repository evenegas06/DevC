#include<stdio.h>
#include<stdlib.h>

struct nodo{
	   int dato;
	   nodo *izq;
	   nodo *der;
	   
	   };
	   
void *crear(void *);
void mostrar(void *);
void *eliminar(void *);
void preorden(void *);
void postorden(void *);
void inorden(void *);
int menu();

main(){
	   void *root=NULL;
	   int x;
	   
	   do{
	   	   x=menu();
	   	   switch(x){
		   			 case 1: root= crear(root); break;
					 case 2: mostrar(root); break;
					 case 3: root= eliminar(root); break;
					  	
						}
						
			  }while(x>0 && x<4);
			  system("pause");
	   
	   }
	   
void mostrar(void *r){
	 int x;
	 
	 do{
	 	 printf("\n\t SUBMENU MOSTRAR\n");
	 	 printf("1.- Mostrar en Preorden\n");
	 	 printf("2.- Mostrar en Postorden\n");
	 	 printf("3.- Mostrar en Inorden\n");
	 	 printf("4.- Salir\n");
	 	 
	 	 scanf("%d", &x);
		  
		  }while(x>4 || x<1);
		  
		  if(r==NULL)
		  printf("ARBOL VACIO\n");
		  
		  else
		  switch(x){
		  			case 1: preorden(r); break;
		  			case 2: postorden(r); break;
		  			case 3: inorden(r); break;
		  			  
					  }
	 
	 }
	 
int menu(){
	int x; 
	
	do{
	   	printf("\n\t MENU\n");
	   	printf("1.- Insertar un Elemento\n");
	   	printf("2.- Mostrar Arbol\n");
	   	printf("3.- Eliminar un Elemento\n");
	   	printf("4.- Salir\n");
	   	
	   	scanf("%d", &x);
		   
		   }while(x>4 || x<1);
		   
		   return(x);
	
	}
	
void *eliminar(void *r){
	 /* Se emplea una variable de tipo bandera para:
	 	   Si band=1, no se localizo el dato en el arbol
			Si band=2, se localizo el dato en el arbol 
		*/
		
		if(r==NULL)
		printf("ARBOL VACIO\n");
		
		else {
			 printf("Da el dato a Eliminar:  ");
			 
			 int x, band=0;
			 
			 scanf("%d", &x);
			 
			 nodo *aux, *q=(nodo *)r;
			 aux=NULL;
			 
			 do
			 if(q->dato <x)
			 if(q->der!=NULL){
			 				  aux=q;
			 				  q=q->der;
							   }
							   else
							   band=1;
							   else if(q->dato>x)
							   if(q->izq!=NULL){
							   					aux=q;
							   					q=q->izq;
												   }
			 else
			 band=1;
			 else 
			 band=2;
			 while(band==0);////ERROR??
			 if(band==2){
			 			 printf("Dato a eliminar: %d", q->dato);
			 			 if(aux!=NULL)
			 			 printf("Valor del dato en el Auxiliar: %d",aux->dato);
			 			 
			 			 else 
			 			 printf("Dato localizado en la Raiz\n");
			 			 nodo *d;
			 			 
			 			 if(q->izq==NULL && q->der==NULL){
						 				 printf("El dato se localizo en un nodo Hoja\n");
		 				 
		 				 if(r==q){
						 		  printf("Y es nodo Raiz Unico\n");
						 		  r=NULL;
								   
								   }
										 else if(aux->izq==q)
										 aux->izq=NULL; 
										 
										 else if(aux->der==q)
										 aux->der=NULL;
										 d=q;
										  }
						  else if(q->izq==NULL && q->der!=NULL){
						  	   //El dato a eliminar solo tiene ramificacion derecha
						  	   d=q;
						  	   q=q->der;
						  	   if(r==d)
						  	   r=d->der;
						  	   else if(aux->der==d)
						  	   aux->der=d->der;
						  	   else 
						  	   aux->izq=d->der;
								 
								 }
						  else if(q->izq!=NULL && q->der!=NULL){
						  	   //El dato a eliminar solo tiene ramificacion izquierda
						  	   
						  	   d=q;
						  	   q=q->izq;
						  	   if(r==d)
						  	   r=d->izq;
						  	   
						  	   else if(aux->der==d)
						  	   aux->der=d->izq;
						  	   else 
						  	   aux->izq=d->izq;
						  	   
								 }
						  
						  else{
						  	   //Eldato a eliminar tiene dos ramificaciones 
						  	   d=q->izq;
						  	   if(d->der==NULL){
							   					q->dato=d->dato;
							   					q->izq=d->izq;
												   }
												   else{
						  	   do{
							   	  aux=d;
									 d=d->der;			   
													}while(d->der!=NULL);
								 
								 if(d->izq!=NULL)
								 aux->der=d->izq;
								 
								 else 
								 aux->der=NULL;
								 
								 q->dato=d->dato;
								 }
						  }
			 
			 free(d);
			 }
			 else 
			 printf("Dato no localizado\n");
			 
			 }
			 return(r);
			 } 
	 

void *crear(void *p){
	 /* Se utiliza una variable de tipo bandera para:
	 	   Si band=1, el valor a insertarse esta repetido.
		   Si band=2, se llego a una hoja donde se insertara el nuevo elemento.
		   Si band=3, el arbol esta vacio.
		   
		   */
		   
  int x, band=0;
  nodo *q, *aux;

  printf("Da un valor entero:  ");
  scanf("%d", &x);
  aux=(nodo *)p; 

  if(aux==NULL)
			 band=3;
			 
			 else
			 do
			 if(aux->dato==x)
			 band=1;//valor repetido
			 
			 else if(aux->dato>x){
			 	  if(aux->izq!=NULL)
			 	  aux=aux->izq;
			 	  
			 	  else 
			 	  band=2;
				   
				   }
				   else{
				   		if(aux->der!=NULL)
 						  aux=aux->der;
 						  
 						  else 
 						  band=2;
 						  
						   
						   }
						   
						   while(band<1);
						   
						   if(band>1){
						   			  q=(nodo *)malloc(sizeof(nodo));
						   			  q->der=q->izq=NULL;
						   			  q->dato=x;
						   			  
						   			  if(band==3)
						   			  p=q;
						   			  
						   			  else if(aux->dato<x)
						   			  aux->der=q;
						   			  
						   			  else 
						   			  aux->izq=q;
						   			  	 
										 }
										 
										 else 
										 printf("VALOR REPETIDO \n");
										 
										 return(p); 
			 
	 
	 }
	 
void preorden(void *r){
	 nodo *w;
	 
	 if(r!=NULL){
	 			 w=(nodo *)r;
	 			 printf("%d..", w->dato);
	 			 preorden(w->izq);
	 			 preorden(w->der);
				  
				  }
	 
	 }
	 
void postorden(void *r){
	 nodo *w;
	 
	 if(r!=NULL){
	 			 w=(nodo *)r;
	 			 postorden(w->izq);
	 			 postorden(w->der);
	 			 printf("%d..",w->dato );
				  
				  }
	 
	 }
	 
void inorden(void *r){
	 nodo *w;
	 
	 if(r!=NULL){
	 			 w=(nodo *)r;
	 			 inorden(w->izq);
	 			 printf("%d..", w->dato);
	 			 inorden(w->der);
				  
				  }
	 
	 }
