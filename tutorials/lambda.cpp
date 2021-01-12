//
// Created by Andrzej Świętek on 1/12/21.
//

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

void PrintValue(int value){ std::cout << "Value#1 : " << value << std::endl; }
void ForEach(const std::vector<int>& values, void(*func)(int))
{
    for( int v: values )
        func(v);
}

void ForEach2(const std::vector<int>& values, const std::function<void(int)>& func)
{
    for( int v: values )
        func(v);
}

int main()
{

    std::vector <int> values = { 1, 5, 4, 3 ,2 };
    ForEach(values, PrintValue);
    ForEach(values, [](int value)
    {
        std::cout << "Value#2 : " << value << std::endl;
    });


    auto lambda = [](int value) {  std::cout << "Value#3 : " << value << std::endl; };
    ForEach(values, lambda);

//    Capturing - putting outside vars into lambda function, we can pass it by reference or by value:  = - all by value, & all by ref,
    int a = 5;
    auto lambda2 = [=](int value) {  std::cout << "Value#4 : " << a << std::endl; };


//    find if
    std::vector <int> v = { 1, 5, 4, 3 ,2 };

// will return number > 3
    auto it = std::find_if(v.begin(),v.end(), [](int v){
        return v > 3;
    });
    std::cout << "FIND IF: " << *it << std::endl;
    return 0;
}