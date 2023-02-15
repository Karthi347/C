#include <stdio.h>

struct student 
{
            char name[50];
            int age;
};

int func(struct student record)
{
			printf("\nStudent details : \n");
			printf("Name is: %s \n", record.name);
            printf("Age is: %d \n", record.age);
}

int main() 
{
            struct student record;
            printf("Name : ");
            scanf("%s",record.name);
            printf("Age : ");
            scanf("%d",&record.age);
            func(record);
            return 0;
}
