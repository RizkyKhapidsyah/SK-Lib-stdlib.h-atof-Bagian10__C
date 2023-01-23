#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char* str = NULL;
    double value = 0;
    _locale_t fr = _create_locale(LC_NUMERIC, "fr-FR");

    // Contoh fungsi atof
    // menggunakan ruang terdepan dan pelatihan.
    str = "  3336402735171707160320 ";
    value = atof(str);
    printf("Function: atof(\"%s\") = %e\n", str, value);

    // Contoh lain dari fungsi atof
    // menggunakan kata kunci pemformatan eksponensial 'E'.
    str = "3.1412764583E210";
    value = atof(str);
    printf("Function: atof(\"%s\") = %e\n", str, value);

    // Contoh fungsi atof dan _atof_l
    // menggunakan kata kunci pemformatan eksponensial 'e'
    // dan menampilkan interpretasi titik desimal yang berbeda.
    str = "  -2,309e-25";
    value = atof(str);
    printf("Function: atof(\"%s\") = %e\n", str, value);
    value = _atof_l(str, fr);
    printf("Function: _atof_l(\"%s\", fr)) = %e\n", str, value);

    _getch();
    return 0;
}