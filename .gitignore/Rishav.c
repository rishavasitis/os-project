#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
struct process
{
 int process_number;
 int a_time,b_time,waiting_time,turnaround_time;
 int flag;
}p[10];

int n;
void sorting_on_a_time()
{
{
 if(p[i].a_time>p[j].a_time)
 {
  temp=p[i];
  p[i]=p[j];
  p[j]=temp;
 }
}
}
void Priority(int a)
{
    int i,time,sum_b_time;
    sum_b_time=a;
    float sum=0,sum1=0;
    printf("\nName\t\tArrival Time\tBurst Time\tWaiting Time");
   for(time=p[0].a_time;time<sum_b_time;)
  {

   float check=-1;
   int loc;
  for(i=0;i<n;i++)
  {

   if(p[i].a_time<=time && p[i].flag!=1)
            {
              float temp=(p[i].b_time + (time-p[i].a_time))/p[i].b_time;
              if(check < temp)
               {
                check=temp;
                loc=i;
               }

   }
   }


   time+=p[loc].b_time;
   p[loc].waiting_time=time-p[loc].a_time-p[loc].b_time;
   p[loc].turnaround_time=time-p[loc].a_time;
   p[loc].flag=1;
   sum+=p[loc].waiting_time;
   sum1=p[loc].waiting_time+p[loc].b_time;
printf("\nProcess%d\t\t%d\t\t%d\t\t%d\t\t%",(p[loc].process_number+1),p[loc].a_time,p[loc].b_time,p[loc].waiting_time);
  }

printf("\nAverage waiting time:%f\n",sum/n);
}
int main()
{
 int i,j,sum_b_time=0;
 printf("Enter no of processes:");
 for(i=0;i<n;i++)
 {
 p[i].process_number=i;
 printf("ENTER THE ARRIVAL AND BURST TIME OF THE PROCESS %d\n",(p[i].process_number+1));
 printf("ENTER THE ARRIVAL TIME: ");
 scanf("%d",&p[i].a_time);
 printf("ENTER THE BURST TIME: ");
 scanf("%d",&p[i].b_time);
 p[i].flag=0;
 sum_b_time+=p[i].b_time;

}
sorting_on_a_time();
Priority(sum_b_time);
}
