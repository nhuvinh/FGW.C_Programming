#include <stdio.h>
#include <string.h>
 
typedef  struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Books;

typedef struct Person {
	char name[50];
	int age;
	char address[50];
	Books book;
} Person;

typedef struct Family{
	Person father;
	Person mother;
	Person child;
} Family;

/* function declaration */
void printBook( Books book );

int main( ) {

   Books Book1;        /* Declare Book1 of type Book */
   Books Book2;        /* Declare Book2 of type Book */
 
   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* book 2 specification */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   /* print Book1 info */
   printBook( Book1 );

   /* Print Book2 info */
   printBook( Book2 );
   
   Person Khoa;
   Khoa.age = 10;
   strcpy( Khoa.name, "Tran Van Khoa");
   strcpy( Khoa.address, "127 Phan Chu Trinh");
   strcpy(Khoa.book.author , "Jimi");
   strcpy(Khoa.book.title, "Rock and Roll");
   Khoa.book.book_id = 1274;
   strcpy(Khoa.book.subject, "Music");

   return 0;
}

void printBook( Books book ) {

   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}
