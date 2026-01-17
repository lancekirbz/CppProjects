#include <iostream>

int main (){

    double temp;
    char unit;
    double result;
    std::cout << "======Temperature converter=====" << std::endl;
    std::cout << " F = Fahrenheit\n";
    std::cout << " C = Celcius\n";
    std::cout << "================================" << std::endl;
    std::cout << " What unit would you like to convert?: ";  
    std::cin >> unit;
    


    if(unit ==  'C' || unit == 'c' ){
        std::cout << "Enter the temperature of Celcius: ";
        std::cin >> temp;
        result = temp * 1.8 + 32;
        std::cout << "Temperature = " << result << " Fahrenheit" << std::endl;

    }
    else if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperaure of Fahrenheit: ";
        std::cin >> temp;
        result = (temp - 32) / 1.8;
        std::cout << "Temperature = " << result << " Celcius" << std::endl;
    }
    else{
        std::cout << " Invalid unit.";
    }

    std::cout << "================================";



    
    return 0;
}