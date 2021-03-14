#include "Number.h"

Number::Number()
{
    first = 0;
    second = 0;
}
Number::Number(int f = 0, int s = 0)
{
    first = f;
    second = s;
}
Number::Number(const Number& n)
{
    first = n.first;
    second = n.second;
}
Number::~Number() { }


bool Number::Init(int f, int s)
{
    SetFirst(f);
    if (s > 0) {
        SetSecond(s);
        return true;
    }
    else
        return false;
}

void Number::multiply(int N)
{
    first *= N;
    second *= N;
}

Number operator * (const Number& a, const Number& b)
{
	return Number(a.first * b.first - a.second * b.second,
				  a.first * b.second + a.second * b.first);
}

Number& Number::operator = (const Number& r)
{
    first = r.first;
    second = r.second;
    return *this;
}

Number::operator string () const
{
    stringstream sstr;
    sstr << " first = " << first << "  ";
    sstr << " second = " << second << endl;
    return sstr.str();
}

ostream& operator << (ostream& out, const Number& r)
{
    out << string(r);
    return out;
}

istream& operator >> (istream& in, Number& r)
{
    cout << " first = "; in >> r.first;
    do {
        cout << " second = "; in >> r.second;

        if (!r.Init(r.first, r.second)) { cout << " Error! Enter a positive integer." << endl; }

    } while (!r.Init(r.first, r.second));
    cout << endl;
    return in;
}

Number& Number::operator ++()
{
    first++;
    return *this;
}

Number& Number::operator --()
{
    first--;
    return *this;
}

Number Number::operator ++(int)
{
    Number t(*this);
    second++;
    return t;
}

Number Number::operator --(int)
{
    Number t(*this);
    second--;
    return t;
}