#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    string operation;
    double number1, number2;


    cout << "enter first number: ";
    cin >> number1;
    cout << "enter operation ( +, -, *, /,): ";
    cin >> operation;
    cout<< "enter second number: ";
    cin >> number2;


    if(operation =="+"){
        cout << "result of addition is:" << number1 + number2;
    }
    else if(operation == "-"){
    cout << "result of subtraction is: " << number1 - number2;

}
    else if(operation =="*"){
        cout << " result of the the multiplication is: " << number1 * number2;
    }
    else if(operation == "/"){
        cout << " result of division is: " << number1 / number2;
}
    else{
    cout << "not posssible";

    }
    

return 0;
}