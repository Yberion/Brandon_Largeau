#pragma once

#include <cassert>

namespace Math
{
	class Fraction
	{
	private:
		int m_numerator;
		int m_denominator;

	public:
		explicit Fraction(int numerator = 0, int denominator = 1) : m_numerator{numerator}
		{
			assert(denominator != 0);

			m_denominator = denominator;
		}

		[[nodiscard]] int getNumerator() const;
		void setNumerator(int numerator);
		[[nodiscard]] int getDenominator() const;
		void setDenominator(int denominator);
		[[nodiscard]] double compute() const;
	};
} // namespace Math
