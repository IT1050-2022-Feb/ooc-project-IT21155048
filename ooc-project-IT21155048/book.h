#include <iostream>
#include<string>

using namespace std;

class Book{
	private:
		string bookId;
		string booktitle;
		double bookPrice;
		string bookType;
		string bookAuthor;
	public:
		Book();
		Book(string bookid, double price, string book_type, string book_author);
		void addBooks();
		void modifyBooks();
		void removeBooks();
};     