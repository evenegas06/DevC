#include <stdio.h>
#include <stdlib.h>


typedef struct {
char nombre[20];
char paterno[20];
char materno[20];
char domicilio[20];
char correo[30];
char telefono[15];
struct nodo *siguiente;
}nodo;

/*funciones*/

inicializacion();
insertar();
visualizar();
eliminar();
buscar();
actualiza();


nodo *inicio, *ultimo; //puntero inicio y ultimo

int tamano=0; //para saber tamaño total de lista


main(){

  char opcion;

  do
  {
   printf("\n1. Inicializar");
   printf("\n2. Insertar");
   printf("\n3. Visualizar");
   printf("\n4. Eliminar");
   printf("\n5. buscar");
   printf("\n6. actualiza");
   printf("\n7. salir");
   printf("\n\nElija opcion: ");
   scanf (" %c",&opcion);

   switch(opcion){
    case '1':inicializacion();break;
    case '2':insertar();break;
    case '3':visualizar();break;
    case '4':eliminar();break;
    case '5':buscar();break;
    case '6':actualiza();break;
    case '7':printf("Fin de programa");break;
  default:
       system("cls");
   printf("Opcion no valida");
  break;

   }
  } while (opcion!='5');
} //cierra main




inicializacion()
{
  system("cls");
  inicio=NULL; //a nulo el puntero inicial
  ultimo=NULL; //a nulo el puntero fin
  printf("\nLista inicializada\n");
}


insertar() //insertar nodo a final de lista
{
 //system(cls);
 nodo *nuevo; //definimos nuevo nodo

  //reservamos memoria

 nuevo=(nodo*)malloc(sizeof(nodo));

 if (nuevo==NULL) //si es nulo es que no hay memoria
   printf("No hay memoria disponible\n");
 else
 {
  printf("\nNuevo elemento:\n");
  printf("Nombre: ");
  fflush(stdin); //limpia el buffer usado por la entrada estandar (teclado)
  gets(nuevo->nombre);

  printf("\nApellido Paterno: ");
  fflush(stdin);
  gets(nuevo->paterno);

  printf("\nApellido Materno: ");
  fflush(stdin);
  gets(nuevo->materno);

  printf("\nDomicilio: ");
  fflush(stdin);
  gets(nuevo->domicilio);

  printf("\nCorreo electronico: ");
  fflush(stdin);
  gets(nuevo->correo);

  printf("Telefono: ");
  fflush(stdin);
  gets(nuevo->telefono);

  nuevo->siguiente=NULL; //el puntero nuevo debe apuntar a nulo

  if(inicio==NULL) { //si inicio es nulo es que es el primero
   printf("\nPrimer nodo\n");
   inicio=nuevo;
   ultimo=nuevo; //nuestro nodo es a la vez el primero y el ultimo
  }
  else //si no es el primero y ya habia uno antes...
  {
   //El puntero que apuntaba al ultimo ahora debe apuntar al recien creado
   ultimo->siguiente=nuevo;
   ultimo=nuevo;
  }
  tamano++; //aumentamos en 1 el tamano de la lista
 }
}




visualizar() {
 //clrscr();
 nodo *aux; //puntero auxiliar para recorrer la lista
 int i=0; //para saber si la lista esta vacia
 aux=inicio; //nos posicionamos en el primer nodo
 printf("\nNodos:\n");

 while (aux!=NULL) //se detendra cuando el puntero apunte a nulo
 {
  printf("nodo: %d \n",i+1); //para ver el orden
  printf("\tNombre: %s\n",aux->nombre);
  printf("\tA.Paterno: %s\n",aux->paterno);
  printf("\tA.Materno: %s\n",aux->materno);
  printf("\tDomicilio: %s\n",aux->domicilio);
  printf("\t:Correo %s\n",aux->correo);
  printf("\tTelefono: %s\n",aux->telefono);
  aux=aux->siguiente; //aux tiene ahora la informacion del siguiente puntero
  i++;
 }
 if(i==0)
  printf( "\nlista vacía\n" );
}


eliminar()
{
 //clrscr();

 nodo *aux;
 nodo *anterior;

 aux=inicio;
 int i=1; //aqui debe ser a 1
 int nodo_eliminar;

 printf("Ponga la posicion nodo que quiere eliminar: ");
 scanf(" %d",&nodo_eliminar);

 if(nodo_eliminar>tamano || nodo_eliminar < 1)
  printf("Nodo no existe");
 else
 {
 if(nodo_eliminar==1)
  {
    printf("\nHa elegido el primero de la lista\n");
    aux=inicio;
    inicio=inicio->siguiente;

    free(aux);
    tamano--;
  }
  else
   if(nodo_eliminar==tamano)
   {
    printf("Ha elegido el ultimo de la lista");
    while (i<=tamano)
    {
     if(i==tamano-1)
     {
      anterior=aux;
     }
     i++;
     aux=aux->siguiente;
    }
    if(i==0)
     printf( "\nlista vacía\n" );

    anterior->siguiente=NULL;
    ultimo=anterior;
    free(aux);
    tamano--;
   }
   else
   {
    while (i<=tamano)
    {
     if(i==nodo_eliminar-1)
     {
      anterior=aux;
     }

     if(i==nodo_eliminar)
     {
       free(aux);
     }

     if(i==nodo_eliminar+1)
     {
       anterior->siguiente=aux;
     }
     i++;
     aux=aux->siguiente;

    }
    tamano--;
   }
    }
}


buscar(){
	char busca[15];
	int i=0;
	nodo *aux;
	aux=inicio;
	system("cls");

	fflush(stdin);
	printf("\nBuscar contacto\nIngrese el nombre del contacto:");
	gets(busca);
	while (aux!= NULL){
		if(strcmp(busca,aux->nombre)==0){
			printf("nodo: %d \n",i+1); //para ver el orden
            printf("\tNombre: %s\n",aux->nombre);
            printf("\tA.Paterno: %s\n",aux->paterno);
            printf("\tA.Materno: %s\n",aux->materno);
            printf("\tDomicilio: %s\n",aux->domicilio);
            printf("\t:Correo %s\n",aux->correo);
            printf("\tTelefono: %s\n",aux->telefono);
            aux=aux->siguiente;
            i++;}
        else
            aux=aux->siguiente;

	}

}
actualiza(){
    char busca [20];
    nodo *aux;
    nodo *nuevo; int opc,modi,i=0;
	aux=inicio;
	system("cls");

	fflush(stdin);
	printf("\nActualizar contacto:");
	visualizar();
	printf("\nque nodo es la que vas a modificar: \n");
	scanf("%d",&opc);
	printf("\nElige que quieres modificar\n");
	printf("1.nombre\n2.apellido paterno\n3.apellido materno\n4.domicilio\n5.correo\n6.telefono \n-->");
    scanf("%d",&modi);
    switch(modi){
    aux=opc-1;

        case 1:     nuevo=(nodo*)malloc(sizeof(nodo));
                    printf("Ingrese el Nuevo Nombre: ");
                    gets (busca);
                    strcpy(aux->nombre,busca);
                    printf("guardado");break;

            //strcpy(nombre,cadena2);
        default: break;


    }
}
