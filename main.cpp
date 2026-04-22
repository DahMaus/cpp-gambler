#include <iostream>
#include <cstdlib> // for da random gen shi

int money = 10;

int main() {
    int gamble;

    std::cout << "gamble?\n";
    std::cin >> gamble;

    if(gamble >= money)
    {
        int random = rand() % 101; 

        if(random > 80)
        {
            money += gamble;
            std::cout << "WONNNNN";
        }
        else 
        {
            money -= gamble;
            std::cout << "99% of gambles quit before their big win\n";
        }

        std::cout << "Money: " + std::to_string(money) + "\n";
    }
    else 
    {
        std::cout << "not enough money broke ass\n";
    }

    main();
}