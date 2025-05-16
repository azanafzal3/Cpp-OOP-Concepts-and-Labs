#ifndef BOOK_H
#define BOOK_H

class Book
{
	public:
		Book();
		Book (int x , string s);
		Book (operator &a);
		Book (operator &b);
		Book::Book(operator +=p);
		~Book();
	protected:
};

#endif