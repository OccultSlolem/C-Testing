#include <stdio.h>
#include <stdlib.h>

int main() {
    int lucky = 23;
    int *lp;

    lp = &lucky;

    printf("Value: %i\n", lucky);
    printf("Value pointer: %p\n", lp);
    printf("Value of int stored in pointer: %i\n", *lp);

    char hello[] = "Hello,";
    char *world = malloc(7);
    world[0] = ' ';
    world[1] = 'w';
    world[2] = 'o';
    world[3] = 'r';
    world[4] = 'l';
    world[5] = 'd';
    world[6] = '!';
    world[7] = '\0';

    printf("%s", hello);
    printf("%s\n", world);

    free(world);

    return 0;
}