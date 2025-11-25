#ifndef ANIMAL_H
#define ANIMAL_H


#include <iostream>
#include <string>


class animal {
protected:
    
    std::string m_name;
    int m_age;
    std::string m_color;
    double m_weight;
    int m_legs;
    bool m_domestic;

public:
    animal( std::string name, int age, std::string color, double weight, int legs ,bool domestic ):
    
    m_name(name),
    m_age(age),
    m_color(color),
    m_weight(weight),
    m_legs(legs),
    m_domestic(domestic){}

    virtual void printInfo() const{
        std::cout << "name:" << m_name << std::endl;
        std::cout << "age:" << m_age << std::endl;
        std::cout << "color:" << m_color << std::endl;
        std::cout << "weight:" << m_weight <<std::endl;
        std::cout << "legs:" << m_legs <<std::endl;
        std::cout << "domestic:" << (m_domestic ? "Yes" : "No") << std:: endl;



    }

animal(animal&& other)noexcept:
m_name(std::move(other .m_name)),
m_age(other .m_age),
m_color(std::move(other .m_color)),
m_weight(other .m_weight),
m_legs(other .m_legs),
m_domestic(other .m_domestic){
    other .m_age = 0;
    other .m_weight = 0;
    other .m_legs = 0;
    other .m_domestic = false;


}

animal& operator=(animal&& other)noexcept{
    if(this !=&other){
        m_name = std::move(other .m_name);
        m_age = other .m_age;
        m_color = std::move(other .m_color);
        m_weight = other .m_weight;
        m_legs = other .m_legs;
        m_domestic = other .m_domestic;


        other .m_age = 0;
        other .m_weight = 0;
        other .m_legs = 0;
        other .m_domestic = false;

    }
    return *this;
}




    virtual ~animal() {}





};
#endif