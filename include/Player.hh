#pragma once
#include <iostream>
#include "Entity.hh"
#include <string>

class Player : public Entity
{
public:
    std::string name;
    std::string legend;
    float speed = 350.00;
    std::string location;
    void init()
    {
        name = "Deasde";
        legend ="Octane";
        location = "Olympus";
        
    }

    void printName()
    {

        std::cout << "Player Name: " << name << std::endl;
        std::cout << "Legend you are using: " << legend << std::endl;
        std::cout << "My legs are ready to go, parts are not included  " << std::endl;


    }
    void printSquads(){

        std::cout << "Squads Remaining: " << squadsRemaining << std::endl;
        if (squadsRemaining <= 10){

            std::cout << "Octane: Half toast, half to roast! : "  << std::endl;
        }
    }
    void printLocation()
    {

        std::cout << "Map: " << location << std::endl;
    }


    void playerSpeed()
    {   std::cout << "Player Base Speed: " << baseSpeed << std::endl;
        std::cout << "Player Actual Speed: " << speed << std::endl;
        if(speed > baseSpeed){

        std::cout << "it seems you are using Octane Stim! MUST GO FASTER " << std::endl;

        }

        else{
            std::cout << "You are running at max base speed : " << std::endl;
        }
        

    }
};
