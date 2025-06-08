#include <stdio.h>
#include <math.h>

int main() {
    int y, z;
    double x;

    printf("Введіть значення y: ");
    scanf("%d", &y);
    printf("Введіть значення z: ");
    scanf("%d", &z);

    if (y == -2) {
        if (z - 2 * y == 0) {
            printf("Помилка: ділення на нуль у виразі (z - 2y)\n");
            return 1;
        }
        x = sqrt(2) * (z / (double)(z - 2 * y)) - y * z;
    } else if (y == 20) {
        x = pow(y, 2) / 2.0 + pow(z, 2);
    } else if (y == 5) {
        x = y * z + 3 * z;
    } else {
        printf("Непідтримуване значення y. Підтримуються тільки -2, 5 або 20.\n");
        return 1;
    }

    printf("x = %.2lf\n", x);

    return 0;
}