#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Eskenar ucgen alani
	//Kenar uzunlugu: a
	//Yukseklik: h
	//Alan: a*h/2
	
	float a,h,alan;
	
	printf("Kenar uzunlugunu girin: ");
	scanf("%f",&a);
	
	printf("Bir yukseklik girin: ");
	scanf("%f",&h);
	
	alan=a*h/2;
	
	printf("Ucgenin alani: %0.2f",alan);
	
	getch();
	
	return 0;
}
