#include<stdio.h>
#include<stdbool.h>

bool is_Sorted_ascending(int Array[],int length)
{
    if(length == 0 || length == 1)
        return true;

    if(Array[0] > Array[1])
        return false;

    return is_Sorted_ascending(Array + 1, length - 1);


}



int main()
{
    int Array[] = {1,2,3,4,5};
    int length = sizeof(Array) / sizeof(Array[0]);

    is_Sorted_ascending(Array,length);

    if (is_Sorted_ascending(Array,length) == true)
    {
        printf("The Array is Sorted");
    }
    else
    {
        printf("The Array is Not Sorted");
    }


    return 0;
}
