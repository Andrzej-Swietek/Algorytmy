//
// Created by Andrzej Świętek on 1/14/21.
//
#include <iostream>

class Entity {
private:
    std::string m_Name;
    int m_Age;
public:
    Entity(const std::string& name)
            :m_Name(name),m_Age(-1){}
    Entity(int age)
            :m_Name("Unknown"),m_Age(age){}
};


class Entity2 {
private:
    std::string m_Name;
    int m_Age;
public:
    Entity2(const std::string& name)
            :m_Name(name),m_Age(-1){}

    explicit Entity2(int age)
            :m_Name("Unknown"),m_Age(age){}
};

void PrintEntity( const Entity& entity){
//    printing
}

int main(){

//    Entity a("Andi");
//    Entity b(19);
//
//    Entity aa = Entity("Andi");
//    Entity ab = Entity(19);

// Implicit conversion - result the same as aboves
    Entity aaa = std::string("Andrzej");
    Entity bbb =  20;

    PrintEntity(22);
    PrintEntity(std::string("Andrzej Dominik")); // it was char array and cpp is allowed to do only 1 implicit conversion aat the time
//    or
    PrintEntity( Entity("Andrzejek") );

//    ------------ EXPLICIT = NO implicit conversion allowed ------------

    //    Entity2 xxx =  20;  ----- will not work
        Entity2 xxx = std::string("hi"); // this constructor doesnt have "explicit" keyword
    return 0;
}