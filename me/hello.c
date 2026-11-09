#include <cs50.h>
#include <stdio.h>

int main(void) {
    string name = get_string("What's your name? "); // solicita o nome do usuário
    printf("hello, %s\n", name); // imprime uma saudação personalizada
    return 0;
}
