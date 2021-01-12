#include "stack.h"

#define STACK_SIZE 128
double Stack[STACK_SIZE];
int StackPos=0;


void StackPush(double x) {
    if(StackPos >= STACK_SIZE) {
        printf("%s\n", "Stack overflow");
        exit(1);
    }
    Stack[StackPos++] = x;
}
double StackPop() {
    if(StackPos < 1) {
        printf("%s\n", "Stack is empty");

        exit(1);
    }
    return Stack[--StackPos];
}
double StackPeak(int n){
    return Stack[StackPos-n-1];
}
int StackSize(){
    printf("%d", StackPos);
    return StackPos;
}
void Operation(char slowo[]) {

    double x, y;
    if (strcmp(slowo, "add") == 0) {
        x = StackPop();
        y = StackPop();
        StackPush(x + y);

    }
    else if (strcmp(slowo, "sub") == 0) {
        x = StackPop();
        y = StackPop();
        StackPush(x - y);
    }
    else if (strcmp(slowo, "mul") == 0) {
        x = StackPop();
        y = StackPop();
        StackPush(x * y);
    }
    else if (strcmp(slowo, "div") == 0) {
        x = StackPop();
        y = StackPop();
        if (y == 0) {
            StackPush(y);
            StackPush(x);
            printf("Dzielenie przez 0\n");



        }
        else StackPush(x / y);
    }
    else if (strcmp(slowo, "pow") == 0) {
        x = StackPop();
        y = StackPop();
        StackPush(pow(x, y));
    }
    else if (strcmp(slowo, "neg") == 0) {
        x = StackPop();
        StackPush(-x);
    }
    else if (strcmp(slowo, "abs") == 0) {
        x = StackPop();
        StackPush(fabs(x));
    }
    else if (strcmp(slowo, "sin") == 0) {
        x = StackPop();
        StackPush(sin(x));
    }
    else if (strcmp(slowo, "cos") == 0) {
        x = StackPop();
        StackPush(cos(x));
    }
    else if (strcmp(slowo, "log") == 0) {
        x = StackPop();
        if (x <= 0) {
            StackPush(x);
            printf("Niepoprawne dane\n");

        }
        else StackPush(log(x));
    }
    else if (strcmp(slowo, "exp") == 0) {
        x = StackPop();
        StackPush(exp(x));
    }
    else if (strcmp(slowo, "pstack") == 0) {

        while (StackPos >= 1)
            printf("%g\n", StackPop());
    }
    else if (strcmp(slowo, "q") == 0 || strcmp(slowo, "quit") == 0) {
        exit(0);
    }
    else if (strcmp(slowo, "=") == 0) {
        printf("%g\n", StackPeak(0));
    }

    else if (strcmp(slowo, "help") == 0 || strcmp(slowo, "?") == 0) {
        printf(" \n \033[1;33m =================[Dzialania]================= \n [add] ---- Dodawanie \n [sub] ---- Odejmowanie \n [mul] ---- Mnozenie \n [div] ---- Dzielenie \n [pow] ---- Potega \n [neg] ---- Negacja \n [abs] ---- Wart. Bezwzgledna \n [sin] ---- Sinus \n [cos] ---- Cosinus \n [log] ---- Logarytm Naturalny \n [exp] ---- Exponenta \n \033[0;35m =================[Operacje]================= \n [pstack] ---------- Pokaz zawartosc Stack \n [q] / [quit] ------ Zakoncz program \n [?] / [help] ------ Pomoc \n [=] --------------- Wartosc ze szczytu Stosu \n \033[0;32m =================[Przyklad]================= \n input: 25 5 add = \n output: 30 \n ================[KONIEC HELP]=============== \033[0m \n \n");
    }
}

