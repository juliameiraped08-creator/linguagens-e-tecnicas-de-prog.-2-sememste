#include <stdio.h>
#include <math.h>
#define pi 3.141592
int main() {
	
	float r, area, r2;
	
	printf("digite o r:");
	scanf("%f", &r);
	
	r2 = pow(r,2);
	r2 = r*r;
	area= pi*r2;
	area = pi *(r*r);
	area= M_PI * pow(r,2);
	
	printf("a area do circulo e: %f", area); 
	
	
    float h,B,b, trapezio;
     
     printf("insira o valor da altura (h)\n");
     scanf ("%f", &h);
     
     printf("insira a base menor (b)\n");
     scanf ("%f", &b);
     
     printf("insira a base maior (B)\n");
    scanf ("%f",&B);
    
    trapezio = (b+B)*h/2;
    
    printf ("a area do trapezio e 2.%f\n,", trapezio);
	
	return 0;

}
