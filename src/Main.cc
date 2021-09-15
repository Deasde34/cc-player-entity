#include <iostream>
#include "Player.hh"

int main()
{

    
    Player player;
    player.init();
    player.Move(5.537,15.1643145);
    player.X = 2;
    player.playerSpeed();
    std::cout <<"                   "<< std::endl;
    player.level(69);
    std::cout <<"                   "<< std::endl;
    player.printName();
    std::cout <<"                   "<< std::endl;  
    player.printSquads();
    std::cout <<"                   "<< std::endl;
    player.printLocation();

    std::cin.get();
}

