#include <stdio.h>
#include <stdlib.h>
struct student {
  int marks;
  char sub[30];
};

int main() 
{
  struct student *ptr;
  int n,i;
  printf("Enter the number of records: ");
  scanf("%d", &n);
  ptr = (struct student *)malloc(n * sizeof(struct student));
  for (i=0;i<n;i++) 
  {
    printf("\nEnter subject : ");
    scanf("%s", (ptr + i)->sub);
    printf("Enter marks : ");
    scanf("%d", &(ptr + i)->marks);
  }
  printf("Displaying Information:\n");
  for (i=0;i<n;i++) 
  {
    printf("%s\t%d\n",(ptr + i)->sub,(ptr + i)->marks);
  }
  free(ptr);
  return 0;
}

