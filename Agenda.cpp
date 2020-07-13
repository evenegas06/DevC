#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct agenda{
       char * nombre;
       char * direccion;
       char telefono[11];
       struct agenda * siguiente;
};

//PROTOTIPOS
int menu();
void crear(void *[]);
void mostrar(void * []);
void mostrartodo(void *[]);
void eliminar(void * []);

main(){
       int i,x;
       void * p[26];
       for (i=0;i<26;i++)
       p[i]=NULL;
       do{
	      x=menu();
	      getchar();
	      switch(x){
		    case 1: crear(p); break;
		    case 2: mostrar(p); break;
		    case 3: mostrartodo(p); break;
		    case 4: eliminar(p); break;
           }
      }while(x<5);
}

void eliminar(void * s[]){
	agenda *p,* aux;
	char x[80];
	char * nombre;
	int i,j;
	do{
	    printf("Dar el nombre a eliminar:");
	    for (i=0;(x[i]=getchar())!='\n';i++);
        x[i]='\0';
     }while(x[0]<'A' || x[0]>'Z');
     nombre=(char *)malloc(i);
	 for (j=0;j<=i;j++)
	     nombre[j]=x[j];
	j=x[0]-'A';
	aux=p=(agenda*)s[j];
	if (aux==NULL)
	   printf("No hay elementos que inicien con %c\n",x[0]);
	else if (p->siguiente==NULL && strcmp(aux->nombre, nombre) ==0 )s[j]=NULL;
	else {
		while(p->siguiente!=NULL && strcmp(p->nombre, nombre)<0){
			aux=p;
			p=p->siguiente;
		}
		if (p!=NULL)
			if (strcmp(p->nombre, nombre)==0 && p==s[j])s[j]=p->siguiente;
			else if(strcmp(p->nombre, x)==0 )
				aux->siguiente=p->siguiente;
			else
				printf("DATO NO LOCALIZADO\n");
		else
			printf("DATO NO ENCOTRADO\n");
	}
}

void crear(void * p[]){
     int i,j;
     char n[80];
     struct agenda * q, * aux, * aux1;
     q=(agenda *)malloc(sizeof(agenda));
     q->siguiente=NULL;
     do{
	    printf("Dar el nombre con mayusculas:");
	    for (i=0;(n[i]=getchar())!='\n';i++);
	    n[i]='\0';
     }while(n[0]<'A' || n[0]>'Z');
     q->nombre=(char *)malloc(i);
     for (j=0;j<=i;j++)
	     q->nombre[j]=n[j];

     do{
	    printf("Dar la direccion:");
	    for (i=0;(n[i]=getchar())!='\n';i++);
        n[i]='\0';
     }while(n[0]<'A' || n[0]>'Z');
     q->direccion=(char *)malloc(i);
     for (j=0;j<=i;j++)
	     q->direccion[j]=n[j];

     printf("Da el telefono con 10 digitos");
     gets(q->telefono);
     printf("%s\t%s\t%s\n",q->nombre,q->direccion,q->telefono);
     system("pause");
     system("cls");
	 i=q->nombre[0]-'A';
     aux=(agenda *)p[i];
     if (p[i]==NULL)
	    p[i]=q;
     else{
	      if(strcmp(q->nombre, aux->nombre)<0){
		     q->siguiente=aux;
		     p[i]=q;
	      }
	      else{
		       while (aux!=NULL && strcmp(q->nombre, aux->nombre) >0 ){
		             aux1=aux;
				     aux=aux->siguiente;
                }
	            aux1->siguiente=q;
	            q->siguiente=aux;
         }
	 }
}

void mostrar (void * s[]){
     char x;
     agenda * aux;
     do{
	    printf("Da la letra del alfabeto que quieres mostrar:");
	    scanf("%c",&x);
     }while(x<'A' || x>'Z');
     aux=(agenda *) s[x-'A'];
     if (aux==NULL)
	    printf("No existen nombres que inicien con la letra %c.\n",x);
     else{
          printf("NOMBRE\tDIRECCION\tTELEFONO\n");
	       do{
		         printf("%s\t%s\t%s\n",aux->nombre,aux->direccion,aux->telefono);
		         aux=aux->siguiente;
           }while (aux!=NULL);    
           system("pause");
           system("cls");
     }                       
}       

void mostrartodo (void * s[]){
     char x;
     agenda * aux;
     printf("NOMBRE\tDIRECCION\tTELEFONO\n");
     for (int i=0;i<26;i++){
         aux=(agenda *) s[i];
         if (aux!=NULL){
            do{
		         printf("%s\t%s\t%s\n",aux->nombre,aux->direccion,aux->telefono);
		         aux=aux->siguiente;
           }while (aux!=NULL);
           
         }   
     }
	 system("pause");
           system("cls");                       
}       

int menu(){
     int x;
     do{
         printf("AGENDA DE CUATES\n");
         printf("1. INTRUDUCIR AMIGO\n");
         printf("2. MOSTRAR AMIGOS QUE INICIEN CON LA MISMA LETRA DEL ALFABETO\n");
         printf("3. MOSTRAR TODOS LOS AMIGOS EN ORDEN ALFABETICO\n");
         printf("4. ELIMINAR DE LA AGENDA A UN ELEMENTO\n");
         printf("5. Salir de la aplicacion\n");
         printf("INDIQUE SU ELECCION:");
         scanf("%d",&x);
         system("cls");
     }while (x<1 || x>5);
     return x;
}     
