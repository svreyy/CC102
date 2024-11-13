#include <iostream>
using namespace std;

int main() {
    double temperature;

    // Ask the user for the current temperature
    cout << "Enter the current temperature: ";
    cin >> temperature;

    // Check the temperature and provide the appropriate suggestion
    if (temperature < 32) {
        cout << "It's cold outside. Please bring a heavy jacket." << endl;
    } else if (temperature >= 32 && temperature <= 50) {
        cout << "It's a bit chilly. You should bring a light jacket." << endl;
    } else {
        cout << "The weather is warm. No need for a jacket." << endl;
    }

    return 0;
}
