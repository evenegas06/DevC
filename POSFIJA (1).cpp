#include<stdio.h>
#include<stdlib.h>

int prioridad (char c);
              
              
main(){
       char pila[30],ei[30],epos[30];
       int tope=0,j=0,i,ii;
       
       printf("Ingresa la exprecion:   ");
       
	   for(ii=0; (ei[ii]=getchar())!='\n'; ii++);
       			 for(i=0; i<ii; i++){
                 
				         if(ei[i]=='(')
                         	 pila[++tope]='(';
                         
                         else if(ei[i]==')'){
                              
							  while(pila[tope]!='(')
                              			 epos[j++]=pila[tope--];
                              
							  tope--;
							  
							   }
                              
                              else if(ei[i]>='a'&&ei[i]<='z')
                              	   epos[j++]=ei[i];
                              
							  else{
                                   while(tope>0&&prioridad(ei[i])<=prioridad(pila[tope]))
								  		 	   epos[j++]=pila[tope--];
                                   
								   pila[++tope]=ei[i];
                                   } 
								   
							 }
                                   while(tope>0)
                                   epos[j++]=pila[tope--];
                                   
                                   printf("\n\nLa exprecion posfija es:  ");
                                   for(i=0;i<j;i++)
                                   putchar(epos[i]);
                                   getchar();
                                   
				 }
                         
       

int prioridad(char c){
    int x;
    switch(c){
              case '(': x=0; break;
              case '^': x=3; break;
              case '*':
              case '/':
              case '%': x=2; break;
              case '+': 
              case '-': x=1; break; 
			  
			  }
              return x; 
	
	 }
                 
              
                             
