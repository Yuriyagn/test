```c++
//头文件

#pragma once
#include<iostream>
using namespace std;
class Fraction
{
private:
	int m_numerator = 0;
	int m_denominator = 1;
	void resetSign();
	void simplify();
public:
	Fraction(int n = 0, int d = 1) :m_numerator(n), m_denominator(d) {}
	Fraction(const Fraction& f) : Fraction(f.m_numerator, f.m_denominator){}
	Fraction(double dou);
	int GCD(const int &m, const int & n) const;
	//Fraction Reduction();
	void normalize();
	int getNumerator() const { return m_numerator; }
	int getDenominator() const { return m_denominator; }
	double getValue() const { return double(m_numerator) / double(m_denominator); }
	friend ostream& operator<<(ostream&, const Fraction&);
	friend istream& operator>>(istream&, Fraction&);
	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);

};

ostream& operator<<(ostream&, const Fraction&);
istream& operator>>(istream&, Fraction&);


//懒得排版

#include "Fraction.h"
#include <iostream>
#include <cmath>
#include <assert.h>
using namespace std;

Fraction::Fraction(double dou)
{
	int d = 1;
	double t = dou;
	if (fabs(t) < 1e-6)
	{
		this->m_numerator = 0;
		this->m_denominator = 1;
	}
	else
	{
		while (fabs(t - int(t)) > 1e-6)
		{
			t *= 10;
			d *= 10;
		}
		this->m_denominator = d;
		this->m_numerator = int(t);
	}
	this->normalize();
}


int Fraction::GCD(const int& m, const int& n) const
{
	if (m == 0 || n == 0)
		return 1;

	if (m % n == 0)
		return n;
	else if (n % m == 0)
		return m;

	if (abs(m) < abs(n))
		return GCD(n % m, m);
	else
		return GCD(m % n, n);
}
//Fraction Fraction::Reduction()//约分
//{
//	Fraction t;
//	t.m_numerator = m_numerator / abs(this->GCD(m_numerator, m_denominator));
//	t.m_denominator = m_denominator / abs(this->GCD(m_numerator, m_denominator));
//	return t;
//}

void Fraction::normalize()
{
	this->resetSign();
	this->simplify();
}

void Fraction::resetSign()
{
	if (m_denominator < 0)
	{
		m_denominator = -m_denominator;
		m_numerator = -m_numerator;
	}
}

void Fraction::simplify()
{
	Fraction t;
	t.m_numerator = m_numerator / abs(this->GCD(m_numerator, m_denominator));
	t.m_denominator = m_denominator / abs(this->GCD(m_numerator, m_denominator));
	*this = t;
}

ostream& operator<<(ostream& out, const Fraction& f)
{
	int n = f.m_numerator;
	int d = f.m_denominator;
	if (d < 0)
	{
		
		
		out << -n << "/" << -d<< endl;
		return out;
	}
	else
	{
		out << n << "/" << d << endl;
		return out;
	}

}

istream& operator>>(istream& is, Fraction& f)
{
	int n, d;
	
	is >> n >> d;
	assert(d!=0);//分母不为零
	f = Fraction(n, d);
	f.normalize();
	return is;
}

Fraction Fraction::operator+(const Fraction& f)
{
	Fraction t = *this;
	t.m_numerator = t.m_numerator*f.getDenominator() + f.getNumerator()*t.m_denominator;
	t.m_denominator = t.m_denominator* f.getDenominator();
	assert(t.m_denominator != 0);
	t.normalize();
	return t;
}
Fraction Fraction::operator-(const Fraction& f)
{
	Fraction t = *this;
	t.m_numerator = t.m_numerator*f.getDenominator() - f.getNumerator()*t.m_denominator;
	t.m_denominator = t.m_denominator * f.getDenominator();
	assert(t.m_denominator != 0);
	t.normalize();
	return t;
}
Fraction Fraction::operator*(const Fraction& f)
{
	Fraction t = *this;
	t.m_numerator *= f.getNumerator();
	t.m_denominator *= f.getDenominator();
	assert(t.m_denominator != 0);
	t.normalize();
	return t;
}
Fraction Fraction::operator/(const Fraction& f)
{
	Fraction t =*this;
	t.m_numerator *= f.getDenominator();
	t.m_denominator *= f.getNumerator();
	assert(t.m_denominator != 0);
	t.normalize();
	return t;
}



#include <iostream>
#include "Fraction.h"
using namespace std;


/*求最大公约数*/

int main()
{
	/*Fraction a(12,-8);
	a.normalize();
	cout << a.getNumerator() << endl;
	cout << a.getDenominator() << endl;
*/
//通过double构造Fraction对象
	double  d;
	Fraction    f1(5.0);

	//从输入流输入分子、分母
	Fraction    f2{};
	cin >> f2;
	cout << f2 << endl;
	cout << f1;
	//计算分数表达式的结果，输出形式为化简后的分数
	cout << (f2 - f1)*(f1 + f2) / f2 << endl;
	return 0;
}
```

