#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;
    float x_vertex, y_vertex;


    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);


    if (a == 0) {
        printf("O coeficiente 'a' invalido.\n");
        return 1;
    }

    delta = (b * b) - 4 * a * c;


    if (delta > 0) {

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raizes da equacao sao: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equacao tem uma raiz unica: x1 = %.2lf\n", x1);
    } else {
        printf("A equacao nao possui raizes reais.\n");
    }

    x_vertex = -b / (2 * a);
    y_vertex = -delta / (4 * a);

    printf("O vertice da parabola esta em (%.2lf, %.2lf)\n", x_vertex, y_vertex);


    if (a > 0) {
        printf("A parabola é concava para cima.\n");
    } else {
        printf("A parabola é concava para baixo.\n");
    }

    return 0;
}
