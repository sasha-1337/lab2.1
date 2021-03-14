#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Number
{
private:
	int first;
	int second;
public:
	Number();
	Number(int, int);
	Number(const Number&);
	~Number();
		
	int GetFirst() const { return first; };
	int GetSecond() const { return second; };

	void SetFirst(int first) { this->first = first; }
	void SetSecond(int second) { this->second = second; }

	bool Init(int f, int s);
	void multiply(int N);

	Number& operator = (const Number&);
	operator string() const;
	friend Number operator * (const Number&, const Number&);
	friend ostream& operator << (ostream&, const Number&);
	friend istream& operator >> (istream&, Number&);

	Number& operator ++();
	Number& operator --();
	Number operator ++(int);
	Number operator --(int);
};