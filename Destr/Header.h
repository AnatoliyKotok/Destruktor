#pragma once
#include<iostream>
//Zadacha 1
class Number {
public:
	Number(int number);
	int getNumber()const;
	int plus(const Number& other);
	int min(const Number& other);
	int mnoj(Number& other);
	int dil(Number& other);
private:
	int number;

};
inline int Number::getNumber()const
{
	return number;
}


//Zadacha 2
class Arr {
private:
	
	int arr[5];
public:
	Arr() = default;
	Arr(int arr);
	void fill(int velue);
	void print();
	int sum();
	
};



