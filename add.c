#include<stdio.h>
int main(){
    int a=10;
    
    int c= ++a + ++a + a++ + ++a;
    printf("%d\n",c);
}