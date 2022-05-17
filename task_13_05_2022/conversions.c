#include <stdio.h>
float convert_inr_usd(float inr)
{
    float usd;
    usd = inr / 77;
    return usd;
}
float convert_usd_inr(float usd)
{
    float inr;
    inr = usd * 77;
    return inr;
}
float convert_meters_feet(float meters)
{
    float feet;
    feet = meters * 3.26;
    return feet;
}
float convert_feet_meters(float feet)
{
    float meters;
    meters = feet / 3.26;
    return meters;
}
float convert_celcius_fahrenheit(float celsius)
{
    float fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}
float convert_fahrenheit_celcius(float fahrenheit)
{
    float celcius;
    celcius = ((fahrenheit - 32) * 5) / 9;
    return celcius;
}
float convert_mph_kmph(float mph)
{
    float kmph;
    kmph = (18 / 5) * mph;
    return kmph;
}
float convert_kmph_mph(float kmph)
{
    float mph;
    mph = (5 / 18) * kmph;
    return mph;
}
int main()
{
    float inr = 100, usd = 35, meters = 100, feet = 12, celcius = 20, fahrenheit = 50, mph = 100, kmph = 150;
    printf("The conversion from inr to usd:%f", convert_inr_usd(inr));
    printf("\n");
    printf("The conversion from usd to inr:%f", convert_usd_inr(usd));
    printf("\n");
    printf("The conversion from meters to feet:%f", convert_meters_feet(meters));
    printf("\n");
    printf("The conversion from feet to meters:%f", convert_feet_meters(feet));
    printf("\n");
    printf("The conversion from celcius to fahrenheit:%f", convert_celcius_fahrenheit(celcius));
    printf("\n");
    printf("The conversion from fahrenheit to celcius:%f", convert_fahrenheit_celcius(fahrenheit));
    printf("\n");
    printf("The conversion from meters to kilometers: %f", convert_mph_kmph(mph));
    printf("\n");
    printf("The conversion from kilometers to meters:%f", convert_kmph_mph(kmph));
    printf("\n");
    return 0;
}