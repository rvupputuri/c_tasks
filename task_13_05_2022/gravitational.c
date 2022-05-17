#include <stdio.h>
float gravitational_force(float mass1, float mass2, float radius)
{
    float g = 6.67;      //Approximation value of gravity.
    return (g * mass1 * mass2) / radius * radius;
}
int main()
{
    float mass1 = 20, mass2 = 10, radius = 5;
    printf("The gravitational force between two masses are:%f", gravitational_force(mass1, mass2, radius));
    return 0;
}