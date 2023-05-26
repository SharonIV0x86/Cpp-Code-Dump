#include <windows.h>
#include <iostream>

void delay_cross_platform()
{
#ifdef _WIN32

    {

        long delay = 1000;
        for (int i = 10; i > 0; i--)
        {
            // std::cout << "Please wait for " << i << " seconds before trying again! " << std::endl;
            Sleep(delay);
        }
    }
#else

    {


        for (int i = 20; i > 0; i--)
        {
            //std::cout << "Please wait for " << i << " seconds before trying again." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
#endif
}

int main()
{

    std::cout << "LMAO";
    delay_cross_platform();

    return 0;
}
