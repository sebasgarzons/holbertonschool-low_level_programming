#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int x;
    int y;
    int z;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    x = atoi(argv[1]);
    y = atoi(argv[2]);

    z = (x * y);

    printf("%i \n", z);
    return (0);
}