#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float sugarPriceUSD, ricePriceUSD, sardinesPriceUSD, coffeePriceUSD, milkPriceUSD;
	float usdToPhp = 57.46; 
	float poundToPhp = 75.06; 
		
	cout << "Enter the price of sugar: ";
	cin >> sugarPriceUSD;
	cout << "Enter the quantity of sugar: ";
	cin >> sugarQty;
	cout << "Enter the price of rice: ";
	cin >> ricePriceUSD;
	cout << "Enter the quantity of rice: ";
	cin >> riceQty;
	cout << "Enter the price of sardines: ";
	cin >> sardinesPriceUSD;
	cout << "Enter the quantity of sardines: ";
	cin >> sardinesQty;
	cout << "Enter the price of coffee: ";
	cin >> coffeePriceUSD;
	cout << "Enter the quantity of coffee: ";
	cin >> coffeeQty;
	cout << "Enter the price of milk: ";
	cin >> milkPriceUSD;
	cout << "Enter the quantity of milk: ";
	cin >> milkQty;

	float sugarCostPHP = sugarPriceUSD * sugarQty;
	float riceCostPHP = ricePriceUSD * riceQty;
	float sardinesCostPHP = sardinesPriceUSD * sardinesQty;
	float coffeeCostPHP = coffeePriceUSD * coffeeQty;
	float milkCostPHP = milkPriceUSD * milkQty;
	float totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;

	cout << "\n--- Purchase Details ---" << endl;
	cout << "Item: Sugar, Quantity: " << sugarQty << ", Total Cost: PHP " << sugarCostPHP << endl;
	cout << "Item: Rice, Quantity: " << riceQty << ", Total Cost: PHP " << riceCostPHP << endl;
	cout << "Item: Sardines, Quantity: " << sardinesQty << ", Total Cost: PHP " << sardinesCostPHP << endl;
	cout << "Item: Coffee, Quantity: " << coffeeQty << ", Total Cost: PHP " << coffeeCostPHP << endl;
	cout << "Item: Milk, Quantity: " << milkQty << ", Total Cost: PHP " << milkCostPHP << endl;

	cout << "\nTotal amount to be paid in PHP: PHP " << totalCostPHP << endl;
   
	return 0;
}
