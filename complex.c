#include<stdio.h>
struct complex
{
    int a,b;
};
int main()
{
    struct complex n1={5,10};
    struct complex *ptr=&n1;
    printf("Real part of the Complex number is = %d\n ",ptr->a);
    printf("Imaginary part of the Complex number is = %d\n ",ptr->b);   
    return 0;
    
}