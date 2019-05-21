#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello world!\n");
    printf("Number of arguments: %d\n", argc);
    printf("First arg: %s\n", *argv+1);
}
