#include <iostream>
#include <string>
// #include <conio.h>
using namespace std;
void clear_screen()
{
#ifdef _WIN32
    std::system("cls");

#else
    std::system("clear");
#endif
    cin.get();
}
int main()
{
    clear_screen();
}
