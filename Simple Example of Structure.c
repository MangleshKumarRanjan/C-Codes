#include <stdio.h>
#include<string.h>

struct Books
{
	int Id;
	char Title[50];
	char Author[50];
	float Price;
};
void main()
{
	struct Books b1;
	
	//B1
	strcpy(b1.Title,"C Programming");
	b1.Id=1001;
	strcpy(b1.Author,"K K Ranjan");
	b1.Price=120.50;
	//printing
	printf("ID = %d\n",b1.Id);
	printf("Title = %s\n",b1.Title);
	printf("Author = %s\n",b1.Author);
	printf("Price = %0.2f",b1.Price);	
}
