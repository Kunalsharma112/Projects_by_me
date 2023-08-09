#include <iostream>
#include<windows.h>
using namespace std;

void convertWeight() {
    double weight;
    cout << "Enter weight: ";
    cin >> weight;
	cout << "\t\t ______________________ " << endl;
    cout << "\t\t|1. Kilograms to Pounds|" << endl;
    cout << "\t\t|2. Pounds to Kilograms|" << endl;
    cout << "\t\t|3. Kilograms to Ounces|" << endl;
    cout << "\t\t|4. Ounces to Kilograms|" << endl;
    cout << "\t\t|5. Pounds to Ounces   |" << endl;
    cout << "\t\t|6. Ounces to Pounds   |" << endl;
	cout << "\t\t|______________________|" << endl;
    int choice;
    cout << "\t\t|Enter your choice: ";
    cin >> choice;

    switch (choice) {
       case 1:
            cout << "\t\tWeight in Pounds:    " << weight * 2.20462 << endl;
            break;
       case 2:
            cout << "\t\tWeight in Kilograms: " << weight * 0.453592 << endl;
            break;
       case 3:
            cout << "\t\tWeight in Ounces:    " << weight * 35.274 << endl;
            break;
       case 4:
            cout << "\t\tWeight in Kilograms: " << weight * 0.0283495 << endl;
            break;
       case 5:
            cout << "\t\tWeight in Ounces:    " << weight * 16 << endl;
            break;
       case 6:
            cout << "\t\tWeight in Pounds:    " << weight * 0.0625 << endl;
            break;
       default:
            cout << "\t\tInvalid choice!      " << endl;
            break;
    }
}


void convertVolume() {
    double volume;
    cout << "Enter volume: ";
    cin >> volume;
	cout << "\t\t __________________________ " << endl;
    cout << "\t\t|1. Liters to Gallons      |" << endl;
    cout << "\t\t|2. Gallons to Liters      |" << endl;
    cout << "\t\t|3. Liters to Fluid Ounces |" << endl;
    cout << "\t\t|4. Fluid Ounces to Liters |" << endl;
    cout << "\t\t|5. Gallons to Fluid Ounces|" << endl;
    cout << "\t\t|6. Fluid Ounces to Gallons|" << endl;
    cout << "\t\t|__________________________|" << endl;
    int choice;
    cout << "\t\t|Enter your choice: ";
    cin >> choice;

    switch (choice) {
       case 1:
            cout << "\t\tVolume in Gallons: " << volume * 0.264172 << endl;
            break;
       case 2:
            cout << "\t\tVolume in Liters: " << volume * 3.78541 << endl;
            break;
       case 3:
            cout << "\t\tVolume in Fluid Ounces: " << volume * 33.814 << endl;
            break;
       case 4:
            cout << "\t\tVolume in Liters: " << volume * 0.0295735 << endl;
            break;
       case 5:
            cout << "\t\tVolume in Fluid Ounces: " << volume * 128 << endl;
            break;
       case 6:
            cout << "\t\tVolume in Gallons: " << volume * 0.0078125 << endl;
            break;
       default:
            cout << "\t\tInvalid choice!" << endl;
            break;
    }
}


void convertSpeed() {
    double speed;
    cout << "\t\tEnter speed: ";
    cout << endl;
    cin >> speed;
    cout << endl;
	cout << "\t\t_________________________________________ " << endl;
    cout << "\t\t|1. Kilometers per Hour to Miles per Hour|" << endl;
    cout << "\t\t|2. Miles per Hour to Kilometers per Hour|" << endl;
    cout << "\t\t|________________________________________|" << endl;
    int choice;
    cout << endl;
	cout << "\t\tEnter your choice: ";
    cin >> choice;

    switch (choice) {
       case 1:
            cout << "\t\tSpeed in Miles per Hour: " << speed * 0.621371 << endl;
            break;
       case 2:
            cout << "\t\tSpeed in Kilometers per Hour: " << speed * 1.60934 << endl;
            break;
       default:
            cout << "\t\tInvalid choice!" << endl;
            break;
    }
}


