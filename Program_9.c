#include <stdio.h>
#include <string.h>
 typedef struct mailbook{         
    char name[10];
    char street[20];
    char city[10];
    char zip[10];
} mb;
void add(mb[]);
void delete(mb[]);
void show(mb[]);
int i=0;
int main(){
    mb records[15];
    int choice;
    printf("Enter 1 to add\n");
    printf("Enter 2 to delete\n");
    printf("Enter 3 to print\n");
    printf("Enter -1 to quit\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    while(choice != -1){
        if(choice==1){
            add(records);
        }
        else if(choice==2){
            delete(records);
        }
        else if(choice==3){
            show(records);
        }
        printf("Enter choice:");
        scanf("%d",&choice);
    }
    return 0;
}
void add(mb records[]){
    i++;
    printf("Enter Name:");
    scanf("%s", records[i-1].name);
    printf("Enter Street:");
    scanf("%s", records[i-1].street);
    printf("Enter City:");
    scanf("%s", records[i-1].city);
    printf("Enter Zip-Code:");
    scanf("%s", records[i-1].zip);
    printf("Entries added to records\n");
}
void delete(mb records[]){
    int x = 0;
    char deleteName[20];  
    char nullStr[20] = {"\0"};
    printf("\nEnter name: ");
    scanf("%s", deleteName);
    for(x=0;x<i;x++){
        if(strcmp(deleteName,records[x].name) == 0){
            strcpy(records[x].name, nullStr); 
            strcpy(records[x].city, nullStr); 
            strcpy(records[x].street, nullStr);
            strcpy(records[x].zip, nullStr);
            printf("Entry removed from records\n");
            i--;
            break;
        }
    }
    
}
void show(mb records[]){
    int x=0;
    printf("Entries:\n");
    for ( x = 0; x < i; x++) {
        printf("\n(%d)\n", x+1); 
        printf("Name:%s\n",records[x].name);
        printf("Street:%s\n",records[x].street);
        printf("City:%s\n",records[x].city);
        printf("Zip-Code:%s\n",records[x].zip);
    }
}