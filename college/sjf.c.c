#include<stdio.h>

//sjf scheduling program

void sort(int p[], int n, int bt[])
{
    int i,j,temp;
    int pos;
     //sorting burst time in ascending order using selection sort
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
}
 
 int wait_time(int p[], int n, int wt[], int bt[])
 {
     int i,j;
     float total;
     wt[0]=0;            //waiting time for first process will be zero
     
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        total+=wt[i];
    }
    return total;
 }
 
 void avg_time(int p[], int n, int bt[])
 {
    int wt[n], tat[n], i;
    float avg_wt,avg_tat,total=0;
    sort(p,n,bt);
    float tot=wait_time(p,n,wt,bt);
    avg_wt=tot/n;      //average waiting time
    
    total=0;
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];     //turnaround time
        total+=tat[i];
        printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
 
    avg_tat=total/n;     //average turnaround time
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f\n",avg_tat);
 }
int main()
{
    int bt[20],p[20],wt[20],tat[20],i,j,n,pos,temp;
    float avg_wt,avg_tat,total=0;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("\nEnter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;           //contains process number
    }
    avg_time(p,n,bt);
return 0;
}