#include <iostream>
#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//Declaro las variables a usar 
	int vuelta1=0,i,u,vuelta3=0,vuelta2=0,ruido[4],resp2;
	float calor[5];
	char resp1,area[4][15];
	//Creo un ciclo repetitivo para asignar nombres a las areas y guardarlos en un arreglo
	do{
		printf("Por favor ingrese el nombre del area");
		scanf("%s",&area[vuelta1]);
		vuelta1++;
	}while(vuelta1<5);
	
	//Pido por pantalla los valores de cada area y lo guardo en su respectivo arreglo
	
	do{
		printf("Por favor ingrese el valor del ruido en decibeles para el area de %s",area[vuelta2]);
		scanf("%d",&ruido[vuelta2]);
	
		printf("Por favor ingrese el valor del calor en grados centigradospara el area de %s",area[vuelta2]);
		scanf("%f",&calor[vuelta2]);
		
		vuelta2++;
	}while(vuelta2<5);
	//Muestro por pantalla los arreglos compeltos
	for(i=0;i<5;i++){
		printf("\n El area %s tiene un rudio de %d decibelios y una temperatura de %2.2f grados centigrados ",area[i],ruido[i],calor[i]);
		
	};
	//Tercera partes
	
	//PRegunto si se desea ver una area en especifico
	printf("\nDesea ver el un area en espeficifico?\n");
	printf("Si la respuesta es si, presione 1\n");
	printf("si la respuesta es no, presione 0\n");
	scanf("%d",&resp1);
	//Hago la condicion 
	if(resp1==1){
		printf("Por favor eliga que area desea saber sus valores tomando en cuanta que:\n");
		for (u=0;u<5;u++){
			printf("\nEl numero %d corresponde al area %s",u,area[u]);
		}
		printf("Por favor ingrese el numero del area que desea saber");
		scanf("%d",&resp2);
		printf("\n El area %s tiene un ruido de %d decibelios y una temperatura de %2.2f grados centigrados ",area[resp2],ruido[resp2],calor[resp2]);
	}
	                
}