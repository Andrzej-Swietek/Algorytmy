//
// Created by Andrzej Świętek on 1/12/21.
//
#include <iostream>
#include <string>
#include <memory>

class Entity{
public:
    Entity(){
        std::cout << "Created Entity" << std::endl;
    }
    ~Entity(){
        std::cout << "Destroyed Entity" << std::endl;
    }
    void Print(){
        std::cout << "What's up" << std::endl;
    }
};

int main(){

//    unique pointer:
//     1. First we create new scope in which the obj will be used
//     2. std::make_unique<>()
//     3. Outside the scope pointer is destroyed
    {
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        entity->Print();
    }

// shared pointer - keeps tracking how many refs there are in the code to the pointer
// destroys when the ref count == 0, every new pointer increases ref count
    {
        std::shared_ptr<Entity> e0;
        {
            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
            e0 = sharedEntity; // copy
        }
        e0->Print();
    } // here where it gets destroyed

//    weak pointer
    {
        std::weak_ptr<Entity> weakPointerEntity;
        {
            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
            weakPointerEntity = sharedEntity; // doesnt increase the ref count of shared pointer
        } // thats where it gets destroyed
//        weakPointerEntity->Print(); error
    }


    std::cin.get();
    return 0;
}

