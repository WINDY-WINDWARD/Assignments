#include <stdio.h>

typedef struct
{
    int arr[2];
} RATIONAL;

RATIONAL makerational(int a, int b)
{
    RATIONAL r;
    r.arr[0] = a;
    r.arr[1] = b;
    return r;
}

RATIONAL add(RATIONAL r1, RATIONAL r2)
{
    RATIONAL r;
    r.arr[0] = r1.arr[0] * r2.arr[1] + r2.arr[0] * r1.arr[1];
    r.arr[1] = r1.arr[1] * r2.arr[1];
    printf("%d %d\n", r.arr[0], r.arr[1]);
    return r;
}

/* RATIONAL mult (RATIONAL r1,RATIONAL r2){
	RATIONAL r;
	r= r1.arr[0]*r2.arr[0];
	r= r1.arr[1]*r2.arr[1];
	return r;
} */

int equal(RATIONAL r1, RATIONAL r2)
{
    if (r1.arr[0] * r2.arr[1] == r2.arr[0] * r1.arr[1])
    {
        printf("The Rational is Equal\n");
    }
    else
        printf("The Rational is not equal\n");
}

int main()
{
    RATIONAL rn1, rn2;
    int k;
    rn1.arr[0] = 2;
    rn1.arr[1] = 5;
    rn2.arr[0] = 4;
    rn2.arr[1] = 10;
    //add(rn1, rn2);
    equal(rn1, rn2);
    return 0;
}