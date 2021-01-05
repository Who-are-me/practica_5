#pragma once

#include <string>

class AbstractHome {
public:
    virtual void where_home() = 0;

    virtual void saveToFile(std::string pathToFile) = 0;

    virtual void loadFromFile(std::string pathToFile) = 0;
};
