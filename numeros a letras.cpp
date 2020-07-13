#include <stdio.h>
void unidades(char [], int *, int *);
void decenas(char [], int *, int*);
void centenas(char [], int *, int *);

int main(){
	
    char a[10];
    int i,j=0;
    for (i=0;(a[i]=getchar())!='\n';i++);
    do{
        if (i==9 || i==6 || i==3)
            centenas(a,&i,&j);
        if (i==8 || i==5 || i==2)
            decenas(a,&i,&j);
        if (i==7 || i==4 || i==1)
            unidades(a,&i,&j);
        if (i==6)
            if (a[j-1]=='1' && j-1==0)
                printf(" millon ");
            else
                printf(" millones ");
        if (i==3  && (j-1>=0 || j-2>=0 || j-3>=0) && (a[j-1]!='0'|| a[j-2]!='0' || a[j-3]!='0'))
            printf(" mil ");
    }while(i>0);
    getchar();
	return 0;
}

void unidades(char a[], int *k, int *t){
    int i=*k, j=*t;
    switch(a[j]){
        case '1':if (i==1)
                    printf("uno");
                 else
                    printf("un");
                break;
        case '2':printf(" dos");break;
        case '3':printf(" tres");break;
        case '4':printf(" cuatro");break;
        case '5':printf(" cinco");break;
        case '6':printf(" seis");break;
        case '7':printf(" siete");break;
        case '8':printf(" ocho");break;
        case '9':printf(" nueve");break;
    }
    i--;j++;
    *k=i; *t=j;
}

void decenas (char a[], int *k, int *t){
	int i=*k, j=*t;
	if (a[j]=='1')
		if (a[j+1]<'6'){
			switch(a[j+1]){
				case '0':printf("diez");break;
				case '1':printf("once");break;
				case '2':printf("doce");break;
				case '3':printf("trece");break;
				case '4':printf("catorce");break;
				case '5':printf("quince");break;
			}
			i-=2;
			j+=2;
		}
        else{
            printf("dieci");
            i--;j++;
        }	
	else{
        switch(a[j]){
            case '2':if (a[j+1]=='0')
                        printf("veinte");
                    else
                        printf("veinti");
                    break;
            case '3': printf("treinta");break;
            case '4': printf("cuarenta");break;
            case '5': printf("cincuenta");break;
            case '6': printf("sesenta");break;
            case '7': printf("setenta");break;
            case '8': printf("ochenta");break;
            case '9': printf("noventa");break;
        }
        if (a[j]=='0'){
            j++;i--;
        }
        else if (a[j+1]!='0'){
            if (a[j]!='2')
                printf(" y ");
            j++;i--;
        }
        else{
            j+=2;
            i-=2;
        }
    }
    *k=i;*t=j;
}
void centenas (char a[], int *k, int *t){
    int i=*k,j=*t;
    if (a[j]=='1')
        if (a[j+1]=='0' && a[j+2]=='0'){
            printf(" cien ");
            j+=3;i-=3;
        }
        else{
            printf(" ciento ");
            j++;i--;
        }
    else{
        switch(a[j]){
            case '2': printf(" doscientos ");break;
            case '3': printf(" trescientos ");break;
            case '4': printf(" cuatrocientos ");break;
            case '5': printf(" quinientos ");break;
            case '6': printf(" seiscientos ");break;
            case '7': printf(" setescientos ");break;
            case '8': printf(" ochocientos ");break;
            case '9': printf(" novecientos ");break;
        }
        j++;i--;
    }
    *k=i;*t=j;
}
    
