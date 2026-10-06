#include <stdio.h>

void task1();
void task2();
void task3();

int main(){
	task1();
	task2();
	task3();
	return 0;
}
void task1() {
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("%c,%i,%.2f,%.0e\n", c,i,f,d);
	printf("input char >");
	scanf("%1c", &c);
	printf(" %c\n", c);
	printf("input int >");
	scanf("%1i", &i);
	printf(" %i\n", i);
	printf("input float >");
	scanf("%3.2f", &f);
	printf(" %.2f\n", f);
	printf("input double >");
	scanf("%1.0e", &d);
	printf(" %.0e\n", d);
	long long int_part = (long long)f;
	float frac_part = f - int_part;
	printf("int part: %lld, frac part: %f\n", int_part, frac_part);
	printf("десятичная запись числа %d, шестнадцатеричная запись числа %X\n",c,c);
	printf("1/%d = %f\n", i,1.0/i);
}
void task2(){
	int a=11;
	int b=3;
	int x;
	float y;
	double z;
	x = a/b;
	y = a/b;
	z = a/b;
	printf("x = %d, y = %f, z = %f\n", x, y, z);
	printf("%f, %f\n", (float)a/b, (double)a/b);
}
void task3(){
	int n;
	printf("Введите трехзначное число n: \n");
	scanf("%d", &n);
	int hundreds = n / 100;
	int tens = (n / 10) % 10;
	int units = n % 10;
	printf("Сумма цифр числа %d: %d\n", n, hundreds + tens + units);
	int reversed = units * 100 + tens * 10 + hundreds;
	printf("Число %d в обратном порядке: %d\n", n, reversed);
}