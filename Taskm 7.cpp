#include <iostream>
using namespace std;

struct IdealGas {
    static constexpr double R = 8.314;

   
    static double pressureFromIdealGas(double n, double V, double T) {
        return (n * R * T) / V;
    }

 
    static double volumeFromIdealGas(double n, double P, double T) {
        return (n * R * T) / P;
    }

  
    static double temperatureFromIdealGas(double P, double V, double n) {
        return (P * V) / (n * R);
    }

    
    static double molesFromIdealGas(double P, double V, double T) {
        return (P * V) / (R * T);
    }
};

int main() {
    setlocale(0, "RU");

    double P = IdealGas::pressureFromIdealGas(2.0, 0.05, 300.0);
    double V = IdealGas::volumeFromIdealGas(1.0, 101325, 273.15);
    double T = IdealGas::temperatureFromIdealGas(101325, 0.0224, 1.0);
    double n = IdealGas::molesFromIdealGas(101325, 0.0224, 273.15);

    cout << "Давление: " << P << " Па\n";
    cout << "Объем: " << V << " м³\n";
    cout << "Температура: " << T << " K\n";
    cout << "Количество вещества: " << n << " моль\n";

    return 0;
}