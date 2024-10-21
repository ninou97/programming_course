#include <stdio.h>

float celsiusToFahrenheit(float cels) {
    return ((cels*9/5)+32);
}

float fahrenheitToCelsius(float fahr) {
    return ((fahr-30)/2);
}

int main() {
    float temperature;
    char unit;

    printf("input temperature: ");
    scanf("%f%c", &temperature, &unit);

    /*printf("%f %c", temperature, unit);*/

    if (unit == 'c' || unit == 'C') {
        /*printf("celcius\n");*/
        /*printf("%f\n", temperature);*/
        printf("Output temperature: %2.1ff", celsiusToFahrenheit(temperature));
    } else if (unit == 'f' || unit == 'F') {
        /*printf("fahrenheit");*/
        printf("Output temperature: %2.1fc", fahrenheitToCelsius(temperature));
    } else {
        printf("Output error");
    }



}
