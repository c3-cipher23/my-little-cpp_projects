#include <iostream>

int main() {

double celsius;
double fahrenheit;

// Frage an den Nutzer
std::cout << "-- Temperatur Wandler --\n";
std::cout  << "Gib eine Temperatur in Celsius ein: ";
// Zeilenumbruch
std::cout  << "\n\n";
std::cout  << "-------------------------------\n";

std::cin >> celsius;

std::cout  << "-------------------------------\n";



fahrenheit = (celsius * 1.8) + 32.0;

std::cout << celsius << " Grad Celsius sind --> " <<  fahrenheit << " Grad Fahrenheit.\n";

return 0;

}
