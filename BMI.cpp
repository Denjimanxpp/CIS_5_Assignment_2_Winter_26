#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    
    cout << "Enter your height in inches: ";
    cin >> height;
    
    bmi = (weight * 703) / (height * height);
    
    cout << "Your BMI is: " << bmi << endl;
    
    return 0;
}