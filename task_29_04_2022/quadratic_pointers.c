#include <math.h>
#include <stdio.h>
int quadratic(int *a, int *b, int *c)
{
    float d, root1, root2;
    d = (*b * *b) - (4 * *a * *c);

    if (d < 0)
    {
        printf("Roots are complex number\n");
    }
    else if (d == 0)
    {
        printf("Both roots are equal\n");
        root1 = -*b / (2 * *a);
        printf("Root of quadratic equation is: %f ", root1);
    }
    else
    {
        printf("Roots are real numbers\n");
        root1 = (-*b + sqrt(d)) / (2 * *a);
        root2 = (-*b - sqrt(d)) / (2 * *a);
        printf("Roots of quadratic equation are: %f, %f ", root1, root2);
    }
}
int main()
{
    // The quadratic equation is in the form of ax^2+bx+c=0
    int a = 2, b = 3, c = 1;
    quadratic(&a, &b, &c);
}