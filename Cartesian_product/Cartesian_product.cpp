// Cartesian_product.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cartesian.h"

int main()
{
	char ask = 'y';

		do {
			cartesian num_pair;

			num_pair.prompt();
			num_pair.create_pair();
			num_pair.display();
		} while (ask = 'y');
	
	system("PAUSE");
	return(0);
}

