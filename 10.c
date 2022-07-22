/* WAP to take date as an input in below given format and convert the date format and 
display the result as given below. 
User Input date format – “DD/MM/YYYY” (27/11/2022) */

#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter date in format(DD/MM/YYYY) : ");
    scanf("%02d/%02d/%d",&d,&m,&y);
    printf("Date-%02d , Month-%02d , Year-%d",d,m,y);
    return 0;
}