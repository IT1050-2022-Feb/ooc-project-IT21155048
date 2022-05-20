#include "book.h"
#include <string>

using namespace std;

Book::Book(){
  bookId="";
  bookPrice=0;
  bookType="";
  bookAuthor="";
}

Book::Book(string bookid, double price, string book_type, string book_author){
  bookId=bookid;
  bookPrice=price;
  bookType=book_type;
  bookAuthor=book_author;
}    