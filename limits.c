#include<stdio.h>
#include<limits.h>

<<<<<<< HEAD
//add some 
=======
>>>>>>> 66a85a9697f714bd97eaac8f6038923315fe674e
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