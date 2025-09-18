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

    printf("РАСЧЕТ КОЛИЧЕСТВА МОЛЕКУЛ ВОДЫ\n");
    printf("================================\n\n");

    printf("\nУСЛОВИЯ:\n");
    printf("- Масса 1 молекулы воды: %.1e г\n", MASS_PER_MOLECULE);
    printf("- Масса 1 кварта воды: %.1f г\n", GRAMS_PER_QUART);
    printf("- Кол-во квартов: %.2f кварта(ов)\n", quarts);
    printf("- Общая масса воды: %.2f г\n\n", grams);

    printf("РАСЧЕТ:\n");
    printf("- Количество молекул = масса воды / масса молекулы\n");
    printf("- %.2f г / %.1e г = %.3e молекул\n", grams, MASS_PER_MOLECULE, molecules);
    printf("================================\n");
    printf("ИТОГО: в %.2f кварт(ах) воды содержится приблизительно %.3e молекул.\n", quarts, molecules);

    return 0;
}
