#include <math.h>
#include <stdio.h>

float area_of_circle(float radius)
{
    float area;
    area = 3.14 * radius * radius;
    return area;
}
float perimeter_of_circle(float radius)
{
    float perimeter;
    perimeter = 2 * 3.14 * radius;
    return perimeter;
}
float area_of_square(float radius)
{
    float area;
    area = radius * radius;
    return area;
}
float perimeter_of_square(float radius)
{
    float perimeter;
    perimeter = 4 * radius;
    return perimeter;
}
float area_of_rectangle(float length, float width)
{
    float area;
    area = length * width;
    return area;
}
float perimeter_of_rectangle(float length, float width)
{
    float perimeter;
    perimeter = 2 * (length + width);
    return perimeter;
}
float area_of_right_angle_triangle(float length, float width)
{
    float area;
    area = (length * width) / 2;
    return area;
}
float perimeter_of_right_angle_triangle(float length, float width)
{
    float perimeter;
    perimeter = length + width + sqrt(length * length + width * width);
    return perimeter;
}
int main()
{
    float radius = 3, length = 2, width = 3;
    printf("The area of circle is :%f", area_of_circle(radius));
    printf("\n");
    printf("The perimeter of circle is :%f", perimeter_of_circle(radius));
    printf("\n");
    printf("The area of square is :%f", area_of_square(radius));
    printf("\n");
    printf("The perimeter of square is :%f", perimeter_of_square(radius));
    printf("\n");
    printf("The area of rectangle is :%f", area_of_rectangle(length, width));
    printf("\n");
    printf("The perimeter of rectangle is :%f", perimeter_of_rectangle(length, width));
    printf("\n");
    printf("The area of right angle triangle is :%f", area_of_right_angle_triangle(length, width));
    printf("\n");
    printf("The perimeter of right angles triangle is :%f", perimeter_of_right_angle_triangle(length, width));
    printf("\n");
    return 0;
}
