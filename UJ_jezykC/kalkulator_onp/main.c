//
// Created by Andrzej Świętek on 1/8/21.
//

#include <stdio.h>
extern void StackPush(double x);
extern double StackPop();
extern double StackPeek(int n);
extern int StackSize();
extern void Operation(char slowo[]);



int main() {
    char slowo[64];
    double val;
    char znak;
    int isNum;

    while(scanf("%63s",slowo)==1){
        isNum = (sscanf(slowo, "%lf%c", &val, &znak)==1);
        if(isNum) {
            StackPush(val);
        }
        else {

            Operation(slowo);
        }
    }
    return 0;
}