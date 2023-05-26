#include <iostream>
#include <string>
#include <conio.h>
#include "FunsNClasses.cpp"

using namespace std;
char password_attempts, pin_attempts = 1;
char password_tries = 4;

std::string pin_array[3] = {"1234", " 5678", "6969"};
std::string right_pin = pin_array[2];

std::string password_array[3] = {"lmao", "kek", "SharonIV"};
std::string right_password = password_array[2];

class Login
{
public:
    int checkCREDS(string pin, string password, string NickName)
    {

        if (pin != right_pin)
        {
            password_correct_pin_wrong(pin, password, NickName);
        }
        else if (password != right_password)
        {
            pin_correct_password_wrong(pin, password, NickName);
        }
        else if (pin == right_pin || password == right_password)
        {

            main_class kok;
            kok.clear_screen_cross_platform();
            std::cout << "\n\n\tLOGIN SUCCESS! WELCOME! " << NickName;
            main_class login_success;
            login_success.right_password();
        }
        else if (pin != right_pin || password != right_password)
        {
            main_class clear_screen;
            clear_screen.clear_screen_cross_platform();

            std::cout << "\n\n\tPASSWORD or PIN wrong, please re-enter the credentials! ";
            takeCREDS();
        }
        else
        {
            main_class cls2;
            cls2.clear_screen_cross_platform();
            std::cout << "\n\n\tUnexpected Error Occured, Please Enter The Credentials Again. ";
            std::cout << "\n\n\tHere is the error code: 0xffx98. ";

            takeCREDS();
        }
        return 0;
    }

    void takeCREDS()
    {
        std::string pin_main_input;
        std::string password_main_input, NickName;

        std::cout << "\n\n\tEnter Your NickName ";
        std::getline(std::cin, NickName);

        std::cout << "\n\n\tEnter the password: ";
        std::getline(cin, password_main_input);

        std::cout << "\n\n\tChecking password please wait....";

        main_class X1;
        X1.delay_only_delay();

        std::cout << "\n\n\tEnter the PIN: ";
        std::getline(std::cin, pin_main_input);

        std::cout << "\n\n\tChecking PIN please wait...";
        X1.delay_only_delay();

        checkCREDS(pin_main_input, password_main_input, NickName);
    }
    void pin_correct_password_wrong(string pin_2, string password_2, string NickName_2)
    {
        std::cout << "\n\n\tInvalid Password. Please re-enter the creds: ";

        std::getline(std::cin, password_2);

        while (password_2 != right_password)
        {
            password_tries--;
            password_attempts++;
            std::cout << "\n\n\tInvalid PASSWORD, please re-enter PASSWORD you have only " << password_tries << " attempts left: ";

            std::getline(std::cin, password_2);
            if (password_attempts > 3)
            {
                std::cout << "\n\n\tToo many wrong  attempts! ";
                MakingDaCodeCross_Platform_kek meh;
                meh.delay_cross_platform_and_errors();
                takeCREDS();
                break;
            }
        }
        if (password_2 == right_password)
        {
            std::cout << "\n\n\tNow! Enter the PIN! ";
            std::getline(std::cin, pin_2);

            if (pin_2 == right_pin)
            {
                std::cout << "\n\n\tTest PASSWORD";
                main_class kok;
                kok.clear_screen_cross_platform();
                std::cout << "\n\n\tLOGIN SUCCESS! WELCOME! " << NickName_2;
                main_class login_success;
                login_success.right_password();
            }
            else if (pin_2 != right_pin)
            {
                std::cout << "\n\n\tEnter the credentails again! ";
                takeCREDS();
            }
        }
    }
    void password_correct_pin_wrong(string pin_1, string password_1, string NickName_1)
    {

        std::cout << "\n\n\tInvalid PIN, Please re-enter the creds: ";
        std::getline(std::cin, pin_1);

        while (pin_1 != right_pin)
        {
            int pin_tries = 4;
            pin_tries--;
            pin_attempts++;

            std::cout << "\n\n\tInvalid PIN. please re-enter the PIN! you have only:  " << pin_tries << " attempts left: ";
            std::getline(std::cin, pin_1);

            if (pin_attempts > 3)
            {
                std::cout << "\n\n\tToo many wrong attempts! ";
                MakingDaCodeCross_Platform_kek meh;
                meh.delay_cross_platform_and_errors();
                takeCREDS();
                break;
            }
        }
        if (pin_1 == right_pin)
        {
            std::cout << "\n\n\tNow! Enter The Password! ";

            std::getline(std::cin, password_1);

            if (password_1 == right_password)
            {

                main_class kok;
                kok.clear_screen_cross_platform();
                std::cout << "\n\n\tLOGIN SUCCESS! WELCOME! " << NickName_1;
                main_class login_success;
                login_success.right_password();
            }
            else if (password_1 != right_password)
            {
                main_class clear_screen;
                clear_screen.clear_screen_cross_platform();
                std::cout << "\n\n\tEnter the credentials again! ";
                takeCREDS();
            }
        }
    }
};

int main()
{
    Login l1;
    l1.takeCREDS();
    return 0;
}