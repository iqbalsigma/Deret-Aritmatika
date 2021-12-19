#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, n, i, un, sum = 0;
    printf("========PROGRAM DERET ARIMATIKA========\n");
    printf("Masukkan suku pertama dari Deret Arimatika: "); scanf("%d", &a);
    printf("Masukkan banyak suku dari Deret Aritmatika: "); scanf("%d", &n);
    printf("Masukkan beda dari Deret Arimatika: "); scanf("%d", &b);

    sum = (n * (2 * a + (n - 1)* b ))/ 2;
    un = a + (n - 1) * b;

    printf("Jumlah suku dari Deret Arimatika adalah: ");

    for (i = a; i <= un; i = i + b )
    {
        if (i != un)
        {
            printf("%d + ", i);
        }
        else
        {
            printf("%d = %d ", i, sum);
        }
    }
    printf("\n");
    return 0;
}
