#include <stdio.h>

int main(){
    int num_conversions;
    double value;
    char unit;
    scanf("%d", &num_conversions);

    while (num_conversions--){
        scanf("%lf %c", &value, &unit);

        switch (unit) {
            case 'm':
                value *= 3.2808;
                printf("%.6lf ft\n", value);
                break;

            case 'g':
                value = 32 + 1.8 * value;
                printf("%.6lf f\n", value);
                break;
            default:
                printf("Invalid unit\n");
                break;

        }
    }

    return 0;
}, 


//given answer

#include <stdio.h>

double metersToFeet (double meters);
double gramsToPounds(double grams);
double celsiusToFahrenheit(double celsius);


int main(void) {
    int nbConversions, i,
    double value;
    char unit;

    scanf("%d", &nbConversions);

    for(i = 0; i < nbConversions; i++){
        scanf("%lf %c", &value, &unit);

        if (unit =="m"){
            printf("%lf ft\n", metersToFeet(value));

        } else if (unit =="g") {
            printf("%lf lbs\n", gramsToPounds(value));
        } else if (unit == "c"){
            printf("%lf f\n", celsiusToFahrenheit(value))
        
        }
    }
    return(0);
}

double metersToFeet(double meters){
    double feet_per_meter = 3.2808;
    return meters * feet_per_meter;
}

double gramsToPounds(double grams)
{
    double pounds_per_gram = .002205;
    return grams * pounds_per_gram;
}
 
double celsiusToFahrenheit(double celsius)
{
    double fahrenheit_per_celsius = 1.8;
    double zero_celsius_in_fahrenheit = 32;
    return celsius * fahrenheit_per_celsius + zero_celsius_in_fahrenheit;
}