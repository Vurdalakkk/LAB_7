// Подключение необходимых библиотек
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Создание основной функции

int main() {
	// Добавление русской локали
	setlocale(LC_CTYPE, "RUS");
	// Создание  переменной для ввода числа, от которого нужно начинать отсчет
	int start;
	// Создание  переменной для ввода количества месяцев, прошедших с точки отсчета
	int month;
	// Создание  переменной для ввода количества дней, прошедших с точки отсчета (отдельно от месяцев)
	int days;
	// Создание переменных для новой даты
	int n_day;
	int n_month;
	// Добавление ввода всех значений из консоли
	// Точка отсчета
	puts("Введите число января 2000 года, от которого нужно начинать отсчет");
	scanf("%d", &start);
	getchar();
	// Месяц
	puts("Введите количество месяцев, прошедших с точки отсчета");
	scanf("d", &month);
	getchar();
	// Дни
	puts("Введите количество дней, прошедших с точки отсчета");
	scanf("d", &days);
	getchar();
	// Проверка и вывод

	switch (days) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '10':
	case '11':
	case '12':
	case '13':
	case '14':
	case '15':
	case '16':
	case '17':
	case '18':
	case '19':
	case '20':
	case '21':
	case '22':
	case '23':
	case '24':
	case '25':
	case '26':
	case '27':
	case '28':
	case '29':
	case '30':
	case '31':
		// Если в месяце 29 дней 
		if (month + 1 == 2) {
			if (days + start <= 29)
				n_day = days + start;
			else
				n_day = (days + start) - 29;
			n_month = 1;
		}
		// Если в месяце 30 дней
		if ((month + 1 == 4) || (month + 1 == 6) || (month + 1 == 9) || (month + 1 == 11)) {
			if (days + start <= 30)
				n_day = days + start;
			else
				n_day = (days + start) - 30;
			n_month = 1;
		}
		// Если в месяце 31 день
		if ((month + 1 == 3) || (month + 1 == 5) || (month + 1 == 7) || (month + 1 == 8) || (month + 1 == 10) || (month + 1 == 12)) {
			if (days + start <= 31)
				n_day = days + start;
			else
				n_day = (days + start) - 31;
			n_month = 1;
		}
		// Если месяц - январь, т.е прошло 0 месяцев
		if (month = 0) {
			if (days + start <= 31)
				n_day = days + start;
			else
				n_day = (days + start) - 31;
			n_month = 1;
		}
	}
}