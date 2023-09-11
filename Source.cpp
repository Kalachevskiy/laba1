#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "");
	int x, y;
	printf("ФИО: Калачев Д.В\n");
	printf("Группа ИТ-211\n");
	printf("Введите первое число: \n");
	scanf_s("%d", &x); // %d формат (целое число), &x - адресс
	printf("Введите второе число: ");
	scanf_s("%d", &y);
	printf("Сумма: %d", x + y);
}
