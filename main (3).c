#include <stdio.h>
#include <math.h>

int main() {
    int y, z;
    double x;

    printf("Введіть значення y: ");
    scanf("%d", &y);
    printf("Введіть значення z: ");
    scanf("%d", &z);

    if (y == -2 && (z - 2 * y) != 0)
    x = sqrt(2) * (z / (double)(z - 2 * y)) - y * z;

    if (y == 20)
    x = pow(y, 2) / 2.0 + pow(z, 2);//бібліотеки math.h, означає "a в степені b".

    if (y == 5)
    x = y * z + 3 * z;

    if (y != -2 && y != 20 && y != 5)
    x = 0;

    if (y == -2 && (z - 2 * y) == 0)
    printf("Помилка: ділення на нуль у виразі (z - 2y)\n");

    if (!(y == -2 && (z - 2 * y) == 0))
    printf("x = %.2lf\n", x);


    return 0;
}