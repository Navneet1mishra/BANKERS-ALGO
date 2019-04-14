#include<stdio.h>
int main()
{
int i;
int n,p[10]={1,2,3,4,5,6,7,8,9,10};
int min,k=1,burst_time=0;
int bt[10],temp,j,arrival_time[10],wt[10],tt[10],ct[10],ta=0,sum=0;
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
scanf(" %d",&arrival_time[i]);
}
 
/*Sorting According to Arrival Time*/
 
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(arrival_time[i]<arrival_time[j])
{
temp=p[j];
p[j]=p[i];
p[i]=temp;
temp=arrival_time[j];
arrival_time[j]=arrival_time[i];
arrival_time[i]=temp;
temp=bt[j];
bt[j]=bt[i];
bt[i]=temp;
}
}
}
 
/*Arranging the table according to Burst time,
Execution time and Arrival Time
Arrival time <= Execution time
*/
 
for(j=0;j<n;j++)
{
burst_time=burst_time+bt[j];
min=bt[k];
for(i=k;i<n;i++)
{
if (burst_time>=arrival_time[i] && bt[i]<min)
{
temp=p[k];
p[k]=p[i];
p[i]=temp;
temp=arrival_time[k];
arrival_time[k]=arrival_time[i];
arrival_time[i]=temp;
temp=bt[k];
bt[k]=bt[i];
bt[i]=temp;
}
}
k++;
}
wt[0]=0;
for(i=1;i<n;i++)
{
sum=sum+bt[i-1];
wt[i]=sum-arrival_time[i];
wsum=wsum+wt[i];
}
 
wavg=(wsum/n);

for(i=0;i<n;i++)
{
	
ta=ta+bt[i];
tt[i]=ta-arrival_time[i];
tsum=tsum+tt[i];
ct[i]=tt[i]+arrival_time[i];
	
//	printf("p %f",pr[i]);
}
 
tavg=(tsum/n);
 
printf("************************");
printf("\n RESULT:-");
printf("\nProcess\t Burst\t Arrival\t Waiting\t Turn-around\t estimated run time\t" );
for(i=0;i<n;i++)
{ 
printf("\n p%d\t %d\t %d\t\t %d\t\t\t%d\t\t\t%d\n\n\n",p[i],bt[i],arrival_time[i],wt[i],tt[i],ct[i]);


}
 printf("\n\nAVERAGE WAITING TIME : %f",wavg);
printf("\nAVERAGE TURN AROUND TIME : %f",tavg);
return 0;

printf("priority calculation\n");
 printf("p=1+waitingtime/completion time\n\n\n");
printf("priority of processes are in order p4>p2>p3>p1");
}
