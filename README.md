<h1 align="center">Домашнее задание к работе 7</h1>
<div align="center">



## Условие задачи


<img width="611" height="85" alt="image" src="https://github.com/user-attachments/assets/946a3193-95fc-482d-8ba0-01ef688332fe" />





## 1. Алгоритм и блок-схема



### Алгоритм
1. **Начало**
2. Создание переменных <br>
   - `month` - количество прошедших месяцев<br>
   - `days` - количество прошедших дней
3. Предварительное вычисление текущего месяца<br>
   - `int n_month = 1 + month;` 
   - `int n_day = 1 + days;`
4. Создание цикла для полной проверки

Если в месяце 31 день:
   - 'case 1: case 3: case 5: case 7: case 8: case 10: case 12':
    if (n_day > 31) {
    n_day -= 31;
    n_month++;
Если в месяце 30 дней
   - 'case 4: case 6: case 9: case 11:'
     if (n_day > 30) {
    n_day -= 30;
    n_month++;
Если в месяце 29 дней
    - 'case 2:'
    if (n_day > 29) {
    n_day -= 29;
    n_month++;
    
5. Вывод результата 
6. **Конец**

</div>

### Блок-схема

<img width="399" height="882" alt="Lab5_dz" src="https://github.com/user-attachments/assets/ffe77eeb-c6b8-4084-bd81-b2bd06c39df7" />


</div>

## 2. Реализация программы

```c
//Подключение необходимых библиотек
#include <stdio.h>
#include <locale.h>
// Создание основной функции
int main() {
    // Добавление русской локали
    setlocale(LC_CTYPE, "RUS");
    // Создание перменных
    int month, days;
    // Ввод значений прошедших дней и месяцев
    puts("Введите количество дней и месяцев, прошедших с января 2000 года:");
    scanf("%d %d",&days, &month);
    // Примерное вычисление результатов
    int n_month = 1 + month;
    int n_day = 1 + days;
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
```
<div align="center">

## 3. Результаты работы программы

<img width="977" height="452" alt="image" src="https://github.com/user-attachments/assets/49baad01-84a3-467a-8a50-f9b547aaf5dc" />




## 4. Информация о разработчике

Выполнил Гребенников Артем, бИПТ-252
