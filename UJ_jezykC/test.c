////
//// Created by Andrzej Świętek on 1/8/21.
////
//
#include <stdio.h>

#include <string.h>

int main() {

//    enum ops {
//        ADD = 1,
//        SUB = 2,
//        MUL = 3,
//        DIV = 4
//    } operator;
//
//    char input[3] = "";
//    scanf("%s", &input);
//    printf("input: %s",input);
//    if(input == "add") operator = ADD;
//    else if(input == "sub") operator = SUB;
//    else if(input == "mul") operator = MUL;
//    else if(input == "div") operator = DIV;
//
//    printf("\n ------- %d ------ \n",operator);
//
//    switch(operator)
//    {
//        case ADD:
//            printf("%s", "ADD");
//            break;
//        case SUB:
//            printf("%s", "Sub");
//            break;
//        case MUL:
//            printf("%s", "MUL");
//            break;
//        case DIV:
//            printf("%s", "DIV");
//            break;
//
//    }


//    char slowo[64] = "add";
//    int x = (int)(slowo);
//    printf("%d", x);
//    char slowo2[64] = "DIV";
//    int y = (int)(slowo);
//    printf("%d", y);


//    int a[] = {2,3,4,5,4,5,6,78,9,91,435,4,5,76,7,34};//for Example only
//    char a[] = "Kubaa";
//
//    int size;
//    size = sizeof(a)/sizeof(a[0]);//Method
//
//    printf ("size = %d \n",size);
//    printf ("string = %s|" ,a);
    char a[100];
    int length;

    printf("Enter a string to calculate its length\n");
    gets(a);

    length = strlen(a);

    printf("Length of the string = %d\n", length);

    return 0;


}


