#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
/*int funcc(int chislo, int a, int n) {
	int S = a;
	for (chislo = 1; chislo <= n; chislo++) {
		S = a - (chislo n);
	}
	return S;
}*/
int main() {
	setlocale(LC_ALL, "RUS");
	//0
	int c, start = 1;
	scanf_s("%d", &c);
	for (int start = 1; start <= c / 2; start++) printf("!");
	for (int start = c / 2; start < c; start++) printf("L!");
	for (int start = c; start == c; start++) printf("+!");
	printf("\n");
}
	//1
	/*int b, m, s = 0;
	printf("¬ведите значени€ переменных m и b\n");
	scanf_s("%d%d", &b, &m);
	int i = m;
	int t = 0;
	for (i; i >= b; i--)
	{
		t++;
		s += i;
	}
	printf("выполнено %d раз\n", t);
	printf("результат %d\n", s);
	//2*/
	/*int r;
	printf("x^3-4x^2+2\n");
	printf("¬ведите значени€ шага табул€ции\n");
	scanf_s("%d", &r);
	int y, p = 0;
	puts("__");
	printf("| x | f(x)|\n");
	puts("|----------|");
	for (int x = 1; x <= 3; x += r) {
		y = pow(x, 3) - 4 pow(x, 2) + 2;
		p++;
		printf("| %d | %d |\n", p, y);
	}
	puts("||_|");
	//3
	int a, n, chislo = 1;
	printf("¬ведите значени€ a и n\n");
	scanf_s("%d", &a);
	scanf_s("%d", &n);
	int funcc;
	funcc = func(chislo, a, n);
	printf("%d\n", funcc);
	system("pause");
	return 0;
}*/