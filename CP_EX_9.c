#include <stdio.h>
struct m_lst
{
    int index;
    char name[25];
    char street[25];
    char city[25];
    int zip;
};
int main()
{
    int i,j;
    int z=0;
    struct m_lst rec[100];
    for ( i=0; i<=99;i++)
    {
       rec[i].index=(i+1);
       puts("enter name");
       gets(&rec[i].name);
        puts("enter street");
        gets(&rec[i].street);
        puts("enter city");
        gets(&rec[i].city);
        puts("enter zip");
        scanf("%d",&rec[i].zip);
        puts("do you want to add another address? Enter 1 for yes and 0 for no");
        int d;
        scanf("%d",&d);
        fflush(stdin);
        if (d==0)
            break;
    }
    printf("\nyour entered list is");
        

    for (j=0;j<=i;j++)
    {
        printf("\n\n\nindex no.: %d\nname: %s\nstreet: %s\ncity: %s\nzip code:%d",rec[j].index,&rec[j].name,&rec[j].street,&rec[j].city,rec[j].zip);

    }
    int k;
    for (k=0;k<=100;k++)
    {
        i=i+1;
        printf("\ndo you wish to add entry to your list? Enter 1 for yes and 0 for no\n");
        int f;
        scanf("%d",&f);
        fflush(stdin);
        if (f==1)
        {
            rec[i].index=(i+1);
            puts("enter name");
            gets(&rec[i].name);
            puts("enter street");
            gets(&rec[i].street);
            puts("enter city");
            gets(&rec[i].city);
            puts("enter zip");
            scanf("%d",&rec[i].zip);
            fflush(stdin);
        }
        if ((f==0) &&(k>0))
        {
                printf("\nthe new list is\n");
                 for (j=0;j<i;j++)
                {
                    printf("\n\n\nindex no.: %d\nname: %s\nstreet: %s\ncity: %s\nzip code:%d",rec[j].index,&rec[j].name,&rec[j].street,&rec[j].city,rec[j].zip);

                }
                break;
            }
            if ((f==0) && (k==0))
                break;
    }
        printf("\n\n\nIf you wish to delete entries, enter the indices in ascending order");
        int l,new[i];
        for (l=0;l<=i;l++)
        {
            fflush(stdin);
            printf("\ndo you wish to delete entry from your list? Enter 1 for yes and 0 for no\n");
            fflush(stdin);
            int g;
            scanf("%d",&g);
            fflush(stdin);
            if (g==1)
            {
                printf("\nenter the index no. you wish to delete\n");
                scanf("%d",&new[l]);
                fflush(stdin);
            }
            if ((g==0) &&( l>0) )
            {   
                new[l]=i;
                printf("\nnew list is\n");
                int n_in,v;
                n_in=0;
                
                for (v=0; v<=l;v++)
                {
                    n_in=n_in+1;
                    for (;n_in<new[v];n_in++)
                    {
                        z=z+1;
                        int y = n_in - 1;
                        printf("\n\n\nindex no.: %d\nname: %s\nstreet: %s\ncity: %s\nzip code:%d",z,&rec[y].name,&rec[y].street,&rec[y].city,rec[y].zip);                       
                    }
                }
                break;
            }
            if ((g==0) && (l==0))
                break;
        }
            if (new[l-1] != i)
            printf("\n\n\nindex no.: %d\nname: %s\nstreet: %s\ncity: %s\nzip code:%d",z+1,&rec[i-1].name,&rec[i-1].street,&rec[i-1].city,rec[i-1].zip);                      
        
            
        
    


    return 0;

}
