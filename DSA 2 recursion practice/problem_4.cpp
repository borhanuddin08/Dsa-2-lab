#include <stdio.h>

void towerOfHanoi(int n, char Source, char Destination, char Auxillary)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", Source, Destination);
        return;
    }

    towerOfHanoi(n - 1, Source, Auxillary, Destination);

    printf("Move disk %d from %c to %c\n", n, Source, Destination);

    towerOfHanoi(n - 1, Auxillary, Destination, Source);
}

int main()
{
    int n = 3;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
