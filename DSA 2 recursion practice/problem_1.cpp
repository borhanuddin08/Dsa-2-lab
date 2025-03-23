#include <stdio.h>

void Reverse(char *p)
{
    if (*p == '\0') {
        return;
    }

    Reverse(p + 1);

    printf("%c", *p);
}

int main()
{
    char arr[100];
    printf("Enter a string: ");
    scanf("%[^\n]", arr);
    printf("Reversed string is: ");
    Reverse(arr);
    printf("\n");
    return 0;
}
