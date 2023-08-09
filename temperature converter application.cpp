#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * (5.0 / 9.0);
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheitToKelvin(float fahrenheit) {
    float celsius = fahrenheitToCelsius(fahrenheit);
    return celsiusToKelvin(celsius);
}

float kelvinToFahrenheit(float kelvin) {
    float celsius = kelvinToCelsius(kelvin);
    return celsiusToFahrenheit(celsius);
}

int main() {
    int choice;
    float temperature;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "5. Fahrenheit to Kelvin" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "Enter your choice\n(1/2/3/4/5/6): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the temperature in Celsius: ";
            cin >> temperature;
            cout << temperature << " Celsius is equal to " << celsiusToFahrenheit(temperature) << " Fahrenheit" << endl;
            break;
        case 2:
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> temperature;
            cout << temperature << " Fahrenheit is equal to " << fahrenheitToCelsius(temperature) << " Celsius" << endl;
            break;
        case 3:
            cout << "Enter the temperature in Celsius: ";
            cin >> temperature;
            cout << temperature << " Celsius is equal to " << celsiusToKelvin(temperature) << " Kelvin" << endl;
            break;
        case 4:
            cout << "Enter the temperature in Kelvin: ";
            cin >> temperature;
            cout << temperature << " Kelvin is equal to " << kelvinToCelsius(temperature) << " Celsius" << endl;
            break;
        case 5:
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> temperature;
            cout << temperature << " Fahrenheit is equal to " << fahrenheitToKelvin(temperature) << " Kelvin" << endl;
            break;
        case 6:
            cout << "Enter the temperature in Kelvin: ";
            cin >> temperature;
            cout << temperature << " Kelvin is equal to " << kelvinToFahrenheit(temperature) << " Fahrenheit" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
