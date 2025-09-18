#include <stdio.h>
#include <locale.h>

#define MASS_PER_MOLECULE 3.0e-23 
#define GRAMS_PER_QUART   950.0 

int main() {
    double quarts = 10;
    double grams;
    double molecules;

    grams = quarts * GRAMS_PER_QUART;
    molecules = grams / MASS_PER_MOLECULE;

    setlocale(LC_ALL, "RUS");

    printf("������ ���������� ������� ����\n");
    printf("================================\n\n");

    printf("\n�������:\n");
    printf("- ����� 1 �������� ����: %.1e �\n", MASS_PER_MOLECULE);
    printf("- ����� 1 ������ ����: %.1f �\n", GRAMS_PER_QUART);
    printf("- ���-�� �������: %.2f ������(��)\n", quarts);
    printf("- ����� ����� ����: %.2f �\n\n", grams);

    printf("������:\n");
    printf("- ���������� ������� = ����� ���� / ����� ��������\n");
    printf("- %.2f � / %.1e � = %.3e �������\n", grams, MASS_PER_MOLECULE, molecules);
    printf("================================\n");
    printf("�����: � %.2f �����(��) ���� ���������� �������������� %.3e �������.\n", quarts, molecules);

    return 0;
}
