#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "");
	int x, y;
	printf("���: ������� �.�\n");
	printf("������ ��-211\n");
	printf("������� ������ �����: \n");
	scanf_s("%d", &x); // %d ������ (����� �����), &x - ������
	printf("������� ������ �����: ");
	scanf_s("%d", &y);
	printf("�����: %d", x + y);
}
