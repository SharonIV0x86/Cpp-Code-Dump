#include <iostream>
#include <string>

int main()
{
    std::string s_tring;
    std::cout << "\nEnter the string you want to reverse: ";
    std::getline(std::cin, s_tring);
    int len = s_tring.length();
    std::cout << "\nThe string you entered is: " << s_tring;
    std::cout << "\nThe lenght of your string is: " << len << " words\n";
    for (int i = -1; i < len; len--)
    {
        std::cout << s_tring[len] << std::endl;
    }
    return 0;
}

