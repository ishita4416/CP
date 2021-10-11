#include<stdio.h>

// Round Robin scheduling program
void findWaitingTime(int processes[], int n,
            int bt[], int wt[], int quantum)
{
    int rem_bt[n];
    for (int i = 0 ; i < n ; i++)
        rem_bt[i] = bt[i];
    int t = 0;
    while (1)
    {
        int flag = 1;
        for (int i = 0 ; i < n; i++)
        {
            if (rem_bt[i] > 0)
            {
                flag=0;
 
                if (rem_bt[i] > quantum)
                {
                    t += quantum;
                    rem_bt[i] -= quantum;
                }
 
                else
                {
                    t = t + rem_bt[i];
                    wt[i] = t - bt[i];
                    rem_bt[i] = 0;
                }
            }
        }
        if (flag==1)
        break;
    }
}

void findTurnAroundTime(int processes[], int n,
                        int bt[], int wt[], int tat[])
{
    for (int i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];
}
 
void findavgTime(int processes[], int n, int bt[],
                                    int quantum)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    findWaitingTime(processes, n, bt, wt, quantum);
    findTurnAroundTime(processes, n, bt, wt, tat);
    printf("Processes  Burst time  Waiting time  Turn around time\n");
    for (int i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];

        printf(" %d\t\t %d\t %d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    printf("Average waiting time = %f",(float)total_wt / (float)n);
    printf("\nAverage turn around time = %f",(float)total_tat / (float)n);
}

int main()
{
    printf("Enter the number of processes: ");
    int n;
    int proc[n],b_t[n];
    scanf("%d",&n);
     printf("Enter the processes");
    for(int i=0;i<n;i++)
    scanf("%d",&proc[i]);
    printf("Enter the burst times");
    for(int i=0;i<n;i++)
    scanf("%d",&b_t[i]);
    int q;
    printf("Enter the quantum");
    scanf("%d", &q);
    findavgTime(proc, n, b_t, q);
    return 0;
}