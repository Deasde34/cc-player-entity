#pragma once
#include <string>

class Entity
{

public:
    float baseSpeed = 299.00;
    int squadsRemaining = 9;
    float X = 0.0f , Y = 0.0f;


    void Move(float xa, float ya)
    {

        X += xa;
        Y += ya;

        std::cout << "Xpos: " << X << "," <<"Ypos : " << Y << std::endl;
    }
    void level(int lvl)
    {

        std::cout <<"Player Level :" << lvl << std::endl;
    }
};
