//
// Created by Andrzej Świętek on 1/12/21.
//

#include <iostream>
#include <string>

#define WAIT std::cin.get();
#define LOG(x) std::cout << x << std::endl;

class Entity{

public:
    int x;
public:
    Entity(){ }
    ~Entity() { }
    void Print() const { LOG("Hello") }
};


class ScopedPtr {
private:
    Entity* m_Obj;
public:
    ScopedPtr(Entity* entity):m_Obj(entity)
    {
    }
    ~ScopedPtr(){
        delete m_Obj;
    }
//    Entity* getObj(){ return m_Obj; }
    Entity* operator->(){
        return m_Obj;
    }
};


struct Vector3{
    float x,y,z;
};


int main()
{
    Entity e;
    e.Print();

    Entity* ptr = &e;
    ptr->Print();
    ptr->x = 2;

     ScopedPtr entity = new Entity();
//     entity.getObj()->Print();
    entity->Print();

//    int offset = (int)&((Vector3*)nullptr)->x;
//    LOG(offset);
    WAIT;
    return 0;
}

