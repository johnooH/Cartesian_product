#include "stdafx.h"
#include "cartesian.h"

const int size = 30;

cartesian::cartesian()
{
}

void cartesian::prompt() {

	std::cout << "Enter integers for set A (no more than 30 numbers, -1 to stop)\n";
	
		for (int i = 0; i < size; i++) {
			int Avalue;
			std::cout << (i+1) << ": ";
			std::cin >> Avalue;
			
			if (Avalue != -1 ) this->A.push_back(Avalue);
			else break;
		}

		std::cout << "\nEnter characters for set B (no more than 30 numbers, '.' to stop)\n";

		for (int j = 0; j < size; j++) {
			std::string Bvalue;
			std::cout << (j+1) << ": ";
			std::cin >> Bvalue;

			if (Bvalue != ".") this->B.push_back(Bvalue);
			else break;
		}

}

void cartesian::create_pair() {
	int Asize = this->A.size();
	for (int i = 0; i < Asize ; i++) {

	this->elements.insert(std::make_pair(this->A[i], this->B));

		

	}
}

void cartesian::display() {

	std::cout << "set A = { ";

	for (auto i : this->A) std::cout << i;
	std::cout << "} \n";

	std::cout << "set B = { ";
	for (auto j : this->B) std::cout << j;
	std::cout << "} \n";

	std::cout << "The cartesian product of A X B = {\n";
	
	for (auto it = this->elements.begin(); it != elements.end(); ++it) {
		
		for (auto it2 = it->second.begin(); it2 != it->second.end(); ++it2){
			std::cout << "{ " << it->first << ", " << *it2 << " }\n";
		}
	}
}


