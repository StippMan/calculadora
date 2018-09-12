#include <stdio.h>

double soma(double x, double y){
	return x + y;
}

double sub(double x, double y){
	return x - y;
}

double mul(double x, double y){
	return x * y;
}

double div(double x, double y){
	return x / y;
}

void main(){
	double x, y;
	printf("X: ");
	scanf(" %lf", &x);
	printf("Y: ");
	scanf(" %lf", &y);

	printf("Soma: %lf\n", soma(x,y));
	printf("Subtracao: %lf\n", sub(x,y));
	printf("Multiplicacao: %lf\n", mul(x,y));
	printf("Divisao: %lf\n", div(x,y));

}