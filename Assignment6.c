#include<stdio.h>

int main()

{

    char arr[500];

    int size;

    for(int i=0;i<500;++i)

    {

            scanf("%c",&arr[i]);

            if(i>0)

                if(arr[i]==10&&arr[i-1]==10) break;

            if(i==0)

            {

                if(arr[i]==10) break;

            }

    }

    for(int k=0;arr[k]!='\0';++k)

    {

        if(arr[k]==10) continue;

        printf("%c",arr[k]);

        if(arr[k]=='.') printf("\n");

    }

    return 0;

}
