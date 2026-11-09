#include <cs50.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    string name = get_string("What's yout name? ");
    printf("hello, %s\n", name);
    return 0;
}
