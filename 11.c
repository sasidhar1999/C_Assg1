/* 11. WAP to take time as an input in below given format and convert the time format and 
display the result as given below.
User Input time format – “HH:MM”
Output format – “HH hour and MM Minute” */

#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter the time in format(HH:MM) : ");
    scanf("%02d:%02d",&h,&m);
    printf("%02d hour and %02d Minute",h,m);
    return 0;
}