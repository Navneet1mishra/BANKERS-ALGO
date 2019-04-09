
#include<stdio.h>
 
void main()
{
    int burst[20],p[20],wait[20],tat[20],i,j,n,total=0,a,temp;
    float avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&burst[i]);
        p[i]=i+1;           //contains process number
    }
