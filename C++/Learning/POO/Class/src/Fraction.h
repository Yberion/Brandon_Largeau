#pragma once

namespace Math
{
	class Fraction
	{
	private:
		int m_numerator;
		int m_denominator;

	public:
		explicit Fraction();
		explicit Fraction(int numerator);
		Fraction(int numerator, int denominator);

		[[nodiscard]] int getNumerator() const;
		void setNumerator(int numerator);
		[[nodiscard]] int getDenominator() const;
		void setDenominator(int denominator);
		[[nodiscard]] double compute() const;
	};
} // namespace Math
