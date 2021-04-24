#include <stdio.h>
#include <math.h>


void sys(int x, int b, int m, char* res, int* found)
{
    int p = x;
    char t[] = "0123456789ABCDEF";
    int i = m-1;
    int sum = 0;
    while(x>0)
    {
        res[i] = t[(x % b)];
        sum += pow(x%b, m);
        i--;
        x /= b;
    }
    if(sum == p)
    {
        for(int i=0;i<m;i++)
            printf("%c", res[i]);
        printf(" ");

        *found = 1;
    }

}

int main(){
    int m, b;
    scanf("%d %d", &m, &b);
    char t[m+1];
    int s = 1;
    int found = 0;
    for (int j=0;j<m-1;j++)
        s *= b;

    for(int i=s;i<s*b;i++)
    {
        sys(i, b, m, t, &found);
    }
    if (!found)
        printf("NO");

    return 0;
}
