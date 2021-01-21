//
// Created by Andrzej Świętek on 1/14/21.
//

#include <iostream>

struct Vector2 {
    float x,y;
};
struct Vector4 {
//    Because vector4 is just 2x Vector2 with union we can access it in that way
    union {
        struct
        {
            //  One member of union
            float x,y,z,w;
        };
        struct {
            Vector2 a,b;
        };

    };
};

void PrintVector2(const Vector2& vector){
    std::cout << vector.x << " , " << vector.y << std::endl;
}

int main()
{
//    Thanks to union we have 2 ways to access the same values in vector4: or by x,y,z,w or by 2 vectors a equal to x,y and b equal to z,w
//    They have the same memory
    Vector4 v4 = { 1.0f, 2.0f, 3.0f, 4.0f };
    v4.x = 2.0f; //   v4.x/y/z/w
    v4.a.x = 3.0f; // vector a/b and x/y
    PrintVector2(v4.a);
    PrintVector2(v4.b);
    v4.z = 10.0f;
    std::cout << " --- After modifications: ---" << std::endl;
    PrintVector2(v4.a);
    PrintVector2(v4.b);


    return 0;
}