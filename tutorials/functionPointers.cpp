//
// Created by Andrzej Świętek on 1/12/21.
//

#include <iostream>
#include <vector>

void HelloWorld(int a)
{
    std::cout << "Hello World, Passed value: "<< a << std::endl;
}

void PrintValue(int value){ std::cout << "Value: " << value << std::endl; }
void ForEach(const std::vector<int>& values, void(*func)(int))
{
    for( int v: values )
        func(v);
}

int main(){
//    Not the way, but works
//    void(*andrzej)() = HelloWorld; //type of auto
//    andrzej();

    typedef void(*HelloWorldFunc)(int);
    HelloWorldFunc function = HelloWorld;
    function(8);


    std::vector <int> values = { 1, 5, 4, 3 ,2 };
    ForEach(values, PrintValue);
    ForEach(values, [](int value)
    {
        std::cout << "Value#2 : " << value << std::endl;
    });
    return 0;
}