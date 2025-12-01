// Подключение необходимых библиотек
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Создание основной функции
int main() {
	// Добавление русской локали
	setlocale(LC_CTYPE, "RUS");
	// Создание переменных x, y, c
	float x;
	float y;
	char c;
	// Ввод чисел и знака из консоли
	puts("Введите выражение вида (x (знак операции) y) \nВозможные операции:\n+\n-\n*\n/\nm - |x|\nk - x^(1/2)):");
	scanf("%f %c %f",&x , &c, &y);
	getchar();

	// Проверка и вывод результатов
	switch (c)
	{
	case '-':
		printf("%.f %c %.f = %f", x, c, y, x - y);
		break;
	case '+':
		printf("%.f %c %.f = %f", x, c, y, x + y);
		break;
	case '*':
		printf("%.f %c %.f = %f", x, c, y, x * y);
		break;
	case '/':
		printf("%.f %c %.f = %f", x, c, y, x / y);
		break;
	case 'm':
		printf("|%f| = %f", x, fabs(x));
		break;
	case 'k':
		printf("%f ^ (1/2) = %f) ",x, sqrt(x));
		break;

	}
}