void convertTemperature() {
    double temperature;
    cout << "\t\t|Enter temperature: ";
    cin >> temperature;
	cout << "\t\t _________________________";
    cout << "\t\t|1. Celsius to Fahrenheit|" << endl;
    cout << "\t\t|2. Fahrenheit to Celsius|" << endl;
    cout << "\t\t|3. Celsius to Kelvin    |" << endl;
    cout << "\t\t|4. Kelvin to Celsius    |" << endl;
    cout << "\t\t|5. Fahrenheit to Kelvin |" << endl;
    cout << "\t\t|6 .Kelvin to Fahrenheit |" << endl;
    cout << "\t\t|________________________|" << endl;
    
    int choice;
    cout << "\t\tEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\t\tTemperature in Fahrenheit: " << (temperature * 9.0/5.0) + 32 << endl;
            break;
        case 2:
            cout << "\t\tTemperature in Celsius: " << (temperature - 32) * 5.0/9.0 << endl;
            break;
        case 3:
			cout << "\t\tTemperature in Kelvin" << (temperature + 273.15) << endl;    
        	break;
        case 4:
        	cout << "\t\tTemperature in Celsius" << (temperature - 273.15) << endl;    
        	break;
        case 5:
        	cout << "\t\tTemperature in Kelvin" << ((temperature -32) * (5/9) + (273.15)) << endl;
        	break;
        case 6:
        	cout << "\t\tTemperature in Fahrenheit" << ((temperature -273.15) * (9/5) + (32)) << endl;
        	break;
        default:
        	
        	

            cout << "\t\tInvalid choice!" << endl;
            break;
    }
}


void convertArea() {
    double area;
    cout << "\t\t    Enter area: ";
    cin >> area;
	cout << "\t\t _______________________________" << endl;
    cout << "\t\t|1. Square Meter to Square Feet|" << endl;
    cout << "\t\t|2. Square Feet to Square Meter|" << endl;
    cout << "\t\t|3. Square Meter to Acres      |" << endl;
    cout << "\t\t|4. Acres to Square Meter	    |" << endl;
    cout << "\t\t|5. Square Feet to Acres       |" << endl;
    cout << "\t\t|6. Acres to Square Feet       |" << endl;
    cout << "\t\t|______________________________|" << endl << endl << endl;
    int choice;
    cout << "\t\t    Enter your choice          ";
    cin >> choice;

    switch (choice) {
        case 1:  
            cout << "\t\tArea in Square Feet:  " << area * 10.7639 << endl;
            break;
        case 2:
            cout << "\t\tArea in Square Meters: " << area / 10.7639 << endl;
            break;
        case 3:
            cout << "\t\tArea in Acres:        " << area * 0.000247105 << endl;
            break;
        case 4:
            cout << "\t\tArea in Square Meters:" << area * 4046.86 << endl;
            break;
        case 5:
            cout << "\t\tArea in Acres:        " << area * 0.0000229568 << endl;
            break;
        case 6:
            cout << "\t\tArea in Square Feet:  " << area * 43560 << endl;
            break;
        default:
            cout << "\t\tInvalid choice!       " << endl;
            break;
    }
}

int main() {
	system (" color CE");
    int option;

    do {  
    	cout << "\t\t\t\t\t ____________________________" << endl;
    
        cout << "\t\t\t\t\t|UNIT CONVERTER              |" << endl;
        cout << "\t\t\t\t\t|1.Convert Weight            |" << endl;
        cout << "\t\t\t\t\t|2. Convert Volume           |" << endl;
        cout << "\t\t\t\t\t|3. Convert Speed            |" << endl;
        cout << "\t\t\t\t\t|4. Convert Temperature      |" << endl;
        cout << "\t\t\t\t\t|5. Convert Area             |" << endl;
        cout << "\t\t\t\t\t|0. Exit                     |" << endl;
        cout << "\t\t\t\t\t|Enter your choice:          |" << endl;
        cout << "\t\t\t\t\t|____________________________|" << endl;
        cin >> option;
        cout << endl;

        switch (option) {
           case 1:
                convertWeight();
                break;
           case 2:
                convertVolume();
                break;
           case 3:
                convertSpeed();
                break;
           case 4:
                convertTemperature();
                break;
           case 5:
                convertArea();
                break;
           case 0:
                cout << "Exiting" << endl;
                break;
           default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (option != 0);

    return 0;
}


