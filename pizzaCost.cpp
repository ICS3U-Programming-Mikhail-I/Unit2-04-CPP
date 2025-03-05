// Copyright 2025 Mikhail Ibrahim
// Date: Mar 2, 2025
// Description: A C++ program that calculates the total cost of a pizza,
// including HST, based on user input for the diameter.

#include <iomanip>  // To format the output to 2 decimal places
#include <iostream>

// Function to calculate pizza cost
double calculatePizzaCost(double diameter) {
    // Fixed costs
    const double labourCost = 2.00;
    const double rentalCost = 2.25;
    const double ingredientCostPerInch = 1.50;

    // Calculate subtotal and tax
    double subtotal = labourCost + rentalCost +
                      (ingredientCostPerInch * diameter);
    double tax = subtotal * 0.13;  // HST tax at 13%

    // Total cost including tax
    double totalCost = subtotal + tax;

    return totalCost;
}

int main() {
    // Prompt user for pizza diameter input
    double diameter;
    std::cout << "Enter the diameter of the pizza in inches: ";
    std::cin >> diameter;

    // Calculate total cost of pizza
    double totalCost = calculatePizzaCost(diameter);

    // Display result with two decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nThe total cost of the pizza with a diameter of "
              << diameter << " inches is: $" << totalCost << std::endl;

    return 0;
}
