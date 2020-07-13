#include<stdio.h>
#include<stdlib.h>
struct nodo{
	int dato;
	nodo *siguiente;
};
int menu();
void *crear(void *);
void *eliminar(void *);
void mostrar(void *);
void mostrar_Desc(void *);

main(){
	void *p=NULL;
	int eleccion;
	do{
		eleccion=menu();
		switch(eleccion){
			case 1: p=crear(p);continue;
			case 2: p=eliminar(p);break;
			case 3:mostrar(p);continue;
			case 4: mostrar_Desc(p);continue;
			default: printf("FIN DE LAS OPERACIONES");
			 
		}
	}while(eleccion<5);
	return 0;
}

int menu(){
	int eleccion,x;
	do{
		printf("\n\t\tMENU PRINCIPAL\n");
		printf("\t1.-Introducir un elemento a la pila\n");
		printf("\t2.-Eliminar un elemento de la pila\n");
		printf("\t3.-Mostrar el contenido de la pila\n");
		printf("\t4.-Mostrar desendente\n");
		printf("\t 5.- Salir\n");
		scanf("%d",&eleccion);	
	}while(eleccion<1||eleccion>5);
	putchar('\n');
	return(eleccion);	
}

void *crear(void *p){
	nodo *q,*aux,*aux1;
	putchar('\n');
	printf("Indica el valor a introducir a pila=>");
	q=(nodo*)malloc(sizeof(nodo));
	scanf("%d",&q->dato);
	q->siguiente=NULL;
	if(p==NULL)
	p=q;
	else {
		aux=(nodo*)p;
		if(q->dato<aux->dato){
		q->siguiente=aux;
		p=q;
							}
	else{
	
	
	while(q->dato>aux->dato&&aux->siguiente!=NULL){
	aux1=aux;
	aux=aux->siguiente;	
	}
	if(aux->siguiente==NULL&&aux->dato<q->dato)
	aux->siguiente=q;
	else{
		aux1->siguiente=q;
		q->siguiente=aux;
	}
	}
	}
	return(p);
	}
void *eliminar(void *s){
	nodo *aux,*aux1;
	int x;
	printf("Indica el numero a eliminar\n");
	scanf("%d",&x);
	if(s==NULL)
	printf("\nLista vacia\n");
	else{
		aux=(nodo*)s;
	while(aux->siguiente!=NULL&&aux->dato<x){
		aux1=aux;
		aux=aux->siguiente;
	}
	if(aux->dato!=x)
	printf("Elemento no encontrado");
	else{
		if(s==aux)
		s=aux->siguiente;
		else 
		aux1->siguiente=aux->siguiente;
		free(aux);
	}
		
	}
	return(s);
}

void mostrar(void *p){
	nodo *s;
	s=(nodo *)p;
	if(p==NULL)
		printf("Pila vacia");
	else 
	do{
		printf("%d..",s->dato);
		s=s->siguiente;
	
	}while(s!=NULL);	
}


void mostrar_Desc(void *p){
	 nodo *s, *aux;
	 aux=(nodo *)p;
	 
	 s= (nodo *)p;
	 
	 if(p=NULL)
	 printf("LISTA VACIA\n");
	 
	 else{
	 	  while(s->siguiente != NULL)
	 	  s= s->siguiente;
	 	  
	 	  do{
		  	 		printf("%d..", s->dato);
		  	 		s= s->siguiente;
		  	 		
					   }while(s!=NULL);
		   
		   }
	 
	 
	 }
