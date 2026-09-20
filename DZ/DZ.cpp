#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    // Объявление и инициализация констант
    const float DIST_FIRE = 30.0;   // расстояние от реки до костра (м)
    const float DIST_MAN = 20.0;    // расстояние от реки до человека (м)
    const float DIST_ALONG = 40.0;  // расстояние от костра до человека по течению (м)

    setlocale(LC_CTYPE, "RUS");

    // Шаг 1: Вычисление суммы перпендикуляров
    float sum_perp = DIST_FIRE + DIST_MAN;

    // Шаг 2: Вычисление квадрата расстояния
    float dist_squared = DIST_ALONG * DIST_ALONG + sum_perp * sum_perp;

    // Шаг 3: Вычисление минимального расстояния (корень)
    float min_distance = sqrt(dist_squared);

    // Шаг 4: Форматированный вывод результатов
    printf("НАЙТИ КРАТЧАЙШЕЕ РАСТОЯНИЕ ОТ ЧЕЛОВЕКА ДО КОСТРА ЧЕРЕЗ РЕКУ\n");
    printf("================================\n\n");
    printf("УСЛОВИЯ:\n");
    printf("- Расстояние от реки до костра: %.2f м\n", DIST_FIRE);
    printf("- Расстояние от реки до человека: %.2f м\n", DIST_MAN);
    printf("- Расстояние от костра до человека по течению реки: %.2f м\n\n", DIST_ALONG);

    printf("РАСЧЕТ:\n");
    printf("- Сумма перпендикуляров: %.2f + %.2f = %.2f м\n",
        DIST_FIRE, DIST_MAN, sum_perp);
    printf("- Квадрат расстояния: %.2f^2 + %.2f^2 = %.2f + %.2f = %.2f\n", DIST_ALONG, sum_perp, DIST_ALONG * DIST_ALONG, sum_perp * sum_perp, dist_squared);
    printf("================================\n");
    printf("МИНИМАЛЬНОЕ РАССТОЯНИЕ: %.2f м\n", min_distance);

    return 0;
}