//
// Created by Andrzej Świętek on 1/12/21.
//

#include <iostream>
#include <string>



// --- Problem ---
//void Print(int value)
//{
//    std::cout << value << std::endl;
//}
//void Print(std::string value)
//{
//    std::cout << value << std::endl;
//}
//void Print(float value)
//{
//    std::cout << value << std::endl;
//}

// ---- Solution: template - it's not code just yet - it get created based on how we call it - T = template var name
template <typename T>
void Print(T value)
{
    std::cout << value << std::endl;
}

template<typename T, int N>
class Array{
    // array on the stack
private:
    T m_Array[N];
public:
    int GetSize() const { return N; }
};


int main(){

//    Templates detect what type it is thanks to type name parameter
    Print(5);
    Print("Hi");
    Print(5.5f);
//    However we can specify for this perticular case that this print must get int as parameter here
    Print<int>(5);
    Print<std::string>("hello World");

    Array <int,6> arr;
    std::cout << arr.GetSize() <<std::endl;

    return 0;
}