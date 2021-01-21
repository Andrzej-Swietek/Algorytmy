//
// Created by Andrzej Świętek on 1/14/21.
//

#include <iostream>
#include <vector>
#include <unordered_map>

int main() {

    std::vector<int>vect = { 4, 8 ,6, 22 , 19 };
    for ( std::vector<int>::iterator it= vect.begin(); it != vect.end(); it++  )
            std::cout << *it << std::endl;

    std::unordered_map <std::string, int> map;
    map["Andrzej"] = 5;
    map["C++"]  = 2;

//    If we dont change values
using ScoreMap = std::unordered_map<std::string, int>;
using ScoreMapConstIterator = ScoreMap::const_iterator;
    for( ScoreMapConstIterator it = map.begin(); it != map.end(); it++ ){
        auto& key = it->first;
        auto& value = it->second;

        std::cout << key << " | " << value << std::endl;
    }

//    How it is actually done
    for(auto kv : map){
        std::cout << kv.first << " | " << kv.second << std::endl;
    }

//    C++ 17 up
    std::cout << std::endl;
    for( auto [key, value] : map )
        std::cout  << key << " | " << value << std::endl;



    return 0;
}