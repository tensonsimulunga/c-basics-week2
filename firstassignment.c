#include <stdio.h>

int main() {
    
    printf("My name is Tenson Simulunga\n");
    printf("My age is 20\n"); 
    printf("My favorite hobby is playing football\n\n"); 
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s! You are %d years old.\n", name, age);

    return 0;
}
