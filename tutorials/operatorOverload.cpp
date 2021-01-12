//
// Created by Andrzej Świętek on 1/12/21.
//
#include <iostream>
#include <string>

struct Vector2 {
    float x, y;

    Vector2(float x, float y)
            :x(x), y(y) {}

    Vector2 Add(const Vector2& other) const
    {
        return Vector2(x + other.x , y + other.y);
    }
    Vector2 operator+(const Vector2& other) const
    {
        return Add(other);
    }


    Vector2 Multiply(const Vector2& other) const
    {
        return Vector2(x * other.x , y * other.y);
    }
    Vector2 operator*(const Vector2& other) const
    {
        return Multiply(other);
    }

    bool operator==(const Vector2& other) const
    {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Vector2& other) const
    {
        return !(*this == other);
    }
};

//Overload << dla couta vectorów
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
    stream << other.x << "," << other.y;
    return stream;
}

int main(){

    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 power_up(1.5f, 1.1f);

    Vector2 result_old = position.Add(speed.Multiply(power_up));
    Vector2 result = position + speed * power_up;


    std::cout << result << std::endl;
    //---- result: 4.75,5.65
    std::cout << (result==speed) << std::endl;
    //---- comparation: false

    return 0;
}