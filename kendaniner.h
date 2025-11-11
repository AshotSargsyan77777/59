#ifndef KENDANINER_H
#define KENDANINER_H
#include "animal.h"


class Dog : public animal{
private:
    std::string m_tesak;
    bool m_trained;
    std::string m_ownerName;
    double m_barkVolume;
    double m_speed;
    std::string m_favoriteToy;

public:
    Dog(std::string tesak, bool trained,std::string ownerName, double barkVolume, double speed,std::string favoriteToy):

    m_tesak(tesak),
    m_trained(trained),
    m_ownerName(ownerName),
    m_barkVolume(barkVolume),
    m_speed(speed),
    m_favoriteToy(favoriteToy){}


    void printInfo() const override{
        animal::printInfo();  
        std::cout << "tesak" << m_tesak << std::endl;
        std::cout << "trained" << (m_trained? "Yes" : "No")  << std::endl;
        std::cout << "ownerName" << m_ownerName << std::endl;
        std::cout << "barkVolume" << m_barkVolume <<std::endl;
        std::cout << "speed" << m_speed <<std::endl;
        std::cout << "favoriteToy" << m_favoriteToy << std:: endl;

        
    }


};


class Cat: public animal{
private:
    std::string m_tesak;
    bool m_trained;
    std::string m_ownerName;
    double m_myauVolume;
    double m_speed;
    std::string m_favoriteToy;

public:
    Cat(std::string tesak, bool trained,std::string ownerName, double myauVolume, double speed,std::string favoriteToy):

    m_tesak(tesak),
    m_trained(trained),
    m_ownerName(ownerName),
    m_myauVolume(myauVolume),
    m_speed(speed),
    m_favoriteToy(favoriteToy){}


    void printInfo() const override{
        animal::printInfo();  
        std::cout << "tesak" << m_tesak << std::endl;
        std::cout << "trained" << (m_trained? "Yes" : "No")  << std::endl;
        std::cout << "ownerName" << m_ownerName << std::endl;
        std::cout << "barkVolume" << m_myauVolume <<std::endl;
        std::cout << "speed" << m_speed <<std::endl;
        std::cout << "favoriteToy" << m_favoriteToy << std:: endl;

        
    }


};


class Horse: public animal{
private:
    std::string m_tesak;
    bool m_trained;
    std::string m_ownerName;
    double m_volume;
    double m_speed;
    std::string m_favoriteToy;

public:
    Horse(std::string tesak, bool trained,std::string ownerName, double volume, double speed,std::string favoriteToy):

    m_tesak(tesak),
    m_trained(trained),
    m_ownerName(ownerName),
    m_volume(volume),
    m_speed(speed),
    m_favoriteToy(favoriteToy){}


    void printInfo() const override{
        animal::printInfo();  
        std::cout << "tesak" << m_tesak << std::endl;
        std::cout << "trained" << (m_trained? "Yes" : "No")  << std::endl;
        std::cout << "ownerName" << m_ownerName << std::endl;
        std::cout << "Volume" << m_volume <<std::endl;
        std::cout << "speed" << m_speed <<std::endl;
        std::cout << "favoriteToy" << m_favoriteToy << std:: endl;

        
    }


};



class Eagle: public animal{
private:
    std::string m_tesak;
    bool m_trained;
    std::string m_ownerName;
    double m_myauVolume;
    double m_speed;
    std::string m_favoriteToy;

public:
    Eagle(std::string tesak, bool trained,std::string ownerName, double myauVolume, double speed,std::string favoriteToy):

    m_tesak(tesak),
    m_trained(trained),
    m_ownerName(ownerName),
    m_myauVolume(myauVolume),
    m_speed(speed),
    m_favoriteToy(favoriteToy){}


    void printInfo() const override{
        animal::printInfo();  
        std::cout << "tesak" << m_tesak << std::endl;
        std::cout << "trained" << (m_trained? "Yes" : "No")  << std::endl;
        std::cout << "ownerName" << m_ownerName << std::endl;
        std::cout << "barkVolume" << m_myauVolume <<std::endl;
        std::cout << "speed" << m_speed <<std::endl;
        std::cout << "favoriteToy" << m_favoriteToy << std:: endl;

        
    }


};







class Monkey: public animal{
private:
    std::string m_tesak;
    bool m_trained;
    std::string m_ownerName;
    double m_myauVolume;
    double m_speed;
    std::string m_favoriteToy;

public:
    Monkey(std::string tesak, bool trained,std::string ownerName, double myauVolume, double speed,std::string favoriteToy):

    m_tesak(tesak),
    m_trained(trained),
    m_ownerName(ownerName),
    m_myauVolume(myauVolume),
    m_speed(speed),
    m_favoriteToy(favoriteToy){}


    void printInfo() const override{
        animal::printInfo();  
        std::cout << "tesak" << m_tesak << std::endl;
        std::cout << "trained" << (m_trained? "Yes" : "No")  << std::endl;
        std::cout << "ownerName" << m_ownerName << std::endl;
        std::cout << "barkVolume" << m_myauVolume <<std::endl;
        std::cout << "speed" << m_speed <<std::endl;
        std::cout << "favoriteToy" << m_favoriteToy << std:: endl;

        
    }


};









class Elephant: public animal{
private:
    std::string m_tesak;
    bool m_trained;
    std::string m_ownerName;
    double m_myauVolume;
    double m_speed;
    std::string m_favoriteToy;

public:
    Elephant(std::string tesak, bool trained,std::string ownerName, double myauVolume, double speed,std::string favoriteToy):

    m_tesak(tesak),
    m_trained(trained),
    m_ownerName(ownerName),
    m_myauVolume(myauVolume),
    m_speed(speed),
    m_favoriteToy(favoriteToy){}


    void printInfo() const override{
        animal::printInfo();  
        std::cout << "tesak" << m_tesak << std::endl;
        std::cout << "trained" << (m_trained? "Yes" : "No")  << std::endl;
        std::cout << "ownerName" << m_ownerName << std::endl;
        std::cout << "barkVolume" << m_myauVolume <<std::endl;
        std::cout << "speed" << m_speed <<std::endl;
        std::cout << "favoriteToy" << m_favoriteToy << std:: endl;

        
    }


};








#endif 