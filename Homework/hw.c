//Подключение необходимых библиотек
#include <stdio.h>
#include <locale.h>
// Создание основной функции
int main() {
    // Добавление русской локали
    setlocale(LC_CTYPE, "RUS");
    // Создание перменных
    int month, days;
    int n_day, n_month;
    // Ввод значений прошедших дней и месяцев
    puts("Введите количество дней и месяцев, прошедших с января 2000 года:");
    scanf("%d %d",&days, &month);
    // Примерное вычисление результатов
    n_month = 1 + month;
    n_day = 1 + days;
    // Проверка на правильное количество дней
    switch (n_month) {
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12:
        if (n_day > 31) {
            n_day -= 31;
            n_month++;
        }
        break;

    case 4: 
    case 6: 
    case 9: 
    case 11:
        if (n_day > 30) {
            n_day -= 30;
            n_month++;
        }
        break;

    case 2:
        if (n_day > 29) {
            n_day -= 29;
            n_month++;
        }
        break;
    }

  // Вывод результатов
    printf("Текущая дата - %d . %d ", n_day, n_month);
    
   
}