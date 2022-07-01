#include <iostream>
#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	/*char d,para[4][4];
	printf("Ingrese valor");
	scanf("%s",&para[0]);
	        
	for(int i=0;i<5;i++){
		printf("%s",para[i]);
	}*/

	int vuelta1=0,i,u,vuelta3=0,vuelta2=0;
	int ruido[4];
	float calor[5];
	char resp1,resp2,area[4][15],peligro[5][6],a[]={"A"},b[]={"B"},t[2]={"T"};
	do{
		printf("Por favor ingrese el nombre del area");
		scanf("%s",&area[vuelta1]);
		vuelta1++;
	}while(vuelta1<5);
	
	do{
		printf("Por favor ingrese el valor del ruido en decibeles para el area de %s",area[vuelta2]);
		gets(ruido[vuelta2]);
	
		
		printf("Por favor ingrese el valor del calor en grados centigradospara el area de %s",area[vuelta2]);
		scanf("%f",&calor[vuelta2]);
		
		vuelta2++;
	}while(vuelta2<5);
	
	
		if(ruido[vuelta3]>120){
			peligro[vuelta3];
		};
		if(ruido[vuelta3]<120 && ruido[vuelta3]>75){
			peligro[vuelta3]=t[0];
		};
		if(ruido[vuelta3]<75){
			peligro[vuelta3]=b[0];
		}
		
	
	
	for(i=0;i<5;i++){
		printf("\n %s %d %f ",area[i],ruido[i],calor[i]);
		//printf("\n %s %d",area[i],calor[i]);
	};
	for(u=0;u<5;u++){
		printf("\n %s ",peligro[u]);
		
	};
	
	/*while(vuelta<10){
		printf("/nEingrese un numero ");
		scanf("%d",&resp2);
		moises[vuelta]=resp2;
	 	vuelta++;
	}
	for(i=0;i<10;i++){
		printf("%d",moises[i]);
	}*/
	
	                
}
