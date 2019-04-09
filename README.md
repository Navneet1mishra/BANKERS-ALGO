#include<stdio.h>
#include<conio.h>
void main()
{
int start=0,
output[10],//safe sequence
d=0,
t=0,
val[5],//instance variable for array to print max instance.

avail[5],     //It is a 1-d array indicating the number of available resources of each type.

allocated[10][5],//2-d array of size ‘n*m’ that defines the number of resources
    // of each type currently allocated to each process.
    
need[10][5],     // 2-d array of size ‘n*m’ that defines the number of resources of each type
// currently allocated to each process.

MAX[10][5],//2-d array of size‘n*m’ that defines the maximum demand of
// each process in a system.
pno,//number of process
PROCESS[10],
i,j,resource, count=0;

printf("\n Enter the number of resources : ");
scanf("%d", &resource);
printf("\n enter maximun number of resources\n");
for(i=0;i<resource;i++)
{  avail[i]=0;
printf("%c= ",(i+97));//printing a,b,c;
scanf("%d",&val[i]);//taking value of a,b,c 
}
printf("\n Enter the number of processes : ");
scanf("%d", &pno);
printf("\n Enter the allocation matrix \n     ");

for(i=0;i<resource;i++)
printf(" %c",(i+97));
printf("\n");
for(i=0;i <pno;i++)
{           PROCESS[i]=i;//p0,p1 printing
printf("PROCESS[%d]  ",PROCESS[i]);
for(j=0;j<resource;j++)//in p[i] taking no. of value equal to resources. 
{
scanf("%d",&allocated[i][j]);
avail[j]+=allocated[i][j];
}
}

printf("\nEnter the MAX matrix \n     ");
for(i=0;i<resource;i++)
{          printf(" %c",(i+97));
avail[i]=val[i]-avail[i];//to find available
}
printf("\n");
for(i=0;i <pno;i++)
{
printf("P[%d]  ",i);
 for(j=0;j<resource;j++)
 scanf("%d", &MAX[i][j]);
}

printf("\n");
A: d=-1;
for(i=0;i <pno;i++)
{ count=0; t=PROCESS[i];
 for(j=0;j<resource;j++)
 {
 need[t][j] = MAX[t][j]-allocated[t][j];
 if(need[t][j]<=avail[j])
 count++;
 }
if(count==resource)
{
output[start++]=PROCESS[i];
 for(j=0;j<resource;j++)
avail[j]+=allocated[t][j];
//printf("%d",avail[j]);
}
else
 PROCESS[++d]=PROCESS[i];
}

if(d!=-1)
{ pno=d+1;
goto A;
}
printf("\t <");
for(i=0;i<start;i++)
printf(" P[%d] ",output[i]);
printf(">");
getch();


}
