#include<stdio.h>
 int main()
{
    int gt[20],pn[20],wt[20],tat[20],pir[20],i,j,n,total=0,pos,temp1,avgwt,avgtat,temp2;
    printf("<-----------------------Enter Total Number of Persons:------------------->");
    scanf("%d",&n);
 
    printf("----------------------\nEnter number of gifts selected from gift shop------------\n");
    for(i=0;i<n;i++)
    {
        printf("\n   P[%d]     \n",i+1);
        printf("    Number of gifts:  ");
        scanf("%d",&gt[i]);
        pn[i]=i+1;           // process number
    }
 
    
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(gt[j]>gt[pos])
                pos=j;
        }
 
        pir[i]=i;
        temp1=gt[i];
        gt[i]=gt[pos];
        gt[pos]=temp1;
 
        temp2=pn[i];
        pn[i]=pn[pos];
        pn[pos]=temp2;
    }
 
    wt[0]=0;    //waiting time for person with most number is zero
 
    // waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=gt[j];
 
        total+=wt[i];
    }
 
    avgwt=total/n;      //average waiting time
    total=0;
 
    printf("\n#Process\t    #Number of gifts    \t#Waiting Time\tT#urnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=gt[i]+wt[i];     //calculate turnaround time
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",pn[i],gt[i],wt[i],tat[i]);
    }
 
    avgtat=total/n;     //average turnaround time
    printf("\n\nAverage Waiting Time=%d",avgwt);
    printf("\nAverage Turnaround Time=%d\n",avgtat);
 
    return 0;
}
