#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
  char *name;
  int age;
};

void fill(struct person *p)
{
  char text[100];
  int age;
  printf("\nPlease enter name: ");
  
  fgets(text, 100, stdin);
  p->name = (char *)malloc(strlen(text) * sizeof(char));
  strcpy(p->name, text);

  printf("\nPlease enter age: ");
  scanf("%d", &p->age);
}

void display(struct person *p)
{
  printf("Name: %s\n", p->name);
  printf("Age: %d\n", p->age);
}

int main()
{
  struct person *p = (struct person *)malloc(sizeof(struct person));

  if (p == NULL)
  {
    perror("Failed");
    exit(1);
  }

  fill(p);
  display(p);

  return (0);
}