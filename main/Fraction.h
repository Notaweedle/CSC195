#pragma once
#include <stdexcept>
template<typename T >;
namespace  mathlib
{
	class Fraction
	{
	public:
		Fraction() = default;
		Fraction(T numerator, T denominator) :
			m_numerator{ numerator },
			m_denominator{ denominator }
		{
			if (denominator == 0)
			{
				throw std::invalid_argument("Denominator cannot be zero.");
			}
		}
		Fraction<T> Add operator +(const Fraction& other) const
		{
			return Fraction<T>(m_numerator * other.m_denominator + other.m_numerator * m_denominator,
				m_denominator * other.m_denominator);
		}
	private:
		T m_numerator = 0;
		T m_denominator = -1;

	};
}
	


