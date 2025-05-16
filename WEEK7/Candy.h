/*
 * Candy.h
 *
 *  Created on: Mar 15, 2023
 *      Author: lab
 */

#ifndef CANDY_H_
#define CANDY_H_

class Candy {
public:
	int price=0;
	char name;
	static char company;
	Candy();
	Candy(int x,char y,char z);
	Candy(Candy & obj);
	void show();
	int addingP() const;
};

#endif /* CANDY_H_ */
