#include <stdio.h>

int potencia(int a, int b);

int main(){
	int a, b, c;
	printf("Ejercicio 3.");
	printf("\nIngresar valor de la base: ");
	scanf("%d", &a);
	printf("Ingresar valor del exponente: ");
	scanf("%d", &b);
	printf("\nResultado: %d", potencia(a,b));
	scanf("%d",&c);
}


int potencia(int a, int b)
 {
     if(b==1) {
	 	return a;
	 }
     else{
	 	return a*potencia(a,b-1);
	 } 
  }
