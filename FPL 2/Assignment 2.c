#include<stdio.h>

struct item
{
	int no;
	char name[20];
	int category;
	int stock;
}items[10];

void getdata(struct item *);
void display(struct item [10], int);

int main()
{
	int n=0, i=0;
	int choice;
	
	do
	{
		printf("\n1. Enter data\n2. Display available stock\n3. Exit\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				{
					getdata(&items[i]);
					n++;
					i++;
  			  printf("\nRecord added!");
					break;
				}
			case 2:
				{
					if(n==0)
					{
						printf("\nEmpty database!\n");
					}
					else
					{
						display(items, i);
					}
					break;
				}
			case 3:	break;
		}
	}
  while(choice!=3);
	
	return 0;
}

void getdata(struct item *s)
{
	printf("\nEnter item no.: ");
	scanf("%d", &s->no);
	printf("Enter item name: ");
	scanf("%s", s->name);
	printf("\n1. Electronics\n2. Food\n3. Cosmetics\nEnter item category: ");
	scanf("%d", &s->category);
	printf("Enter stock: ");
	scanf("%d", &s->stock);
	printf("\n%d",s->no);
}

void display(struct item s[10], int n)
{
	int i;
	printf("\nSr. No.\tName\tCategory\tStock\n-----------------------------------------\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t%s\t", s[i].no, s[i].name);
		if(s[i].category==1)
			printf("Electronics\t");
		else if(s[i].category==2)
			printf("Food\t");
		else
			printf("Cosmetics\t");
		printf("%d\n", s[i].stock);
	}
}
