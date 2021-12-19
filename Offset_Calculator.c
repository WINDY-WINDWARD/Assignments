#include <stdio.h>
//reference material
//https://techalmirah.com/row-and-column-major-ordering-in-an-array/

int Calc(int DataSize);
int Specific_calc(int r, int c, int Badd, int);
int All_calc(int r, int c, int Badd, int dataSize);
int Row_major(int Badd, int dataSize, int TCols, int row, int column);
int Col_major(int Badd, int dataSize, int Trows, int row, int column);

int main()
{
    int dataType;
    system("clear");
    printf("----------------------------------------------------------\n");
    printf("Select data type of the Matrix:\n");
    printf("1.Int\n");
    printf("2.Char\n");
    printf("3.Float\n");
    printf("4.Double\n");
    printf("Input the appropriate Number:\n");
    scanf("%d", &dataType);
    if (dataType == 1)
        Calc(4);
    if (dataType == 2)
        Calc(1);
    if (dataType == 3)
        Calc(4);
    if (dataType == 4)
        Calc(8);

    return 0;
}

int Calc(int DataSize)
{
    int r, c;
    int choice;
    int Badd;
    system("clear");
    printf("----------------------------------------------------------\n");
    printf("enter Total no of rows and no of columns : Eg:( 4 5 )\n");
    scanf("%d %d", &r, &c);
    system("clear");
    printf("----------------------------------------------------------\n");
    printf("Enter The Base address:\n");
    scanf("%d", &Badd);
    system("clear");
    printf("----------------------------------------------------------\n");
    printf("Do you want address of all elements or specific element:\n");
    printf("1.Specific Element\n");
    printf("2.All Element\n");
    scanf("%d", &choice);
    if (choice == 1)
        Specific_calc(r, c, Badd, DataSize);
    else if (choice == 2)
    {
        All_calc(r, c, Badd, DataSize);
    }
    else
        printf("Check your Input");

    return 0;
}

int Specific_calc(int r, int c, int Badd, int dataSize)
{
    //Sr is specific row and Sc is specific coll
    int Sr, Sc, method;
    system("clear");
    printf("----------------------------------------------------------\n");
    printf("Enter the specific position to retrieve the address: \n");
    scanf("%d %d", &Sr, &Sc);
    printf("\nSelect Method: 1.) row major 2.) column major\n");
    scanf("%d", &method);
    if (method == 1)
    {
        printf("The address of the matrix position is: %d \n", Row_major(Badd, dataSize, r, Sr, Sc));
    }
    else
    {
        printf("The address of the matrix position is: %d \n", Col_major(Badd, dataSize, c, Sr, Sc));
    }
    return 0;
}

int Col_major(int Badd, int dataSize, int Trows, int row, int column)
{
    int result_add = Badd + (dataSize * (Trows * column + row));
    //printf("the address of that matrix location is: %d \n",result_add);
    return result_add;
}

int Row_major(int Badd, int dataSize, int TCols, int row, int column)
{
    int result_add = Badd + (dataSize * (TCols * row + column));
    //printf("the address of that matrix location is: %d \n",result_add);
    return result_add;
}

int All_calc(int r, int c, int Badd, int dataSize)
{
    //Sr is specific row and Sc is specific coll
    int Sr, Sc, method;
    system("clear");
    printf("----------------------------------------------------------\n");
    printf("\nSelect Method: 1.) row major 2.) column major\n");
    scanf("%d", &method);
    if (method == 1)
    {
        for (Sr = 0; Sr < r; Sr++)
        {
            for (Sc = 0; Sc < c; Sc++)
            {
                printf("The address of the matrix position[%d][%d] is: %d \n", Sr, Sc, Row_major(Badd, dataSize, r, Sr, Sc));
            }
        }
    }
    else
    {
        for (Sr = 0; Sr < r; Sr++)
        {
            for (Sc = 0; Sc < c; Sc++)
            {
                printf("The address of the matrix position[%d][%d] is: %d \n", Sr, Sc, Row_major(Badd, dataSize, r, Sr, Sc));
            }
        }
    }
    return 0;
}