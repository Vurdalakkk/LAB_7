// Подключение нужных библиотек
#include <stdio.h>
#include <locale.h>

// Создание основной функции
int main()

{
	// Добавление русской локали
	setlocale(LC_CTYPE, "RUS");
	// Создание переменной для ввода символа
	char c;
	// Ввод символа из консоли
	puts("Введите букву или цифру");

	scanf("%c", &c);
	getchar();

	

	//Проверка символа и вывод результата
	switch (c)
	{

	case '0':
		printf("Введена цфира. Ваша цифра - %c\n", c);
		break;

	case '1':
		printf("Введена цфира. Ваша цифра - %c\n", c);
		break;

	case '2':
		printf("Введена цфира. Ваша цифра - %c\n", c);
		break;

	case '3':
		printf("Введена цфира. Ваша цифра - %c\n", c);
		break;

	case '4':
		printf("Введена цфира. Ваша цифра - %c\n", c);
		break;

	case '5':
		printf("Введена цфира. Ваша цифра - %c\n", c);
		break;

	case '6':
		printf("Введена цфира. Ваша цифра - %c\n", c);
		break;

	case '7':
		printf("Введена цфира. Ваша цифра - %c\n", c);
		break;

	case '8':
		printf("Введена цфира. Ваша цифра - %c\n", c);
		break;

	case '9':
		printf("Введена цфира. Ваша цифра - %c\n", c);
		break;


	default:
		printf("Вы ввели букву, ваша буква  - %c\n", c);

	}

	return 0;

}
