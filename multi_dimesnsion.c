#include <stdio.h>
int main()
{
    int dim, dtype, address, baseadd, bytes, temp = 1, ups, temp2 = 0;
    int up[100], actualdim[100];
    printf("Enter the Base Address: ");
    scanf("%d", &baseadd);
    printf("Enter the number of dimensions of the array: ");
    scanf("%d", &dim);
    ups = dim;
    for (int i = 0; i < dim; i++)
    {
        printf("Enter Upper Bound for dimension %d: ", i + 1);
        scanf("%d", &up[i]);
    }
    printf("LETS FIND THE ADDRESS OF AN ELEMENT\n");
    printf("What is the datatype of the array?\n");
    printf("1) int\n");
    printf("2) float\n");
    printf("3) char\n");
    scanf("%d", &dtype);
    if (dtype == 1)
    {
        bytes = 4;
    }
    else if (dtype == 2)
    {
        bytes = 8;
    }
    else if (dtype == 3)
    {
        bytes = 1;
    }
    for (int i = 0; i < dim; i++)
    {
        printf("Enter the values for dimension %d: ", i + 1);
        scanf("%d", &actualdim[i]);
    }
    for (int i = 0; i < dim; i++)
    {
        temp = actualdim[i];
        for (int j = i + 1; j < ups; j++)
        {
            temp = temp * up[j];
        }
        temp2 += temp;
    }
    address = baseadd + bytes * temp2;
    printf("The address of element is: %d \n", address);
    return 0;
}