#include <cassert>
#include "Fraction.h"

namespace Math
{
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