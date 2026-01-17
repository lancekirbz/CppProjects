#include <iostream>


int main(){

    char o;
    double num1;
    double num2;
    double result;

    std::cout << " **********CALCULATOR**********" << std::endl;


    //inputs
    std::cout << "  Enter the operation (+, -, x, /): ";
    std::cin >> o;

    std::cout << "  Enter the first number: ";
    std::cin >> num1;

    std::cout << "  Enter the second number: ";
    std::cin >> num2;


    //calculations
    switch(o){
        case '+':
            result = num1 + num2;
            std::cout << "  result: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "  result: " << result << std::endl;
            break;

        case 'x':
            result = num1 * num2;
            std::cout << "  result: " << result << std::endl;
            break;

        case '/':
            result = num1 / num2;
            std::cout << "  result: " << result << std::endl;
            break;
        default:
            std::cout << "  Please use the right operation." << std::endl;
            break;

    }
    std::cout << " *******************************";


    return 0;
}   
}   
