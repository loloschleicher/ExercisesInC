//Metodo Burbuja 

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>


int main(){
	int x;
	printf("ingrese \n1 para metodo burbuja\n2 para metodo baraja\n3 para metodo shell\n4 para metodo quickshot\n");
	scanf("%d",&x);
	int array[10];
	int i,j,aux;
	switch (x){
		case 1:
			system("cls");
			printf("Metodo Burbuja:\n");
			for(i=0;i<10;i++){
		printf ("ingrese un dato:");
		scanf("%d",&array[i]);
		}
	
	for(i=0;i<10;i++){
		for(j=0;j<4;j++){
			if(array[j] > array[j+1]){
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%i ",array[i]);
	}	
	
	getch();
	return 0;
			break;
		case 2:
			system("cls");
			printf("metodo Baraja:\n");
			int i,j,k;
    for(i=0;i<10;i++){
		printf ("ingrese un dato:");
		scanf("%d",&array[i]);
		} 
    for (i=1; i<10; i++) { 
        j=i; 
            while (j>=0 && array[j]<array[j-1]) { 
                k=array[j]; 
                array[j]=array[j-1]; 
                array[j-1]=k; 
                j--; 
            } 
    } 
    system("cls");
    printf("\n\nArreglo ordenado \n\n"); 
	
     for (i=0;i<10;i++) 
        printf("Elemento %d: %d \n",i,array[i]); 
	return 0; 
			break;
		case 3:
			
			break;
		case 4:
			
			break; 

	}
	
	
	
}
