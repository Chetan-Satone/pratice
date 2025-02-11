#include<stdio.h>

int main() {

    int age;
    printf("Enter your age.\n");
    scanf("%d", &age);

    age>= 18 ? printf("It is adult.\n"): printf("It is a child.\n");

    return 0;
}