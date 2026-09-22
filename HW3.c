#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	float I,U,R;
	printf("Введите напряжение:\n");
	scanf_s("%d", &U);
	printf("Введите сопротивление:\n");
	scanf_s("%d", &R);
	I = U / R;
	printf("Сила тока равна %.2f А", I);
}