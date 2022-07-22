/* WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format. */

#include<stdio.h>
int main()
{
    int radius;
    double area;
    printf("Enter the radius : ");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("Area of circle is %lf having the radius %d",area,radius);
    return 0;
}