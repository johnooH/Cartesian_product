#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <map>

class cartesian
{
public:
	cartesian();
	void prompt();
	void create_pair();
	void display();

private:
	std::map<int, std::vector<std::string>> elements;
	std::vector <int> A;
	std::vector <std::string> B;
};

