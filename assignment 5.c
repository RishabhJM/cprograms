#include <stdio.h>
int main()
{
    int num_grade [30] [3],s1,s2,s3,i;
    printf("Enter no. of students in s1,s2,s3 respectively:");
    scanf("%d%d%d",&s1,&s2,&s3);
    for(i=0;i<s1;i++)
    {
        printf("\n enter marks of s1:");
        scanf("%d",&num_grade[i][0]);
    }
    for(i=0;i<s2;i++)
    {
        printf("\n enter marks of s2:");
        scanf("%d",&num_grade[i][1]);
    }
    for(i=0;i<s3;i++)
    {
        printf("\n enter marks of s3:");
        scanf("%d",&num_grade[i][2]);
    }
    return 0;
}