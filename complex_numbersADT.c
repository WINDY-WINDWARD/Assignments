#include <stdio.h>

int main(){
    int choice;
    float a0,a1,b0,b1;
    printf("Make a selection: \n");
    printf("1.)Addition \n");
    printf("2.)Subtraction\n");
    printf("3.)Multiplication \n");
    scanf("%d",&choice);
    printf("Enter the First Complex Number: \n");
    scanf("%f %f",&a0,&a1);
    printf("Enter the Second Complex Number: \n");
    scanf("%f %f",&b0,&b1);
    float r0,r1;
    if (choice == 1){
        r0=a0+b0;
        r1=a1+b1;
        printf("Sum of Complex Numbers is: %.2f+i%.2f \n",r0,r1);
    }
    if (choice == 2){
        r0=a0-b0;
        r1=a1-b1;
        printf("Subtraction of Complex Numbers is: %.2f+i%.2f \n",r0,r1);
    }
    if (choice == 3){
        r0=a0*b0;
        r1=a1*b1;
        printf("Multiplication of Complex Numbers is: %.2f+i%.2f \n",r0,r1);
    }
    return 0;
}
