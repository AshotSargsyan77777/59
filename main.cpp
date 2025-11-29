#include "kendaniner.h"

int main() { 
    Dog dog("rex",5,"black",18,4,true,"shun",true, "Ashot",2,10,"toy" );
    Cat cat("murzik",3,"white",14,4,true,"katu",true, "Ashot",2,10,"toy" );
    Horse horse("bucefal",6,"white",14,4,false,"dzi",true, "Ashot",2,10,"toy" );
    Eagle eagle("nala",3,"black",14,2,false,"arciv",false, "Ashot",2,10,"toy" );
    Monkey monkey("mamu",3,"brown",14,2,false,"kapik",true, "Ashot",2,10,"toy" );
    Elephant elephant("titan",3,"brown",14,4,false,"kapik",false, "Ashot",2,10,"toy" );

    animal a("rex",5,"black",25,4,true);
    animal b("rex",5,"black",18,4,true);


    if (a < b) std::cout << "Dog is heavier\n";
    if (a > b) std::cout << "Dog is lighter\n";
    if (a == b) std::cout << "Same weight\n";

    dog.printInfo();
    std::cout << "----------------------\n";
    cat.printInfo();
    std::cout << "----------------------\n";
    horse.printInfo();
    std::cout << "----------------------\n";
    eagle.printInfo();
    std::cout << "----------------------\n";
    monkey.printInfo();
    std::cout << "----------------------\n";
    elephant.printInfo();
    std::cout << "----------------------\n";

    return 0;
}