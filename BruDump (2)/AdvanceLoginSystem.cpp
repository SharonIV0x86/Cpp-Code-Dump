#include <iostream>
#include <string>
// #include <conio.h>
// #include <windows.h>s

using namespace std;

class Login
{
public:
    std::string new_password, new_pin;
    char password_attempts, pin_attempts = 1;
    char password_tries = 4;

    // std::string pin_array[3] = {"1234", " 5678", "6969"};
    std::string right_pin = "6969";

    // std::string password_array[3] = {"lmao", "kek", "SharonIV"};
    std::string right_password = "SharonIV";

    void change_password_and_pin()
    {
    }
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
            clear_screen_cross_platform();
            std::cout << "\n\n\tLOGIN SUCCESS! WELCOME! " << NickName;
        }
        else if (pin != right_pin || password != right_password)
        {
            clear_screen_cross_platform();
            std::cout << "\n\n\tPASSWORD or PIN wrong, please re-enter the credentials! ";
            takeCREDS();
        }
        else
        {
            clear_screen_cross_platform();
            std::cout << "\n\n\tUnexpected Error Occured, Please Enter The Credentials Agaṇin. ";
            std::cout << "\n\n\tHere is the error code: 0xffx98. ";

            takeCREDS();
        }
        return 0;
    }

    void takeCREDS()
    {
        std::string pin_main_input;
        std::string password_main_input, NickName;
        int choice;
        clear_screen_cross_platform();
        std::cout << "\n\n\tPress 1 to login ";
        std::cout << "\n\n\tPress 2 to change account credentials ";
        std::cout << "\n\n\tPress 3 to exit and get to know something cool ;) ";
        std::cin >> choice;
        std::cin.ignore();
        switch (choice)
        {
            {
            case 1:

                std::cout << "\n\n\tEnter Your NickName ";
                std::getline(std::cin, NickName);

                std::cout << "\n\n\tEnter the password: ";
                std::getline(cin, password_main_input);

                std::cout << "\n\n\tChecking password please wait....";

                delay_only_delay();

                std::cout << "\n\n\tEnter the PIN: ";
                std::getline(std::cin, pin_main_input);

                std::cout << "\n\n\tChecking PIN please wait...";
                delay_only_delay();

                checkCREDS(pin_main_input, password_main_input, NickName);
                break;
            }
            {
            case 2:
                clear_screen_cross_platform();
                std::cout << "\n\n\tEnter the old PIN!  ";
                std::getline(std::cin, pin_main_input);
                std::cin.ignore();

                if (pin_main_input == right_pin)
                {
                    std::cout << "\n\n\tNow enter the old PASSWORD! ";
                    std::getline(std::cin, password_main_input);
                    std::cin.ignore();
                    if (password_main_input == right_password)
                    {
                        std::cout << "\n\n\tPlease wait....";
                        delay_only_delay();
                        clear_screen_cross_platform();
                        std::cout << "\n\n\tEnter the NEW password";
                        std::getline(std::cin, new_password);
                        // std::cin.ignore();
                        std::cout << "\n\n\tEnter the NEW pin ";
                        std::getline(std::cin, new_pin);
                        // std::cin.ignore();
                        Login session1;
                        session1.right_password == new_password;
                        session1.right_pin == new_pin;
                        std::cout << "\n\n\tPlease Wait. ";
                        std::cout << "\n\n\tCredentails have been changed you must login back. ";
                        delay_only_delay();
                        takeCREDS();
                    }
                }
                else if (pin_main_input != right_pin)
                {
                    std::cout << "\n\n\tWrong Password, please try again after sometime.";
                    delay_only_delay();
                    takeCREDS();
                    break;
                }
            }
            {
            case 3:
                std::cout << "\n\n\tThanks for using the program :)";
                std::cout << "\n\n\tThis program is made by SharonIV ";
                delay_only_delay();
                std::cout << "\n\n\tGithub~~> https://github.com/SharonIV0x86";
                delay_only_delay();
                std::cout << "\n\n\tThe Program still have a lot of bugs and its pretty bad at error handling, if you are reading this, you are the one of the best person. " << std::endl;
                delay_only_delay();

                std::cout << "\n\n\tPress Any Key to continue. ";
                hold_screen();
                break;
            }
        }
    }
    // void change_CREDS()
    // {
    //     clear_screen_cross_platform();
    //     std::cout << "\n\n\tEnter the NEW password";
    //     std::getline(std::cin, new_password);
    //     std::cin.ignore();
    //     new_password += right_password;
    //     std::cout << "\n\n\tEnter the NEW pin ";
    //     std::getline(std::cin, new_pin);
    //     std::cin.ignore();
    //     new_pin += right_pin;
    //     std::cout << "\n\n\tPlease Wait. ";
    //     delay_only_delay();
    //     std::cout << "\n\n\tCredebtails have been changed you must login back. ";
    //     takeCREDS();
    // }
    void pin_correct_password_wrong(string pin_2, string password_2, string NickName_2)
    {
        std::cout << "\n\n\tInvalid Password. Please re-enter the creds: ";

        std::getline(std::cin, password_2);

        while (password_2 != right_password)
        {
            password_tries--;
            password_attempts++;
            std::cout << "\n\n\tInvalid PASSWORD, please re-enter PASSWORD you have only " << password_tries << " attempts left: ";
            std::cin.ignore();
            std::getline(std::cin, password_2);
            if (password_attempts > 3)
            {
                std::cout << "\n\n\tToo many wrong  attempts! ";
                delay_cross_platform_and_errors();
                takeCREDS();
                break;
            }
        }
        if (password_2 == right_password)
        {
            std::cout << "\n\n\tNow! Enter the PIN! ";
            std::getline(std::cin, pin_2);
            std::cin.ignore();

            if (pin_2 == right_pin)
            {
                std::cout << "\n\n\tTest PASSWORD";
                clear_screen_cross_platform();
                std::cout << "\n\n\tLOGIN SUCCESS! WELCOME! " << NickName_2;
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
            std::cin >> pin_1;
            std::cin.ignore();
            if (pin_attempts > 3)
            {
                std::cout << "\n\n\tToo many wrong attempts! ";
                delay_cross_platform_and_errors();
                takeCREDS();
                break;
            }
        }
        if (pin_1 == right_pin)
        {
            std::cout << "\n\n\tNow! Enter The Password! ";
            std::cin.ignore();
            std::getline(std::cin, password_1);
            std::cin.ignore();
            if (password_1 == right_password)
            {

                clear_screen_cross_platform();
                std::cout << "\n\n\tLOGIN SUCCESS! WELCOME! " << NickName_1;
                hold_screen();
            }
            else if (password_1 != right_password)
            {
                clear_screen_cross_platform();
                std::cout << "\n\n\tEnter the credentials again! ";
                takeCREDS();
            }
        }
    }
    void delay_cross_platform_and_errors()
    {
#ifdef _WIN32
        {

            long delay = 1000;
            for (int i = 10; i > 0; i--)
            {
                std::cout << "\nPlease wait for " << i << " seconds before trying again! " << std::endl;
                Sleep(delay);
                clear_screen_cross_platform();
            }
        }
#else
        {
            for (int i = 20; i > 0; i--)
            {
                std::cout << "Please wait for " << i << " seconds before trying again." << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
        }
#endif
    }
    void clear_screen_cross_platform()
    {
#ifdef _WIN32
        std::system("cls");

#else
        std::system("clear");
#endif
    }
    void hold_screen()
    {
#ifdef _WIN32
        _getch();

#else
        std::cin.get();

#endif
    }
    void delay_only_delay()
    {
#ifdef _WIN32
        {
            Sleep(3000);
        }
#else
        {
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
#endif
    }
};

int main()
{
    Login l1;
    l1.takeCREDS();
    return 0;
}