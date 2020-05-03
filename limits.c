#include<stdio.h>
#include<limits.h>

enum Color{RED,GREEN,YELLOW};

int main(){
    enum Color c;
    c = GREEN;
    if(c == RED)
        printf("%d\n",SCHAR_MAX);
    else
    {
        printf("it is not RED.");
    }
    
    return 0;
}