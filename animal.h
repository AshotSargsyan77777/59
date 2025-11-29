#ifndef ANIMAL_H
#define ANIMAL_H


#include <iostream>
#include <string>


class animal {
public:
    
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
    
    friend bool operator<(const animal& a,const animal& b){
        return a.m_weight < b.m_weight;
    }

     friend bool operator>(const animal& a,const animal& b){
        return a.m_weight > b.m_weight;
    }

     friend bool operator==(const animal& a,const animal& b){
        return a.m_weight == b.m_weight;
    }




   




    virtual ~animal() {}





};
#endif