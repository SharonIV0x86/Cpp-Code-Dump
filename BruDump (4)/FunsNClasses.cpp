#include <iostream>
#include <windows.h>
#include <chrono>
#include <conio.h>
#include <thread>
#include <string>
static int minimum_balance = 500;
static int deposit_ammount, withdraw_ammount;

class main_class
{
public:
    void right_password()
    {

        char choice;
        do
        {

            std::cout << "\n\n\tPress 1 to Deposit money. ";
            std::cout << "\n\n\tPress 2 to Withdraw money. ";
            std::cout << "\n\n\tPress 3 to Get account information. ";
            std::cout << "\n\n\tPress 4 to get to know about the developer! ";
            std::cout << "\n\n\tPress q multiple times to exit.";
            std::cout << "\n\n\tEnter your choice~~~~~~~~~~~>> ";
            std::cin >> choice;

            switch (choice)
            {

                {

                case '1':
                    clear_screen_cross_platform();
                    std::cout << "\n\n\tEnter the amount of money you want to deposit! ";
                    std::cout << "\n\n\tPress 0 to go back! ";
                    std::cin >> deposit_ammount;
                    if (deposit_ammount == 0)
                    {
                        go_back_one_screen();
                    }
                    else if (deposit_ammount > 100000)
                    {
                        clear_screen_cross_platform();
                        std::cout << "\n\n\tToo high value of money to be deposited! please try again! ";
                        right_password();
                    }
                    clear_screen_cross_platform();
                    std::cout << deposit_ammount << " added successfully! ";
                    std::cout << "\n\n\n\tMake Sure To Check Balance After Depositing Or Withdrawing Money x)";
                    std::cout << "\n\n\n\n\n\n\tYour account holds the balance of:~~~~~~~>  " << deposit_ammount + ::minimum_balance;
                    std::cout << "\n\n\tPress Any key to continue. ";
                    hold_screen();

                    break;
                }
                {
                case '2':
                    clear_screen_cross_platform();
                    std::cout << "\n\n\tEnter the amount of money you want to withdraw: ";
                    std::cout << "\n\n\tPress 0 to go back to main menu! ";
                    std::cin >> withdraw_ammount;
                    if (withdraw_ammount == 0)
                    {
                        std::cout << "\n\n\tThe Withdraw ammount cannot be 0! ";
                        std::cout << "\n\n\tPlease Enter a valid ammount! ";
                        right_password();
                    }
                    else if (withdraw_ammount > deposit_ammount)
                    {
                        std::cout << "\n\n\tTHE WITHDRAWL AMMOUNT CANNOT BE GREATER THAN THE ACCOUNT BALANCE! ";
                        delay_only_delay();
                        right_password();
                    }
                    std::cout << "\n\n\tPress Any key to continue. ";
                    hold_screen();
                    clear_screen_cross_platform();

                    std::cout << "\n\n\n\nMake Sure To Check Balance After Depositing Or Withdrawing Money x)";
                    std::cout << "\n\n\n\n\n\n\tYour account holds the balance of:~~~~~~~>  " << (deposit_ammount + minimum_balance) - withdraw_ammount;

                    right_password();

                    break;
                }
                {
                case '3':
                    std::cout << "\n\n\tThis part is still under development, will be added soon, :) ";
                    delay_only_delay();

                    // int balance_after_deposit = deposit_ammount + ::minimum_balance;
                    // int balance_after_withdrawal = (deposit_ammount + minimum_balance) - withdraw_ammount;
                    // clear_screen_cross_platform();
                    // int final_balance = balance_after_deposit - balance_after_withdrawal;
                    // std::cout<<"Your account holds the balance of~~~~~~~~~~~~> " << final_balance;
                    // FINAL_BALANCE(balance_after_deposit, balance_after_withdrawal);
                    // std::cout << "Your account holds the balance of: ~~~~~~~~> " << FINAL_BALANCE();
                    right_password();
                    break;
                }
                {
                case '4':
                    clear_screen_cross_platform();
                    std::cout << "\n\n\tThanks for using the program x) ";
                    LetTheDeveloperSaySomething();
                }
                {
                case 'q':
                    clear_screen_cross_platform();
                    std::cout << "\n\n\tThanks for using this program!! ;) ";
                    break;
                }
                {
                default:
                    clear_screen_cross_platform();
                    std::cout << "\n\n\tPlease Enter a right choice or press q to exit. ";
                    right_password();
                }
            }

        } while (choice != 'q');
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
    void LetTheDeveloperSaySomething()
    {
        std::cout << "\n\n\tThis program is made by SharonIV ";
        delay_only_delay();
        std::cout << "\n\n\tGithub~~> https://github.com/SharonIV0x86";
        delay_only_delay();
        std::cout << "\n\n\tThe Program still have a lot of bugs and its pretty bad at error handling, if you are reading this, you are the one of the best person. " << std::endl;
        delay_only_delay();
        std::cout << "\n\n\tSpecial Thanks goes to one of my friend who helped me while making this program :) ";
        std::cout << "\n\n\tGrimm ";
        std::cout << "\n\n\tGrimm's Github~~> ";
        std::cout << "\n\n\tPress Any Key to continue. ";
        hold_screen();
        clear_screen_cross_platform();
        right_password();
    }
    void go_back_one_screen()
    {
        clear_screen_cross_platform();
        right_password();
    }
};
class MakingDaCodeCross_Platform_kek
{
public:
    void delay_cross_platform_and_errors()
    {
#ifdef _WIN32
        {
            main_class cls;
            long delay = 1000;
            for (int i = 10; i > 0; i--)
            {
                std::cout << "\nPlease wait for " << i << " seconds before trying again! " << std::endl;
                Sleep(delay);
                cls.clear_screen_cross_platform();
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
};