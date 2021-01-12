//
// Created by Andrzej Świętek on 1/12/21.
//

#include <iostream>
#include <memory>

struct Vector2D {
    float x,y;
};

class String {
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size+1];

        memcpy(m_Buffer, string, m_Size);
        m_Buffer[m_Size] = 0; // termination character
    }

//    COPY CONSTRUCTOR , po : co kopujemy bez zmian a w klamrach nowy buffer jako pointer ale o tej samej zawratosci
    String(const String& other)
        : m_Size(other.m_Size)
    {
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer, other.m_Buffer, m_Size+1);

        std::cout<< "New copy created"<<std::endl;
    }

//    accessing by ref value of index to enable modification
    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }
    friend std::ostream& operator << (std::ostream& stream, const String& string);

    ~String()
    {
        delete[] m_Buffer;
    }
};



// override
std::ostream& operator << (std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}

// Passing by reference in order to avoid creating 4 copies
void PrintString(const String& s){
    std::cout << s <<std::endl;
}

int main()
{
// Copying values

    int a = 2;
    int b = a;
    b = 3; // a remains at the same value

    Vector2D aa = { 2,3 };
    Vector2D bb = aa;
    bb.y = 5; // aa.y remains on 3


// Coping pointer - changing values
    Vector2D* aaa = new Vector2D();
    Vector2D* bbb = aaa;
//    bbb++; changing pointer and aaa dosen't change
//    but...
    bbb->x = 10; // this will change the vauule pointed by pointer


    String string = "Andrzej";
    String second = string; // second string has to have its own unique pointer for buffer
    second[0] = 'D'; // first as it was, second Dndrzej
    PrintString(string);
    PrintString(second);


    return 0;
}