#include<stdio.h>
int main()
{
int i,n,p[10]={1,2,3,4,5,6,7,8,9,10},min,k=1,btime=0;
int bt[10],temp,j,at[10],wt[10],tt[10],ct[10],ta=0,sum=0;
float wavg=0,tavg=0,tsum=0,wsum=0;
float pr[i];
printf(" -------Shortest Job First Scheduling ( NP )-------\n");
printf("\nEnter the No. of processes :");
scanf("%d",&n);
 
for(i=0;i<n;i++)
{
printf("\tEnter the burst time of %d process :",i+1);
scanf(" %d",&bt[i]);
printf("\tEnter the arrival time of %d process :",i+1);
scanf(" %d",&at[i]);
}
 
