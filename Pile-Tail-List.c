#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
void menu();
void lista();
//void cola();
//void pila();
//int insertar(int lis[10]);

//int lis[10];

int main(){
	
	menu();
	
	int o;
	scanf("%d",&o);
}




void menu(){
	int opc;
	printf("Bienvenido. con que desea operar.\n1-Lista\n2-Cola\n3-Pila\n");
	scanf("%d", &opc);
	int seg=0;
	switch(opc){
		case 1:
			
			lista();
			
			
			break;
	/*	case 2:
			cola();
			break;
		case 3:
			pila();
			break;*/
		default: 
			printf("Opcion incorrecta");
			break;
		}	
		
	}




void lista(){
	int opc;
	int lis[10];
	int i=0;
	int seg=0;
	int aux=0;
	int cambiar=0;
	for(i=0; i<10; i++){
		lis[i]=NULL;
	}
	
	
	i=0;
	int si=0;
	int n;
	int llena;
	int buscar;
	
	
	
	do{
	

	
		printf("\nQue operacion desea realizar con la LISTA: \n1-Insertar elemento\n2-Eliminar elemento\n3-Recorrer/mostrar la Lista\n4-Buscar elemento\n5-Vacio\n6-Lleno\n7-INSERTAR EN POSICION DETERMINADA\n");
		scanf("%d", &opc);
		
		switch(opc){
			case 1: 
				do{
		
						printf("Ingresar elemento:\nPos %d:", i);
						scanf("%d", &lis[i]);
						n=i;
						printf("Ingresar otro elemento: 1-si 2-no: ");
						scanf("%d", &si);
						if (si==1){
							si=1;
							i++;
							printf("dd");
						}
						if (i==10){
							
							llena=1;
							
							if (llena==1){
								printf("Lista llena. No puede ingresar mas elementos.\n");
							}
							si=0;
						}
						
						
	
				}while(si==1 || llena==0);
				
							for(i=0;i<n+1; i++){
						 	   printf("%d: [%d]", i, lis[i]);
							}
				si=0;
				printf("\nDesea continuar. (VOLVER AL MENU DE LISTA)  1-si Diferente- NO: ");
				scanf("%d",&seg);
				system("cls");
				break;
			case 2:
				if(lis[0]==NULL){
					printf("LISTA vacia. No hay nada que eliminar.");
				}
				else{
					printf("\nPosicion en la que quiere que el elemento sea eliminado:");
					scanf("%d", &i);
					lis[i]= NULL;
					i=0;
				
				}
				printf("\nDesea continuar. (VOLVER AL MENU DE LISTA)  1-si Diferente- NO: ");
				scanf("%d",&seg);
				system("cls");
				break;
			case 3:
				if(lis[0]==NULL){
					printf("LISTA vacia. No hay nada que MOSTRAR.");
				}
				else{
				
					for(i=0;i<n+1; i++){
						printf("%d: [%d]", i, lis[i]);
					}
				
				}
				printf("\nDesea continuar. (VOLVER AL MENU DE LISTA)  1-si Diferente- NO: ");
				scanf("%d",&seg);
				system("cls");
				break;
			case 4:
				if(lis[0]==NULL){
					printf("LISTA vacia. No hay nada que BUSCAR.");
				}
				else{
					printf("\nElemento a buscar: ");
					scanf("%d", &buscar);
					for(i=0;i<n+1; i++){
						if(buscar==lis[i]){
							printf("\n\tElemento encontrado. Posicion %d", i);
						}
						
					}
					buscar=NULL;
				
				}
				printf("\nDesea continuar. (VOLVER AL MENU DE LISTA)  1-si Diferente- NO: ");
				scanf("%d",&seg);
				system("cls");
				break;
			case 5:
				
					if(lis[0]==NULL){
						printf("\nLista vacia\n");
						
					}
					else{
						printf("\nLIsta NO VACIA");
					}
				printf("\nDesea continuar. (VOLVER AL MENU DE LISTA)  1-si Diferente- NO: ");
				scanf("%d",&seg);
				system("cls");
				break;
			case 6:
				if(lis[0]==NULL){
					printf("LISTA vacia.");
				}
				else{
					if (n==9){
						printf("\nLista llena\n");
					}
					else{
						printf("\nLista NO LLENA\n");
					}
				}
				printf("\nDesea continuar. (VOLVER AL MENU DE LISTA)  1-si Diferente- NO: ");
				scanf("%d",&seg);
				system("cls");
				break;
			case 7:
				if(lis[0]==NULL){
					printf("Lista vacia. Solo se puede operar en la posicion 0. ");
					printf("\nElemento a insertar pOS 0: ");
					scanf("%d", &cambiar);
					
					lis[0]=cambiar;
					i++;
				}
				else{
				
					printf("\nPosicion en la que quiere insertar elemento: ");
					scanf("%d", &aux);
					if(aux>i+1){
						printf("NO SE PUEDE INSERTAR.");
					}
					else{
						printf("\nElemento a insertar: ");
						scanf("%d", &cambiar);
						lis[aux]=cambiar;
						for(i=0;i<n+1; i++){
						 	   printf("%d: [%d]", i, lis[i]);
							}
						
					}
					
				
				}
				printf("\nDesea continuar. (VOLVER AL MENU DE LISTA)  1-si Diferente- NO: ");
				scanf("%d",&seg);
				break;
		}
	
	
	}while(seg==1);
	
}
