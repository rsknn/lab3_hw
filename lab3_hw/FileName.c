#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    double deposit;
    double rate;

    puts("Вычисление дохода по вкладу");

    printf("Введите сумму вклада (руб.): ");
    scanf("%lf", &deposit);

    printf("Введите годовую процентную ставку (%%): ");
    scanf("%lf", &rate);

    double income = deposit * (rate / 100.0);
    double total = deposit + income;

    printf("\nРезультаты расчета\n");
    printf("Сумма вклада: %.2f руб.\n", deposit);
    printf("Процентная ставка: %.2f%%\n", rate);
    printf("Доход по вкладу за год: %.2f руб.\n", income);
    printf("Итоговая сумма в конце срока: %.2f руб.\n\n", total);

    system("pause");
    return 0;
}