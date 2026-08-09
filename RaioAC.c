#include <stdio.h>
int main() {
	
	float raio, area;
	
	printf("digite o raio:");
	scanf("%f", &raio);
	
	area= 3.14 * raio * raio;
	
	printf("a area do circulo e: %2f", area);
	
	return 0;

}
