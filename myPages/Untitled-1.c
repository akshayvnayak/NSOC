#include<stdio.h>
struct lib
{
	char book_title[50];
	char author_name[50];
	int  isbn_number;
	int stock_position;
	int price;
};
void main()
{
int i,press,copies,cost,num;
char title[20];

struct lib book[5];
book[0].book_title[0]="A new earth";
book[0].author_name[0]="Eckhart Tolle";
book[0].isbn_number=91234;
book[0].stock_position=10;
book[0].price=450;

book[1].book_title[1]="Malgudi days";
book[1].author_name[1]="R.K.Narayan";
book[1].isbn_number=65321;
book[1].stock_position=6;
book[1].price=490;

book[2].book_title[2]="Two States";
book[2].author_name[2]="Chetan Bhagath";
book[2].isbn_number=93516; 
book[2].stock_position=3;
book[2].price=385;

book[3].book_title[3]="One Indian Girl";
book[3].author_name[3]="Chetan Bhagath";
book[3].isbn_number=93523;
book[3].stock_position=7;
book[3].price=370;

book[4].book_title[4]=" The Fault In Our Stars";
book[4].author_name[4]="John Green";
book[4].isbn_number=97912;
book[4].stock_position=5;
book[4].price=500;

printf("\nAsk customer to enter 1 for bookname or enter 2 for isbn number");
scanf("%d",&press);
if(press==1)
{
	printf("\nEnter the book title:");
	scanf("%s",title);
	for(i=0;i<5;i++)
	{
		 if(title==book[i].book_title)
		 {
 			printf("\nEnter the copies required");
 			scanf("%d",&copies);
 			if(copies<=book[i].stock_position)
 			{
 				cost=book[i].price*copies;
 				printf("\nBook_title=%s",title);
 				printf("\nBook price=%d",cost);
 			}
 			}
 		else	printf("\nBooks are not available in stock");
 			
 		}
	}
else 
  {
  	printf("\nEnter the isbn number");
  	scanf("%d",&num);
  	for(i=0;i<5;i++)
	{
		 if(num==book[i].isbn_number)
		 {
 			printf("\nEnter the copies required");
 			scanf("%d",&copies);
 			if(copies<=book[i].stock_position)
 			{ṇ
 				cost=book[i].price*copies;
 				
 			printf("\nBook_title=%s",title);
 				printf("\nBook price=%d",cost);
 				}
 			}
 		else	printf("\nBooks are not available in stock");
 			
 		}
	}
  
  }