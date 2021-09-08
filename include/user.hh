#pragma once
#include <string>

class user{
private:
    unsigned int age;
    std::string name;
    float height;
    float weight;
public:
    user(unsigned int age, std::string name, float height, float weight);
};