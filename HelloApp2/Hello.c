#include <stdio.h> 
#include <locale.h>
/*�������� �������
1.	������ ��� � ���� ��������.���������� � ������� 
������ ����� ���� �� ������� I = m / (h * h); 
��� m - ����� ���� � �����������, h - ���� � ������.
*/
int main(int argc, const char* argv[])
{
    char* locale = setlocale(LC_ALL, ""); // ������� ������� ������ (��������) ��� ������ �������� � �������
    double weight, height, index;

    printf("������� ��� ��� � ��.");
    scanf_s("%lf", &weight);
    printf("������� ��� ���� � �.");
    scanf_s("%lf", &height);
    index = weight / (height * height);
    printf("������ ����� ����� ���� = %f \n", index);
     
    if (index > 0 & index <= 16)
        printf("���������� ������� ����� ����");

    if (index >= 16 & index <= 18.5)
        printf("������������� ����� ����");

    if (index >= 18.5 & index <= 24.99)
        printf("��� � �����");

    if (index >= 25 & index <= 30)
        printf("���������� ����� ����");

    if (index >= 30 & index <= 35)
        printf("��������");

    if (index >= 35 & index <= 40)
        printf("�������� ������");

    if (index > 40)
        printf("����� ������ ��������"); 

    return 0;
}

