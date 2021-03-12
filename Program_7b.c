#include<stdio.h>
#include<stdlib.h>
#define max 20
int insertq ( int queue[max], int *rear , int *data);
int delq( int queue[max], int *front, int *rear , int *data);
int main()
{
      int queue[max],data;
      int front,rear,ans,choice;
      front = rear = -1;
      printf("Menu");
      printf("\n 1. Insert element in queue");
      printf("\n 2. Delete element from queue");
      printf("\n 3. Quit");
      printf("\n");
      while(1)
      {
            printf("\nChoose option: ");
            scanf("%d",&choice);
            switch(choice)
            {
                  case 1 :
                        printf("\nEnter Input : ");
                        scanf("%d",&data);
                        ans=insertq(queue,&rear,&data);
                        if (ans==-1)
                              printf("Queue is full");
                        else
                              printf("%d is added to the queue.\n",data);
                        break;
                  case 2 :
                        ans=delq(queue,&front,&rear,&data);
                        if (ans==-1)
                              printf("Queue is empty");
                        else
                              printf("\nDeleted element is : %d\n", data);
                        break;
                  case 3 : exit(0);
            }
      }
}
int insertq ( int queue[max], int *rear , int *data)
{
      if ( *rear == max -1 )
            return(-1);
      else
      {
            *rear = *rear + 1;
            queue[*rear] = *data;
            return(1);
      } 
}
int delq( int queue[max], int *front, int *rear , int *data)
{
      if ( *front == *rear)
            return(-1);
      else
      {
            (*front)++;
            *data = queue[*front];
            return(1);
      } 
} 
