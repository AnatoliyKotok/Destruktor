#include "Header.h"
#include<iostream>

using namespace std;
//Zadacha 1
Number::Number(int number)
{
	this->number = number;
}

int Number::plus(const Number& other)
{
	return int(this->number+other.number);
}
int Number::min(const Number& other)
{
	return int(this->number - other.number);
}

int Number::mnoj(Number& other)
{
	return int(this->number*other.number);
}

int Number::dil(Number& other)
{
	return int(this->number/other.number);
}
///Zadacha 2
Arr::Arr(int arr) {
	this->arr[5] = arr;
}
void Arr::fill(int velue) {
	for (size_t i = 0; i < 5; i++)
	{
		arr[i] = velue;
		arr[i] = rand() % 100;
	}
}

void Arr::print()
{
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
}

int Arr::sum()
{
	int sum=0;
	for (size_t i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	return sum;
}


