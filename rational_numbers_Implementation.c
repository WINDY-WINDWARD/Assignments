#include <stdio.h>

int main(){
    int choice;
    float a0,a1,b0,b1;
    printf("Make a selection: \n");
    printf("1.)Addition \n");
    printf("2.)Multiplication\n");
    printf("3.)Equals \n");
    scanf("%d",&choice);
    printf("Enter the First Rational Number: \n");
    scanf("%f %f",&a0,&a1);
    printf("Enter the Second Rational Number: \n");
    scanf("%f %f",&b0,&b1);
    float r0,r1;
    if (choice == 1){
        r0=a0*b1+a1*b0;
        r1=a1*b1;
        printf("Sum of Rational Numbers is: %f/%f \n",r0,r1);
    }
    if (choice == 2){
        r0=a0*b0;
        r1=a1*b1;
        printf("Multiplication of Rational Numbers is: %f/%f \n",r0,r1);
    }
    if (choice == 3){
        if (a0*b1 == a1*b0)
        {
            printf("rational numbers are Equal");
        }
        else{
            printf("rational numbers are Not Equal");
        }
    }
}
