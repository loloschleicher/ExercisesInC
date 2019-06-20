#include <stdio.h>

int multi(int a, int b);

int main(){
	int a, b, c;
	printf("Ejercicio 4.");
	printf("\nIngresar valor a: ");
	scanf("%d", &a);
	printf("Ingresar valor b: ");
	scanf("%d", &b);
	printf("\nResultado: %d", multi(a,b));
	scanf("%d",&c);
}


int multi(int a, int b)
 {
     if(b==1) {
	 	return a;
	 }
     else{
	 	return a+multi(a,b-1);
	 } 
  }
