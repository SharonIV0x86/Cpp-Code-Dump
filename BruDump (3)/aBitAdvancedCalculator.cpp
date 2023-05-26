#include <iostream>
//using namespace std;

int main()
{
    double input_num1, input_num2;
    char op, perform_all_funcs;
    float all_input_num1, all_input_num2;

    {
        std::cout << "            <<<<<<<<<<<<<<<<<< SIMPLE BUT A BIT ADVANCED CALCULATOR MADE BY *SharonIV*>>>>>>>>>>>>>>>>>>          " << std::endl;
    }

    std::cout << "Press Y to perform all mathematical functions of the chosen numbers, or press N to"
              << " move to next step: ";
    std::cin >> perform_all_funcs;

    if (perform_all_funcs == 'Y')
    {
        {
            std::cout << "Enter the first number: ";
            std::cin >> all_input_num1;
        }
        {
            std::cout << "Enter the second number: ";
            std::cin >> all_input_num2;
        }
        {

            std::cout << "The Division of the selected numbers will be: " << all_input_num1 / all_input_num2 << std::endl;
            std::cout << "The Multiplication of the selected numbers will be: " << all_input_num1 * all_input_num2 << std::endl;
            std::cout << "The Addition of the selected numbers will be: " << all_input_num1 + all_input_num2 << std::endl;
            std::cout << "The Subtraction of the selected number will be: " << all_input_num1 - all_input_num2 << std::endl;
        }
    }

    if (perform_all_funcs == 'N')

    {

        std::cout << "Enter the first number: ";
        std::cin >> input_num1;
        std::cout << "Enter the operator. like what mathematical function you want to perform: ";
        std::cin >> op;
        std::cout << "Enter the second number: ";
        std::cin >> input_num2;

        int answer;
        if (op == '+')
        {
            double answer = input_num1 + input_num2;
            std::cout << "The addition of the numbers will be: " << answer;
        }
        else if (op == '-')
        {
            double answer2 = input_num1 - input_num2;
            std::cout << "The Subtraction of the numbers will be: " << input_num1 - input_num2;
        }
        else if (op == '*')
        {
            long answer3 = input_num1 * input_num2;
            std::cout << "The Multiplication of the numbers will be: " << input_num1 * input_num2;
        }
        else if (op == '/')
        {
            float answer4 = input_num1 / input_num2;
            std::cout << "The division of the numbers will be: " << input_num1 / input_num2;
        }
        else
        {
            std::cout << "Invalid use of mathematical function:";
        }
    }
    return 0;
}
