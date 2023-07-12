#include <iostream>
using namespace std;
double multiply(double a, double b) {
    return a * b;
}
double add(double a, double b) {
    return a + b;
}
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!";
        return 0.0;
    }
}
double subtract(double a, double b) {
    return a - b;
}

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
   cin >> num1 >> num2;
    double result = multiply(num1, num2);
    cout << "Multiplication: " << result;
    result = add(num1, num2);
    cout << "Addition: " << result ;
    result = divide(num1, num2);
    cout << "Division: " << result ;
    result = subtract(num1, num2);
    cout << "Subtraction: " << result <;

    return 0;
}
#include <iostream>

double multiply(double a, double b) {
    return a * b;
}


double add(double a, double b) {
    return a + b;
}


double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << std::endl;
        return 0.0;
    }
}

double subtract(double a, double b) {
    return a - b;
}

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

 
    double result = multiply(num1, num2);
    cout << "Multiplication: " << result ;

  
    result = add(num1, num2);
    cout << "Addition: " << result ;

   
    result = divide(num1, num2);
    cout << "Division: " << result ;

    result = subtract(num1, num2);
    cout << "Subtraction: " << result;

    return 0;
}
