#include <stdio.h>
#include<math.h>

int main()
{

//    Określona precyzja przy użyciu printf na watość zmiannej x
    int x = 4;
    for(int i =0; i < 8; i++){
        printf("Wartosc =  %.*f \n", x, M_PI);
        printf("Wartosc = %.*f \n", x, (M_PI*M_PI));
        x+=2;
    }

    return 0;
}