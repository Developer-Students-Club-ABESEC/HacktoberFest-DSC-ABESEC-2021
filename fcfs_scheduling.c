#include<stdio.h>
#define MAX 100
//first come first serve
int main()
{
    int n_process, arrivalTime[MAX], burstTime[MAX], startTime[MAX], finishTime[MAX], waitingTime[MAX], taTime[MAX];
    float wtTotal=0, tatTotal=0;
    float wtAverage, tatAverage,temp;

    printf("Enter the Number of Process : ");
    scanf("%d",&n_process);
    for (int i = 0; i < n_process; i++)
    {
        printf("Enter the ARRIVAL TIME for PROCESS ID %d : ",i+1);
        scanf("%d",&arrivalTime[i]);

        printf("Enter the BURST TIME for PROCESS ID %d : ",i+1);
        scanf("%d",&burstTime[i]);

        if(i==0)
        {
            startTime[i] = arrivalTime[i];
            finishTime[i] = burstTime[i] + arrivalTime[i];
        }
        else
        {
            startTime[i] = finishTime[i-1];
            finishTime[i] = burstTime[i] + startTime[i];
        }

        waitingTime[i] = startTime[i] - arrivalTime[i];
        taTime[i] = finishTime[i] - arrivalTime[i];
    }

    for (int i = 0; i < n_process; i++)
    {
        wtTotal += waitingTime[i];
        tatTotal += taTime[i];
    }

    printf("PROCESS ID | ARRIVAL TIME | BURST TIME | START TIME | FINISH TIME | WAITING TIME | TAT\n");
    printf("______________________________________________________________________________________\n");
    for (int i = 0; i < n_process; i++)
    {
        printf("    %d      |        %d     |       %d    |       %d    |       %d     |       %d      |    %d\n",i+1,arrivalTime[i],burstTime[i],startTime[i],finishTime[i],waitingTime[i],taTime[i]);
    }
    
    
    wtAverage = wtTotal / n_process;
    tatAverage = tatTotal / n_process;
    printf("\n\n");
    printf("The AVERAGE TIME for WAITING TIME is          : %f\n",wtAverage);
    printf("The AVERAGE TIME for TOUR AROUND  TIME is     : %f",tatAverage);
    
}