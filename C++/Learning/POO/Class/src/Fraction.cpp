#include <cassert>
#include "Fraction.h"

namespace Math
{
	Fraction::Fraction() : m_numerator{ 0 }, m_denominator{ 1 }
	{

	}

	Fraction::Fraction(int numerator) : m_numerator{ numerator }, m_denominator{ 1 }
	{

	}

	Fraction::Fraction(int numerator, int denominator) : m_numerator{ numerator }, m_denominator{ denominator }
	{
		assert(denominator != 0);
	}

	int Fraction::getNumerator() const
	{
		return m_numerator;
	}

	void Fraction::setNumerator(int numerator)
	{
		m_numerator = numerator;
	}

	int Fraction::getDenominator() const
	{
		return m_denominator;
	}

	void Fraction::setDenominator(int denominator)
	{
		assert(denominator != 0);

		m_denominator = denominator;
	}

	double Fraction::compute() const
	{
		return static_cast<double>(m_numerator) / m_denominator;
	}
} // namespace Math