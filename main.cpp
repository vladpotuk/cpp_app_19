#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    //Введення
    double distance_AB, distance_BC, cargo_weight;

    std::cout << "Введіть відстань між пунктами А і В (км): ";
    std::cin >> distance_AB;

    std::cout << "Введіть відстань між пунктами В і С (км): ";
    std::cin >> distance_BC;

    std::cout << "Введіть вагу вантажу (кг): ";
    std::cin >> cargo_weight;

    //паливо розрахунок
    double fuel_consumption = 0.0;

    if (cargo_weight <= 500) {
        fuel_consumption = 1.0;
    }
    else if (cargo_weight <= 1000) {
        fuel_consumption = 4.0;
    }
    else if (cargo_weight <= 1500) {
        fuel_consumption = 7.0;
    }
    else if (cargo_weight <= 2000) {
        fuel_consumption = 9.0;
    }
    else {
        std::cout << "Літак не може підняти вантаж вагою понад 2000 кг. Польот неможливий." << std::endl;
        return 0;
    }

    
    double fuel_needed_AB = distance_AB * fuel_consumption;
    double fuel_needed_BC = distance_BC * fuel_consumption;

    
    double total_fuel_needed = fuel_needed_AB + fuel_needed_BC;

    
    if (total_fuel_needed > 300.0) {
        std::cout << "Польот неможливий: недостатньо палива в баці для подолання відстаней." << std::endl;
    }
    else {
        double refueling_needed = total_fuel_needed - 300.0;
        std::cout << "Для подолання відстаней потрібно " << total_fuel_needed << " літрів палива." << std::endl;
        std::cout << "Необхідно дозаправити " << refueling_needed << " літрів палива в пункті В." << std::endl;
    }

    return 0;
}
