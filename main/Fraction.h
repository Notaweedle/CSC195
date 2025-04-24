#pragma once
#include <stdexcept>
#include <iostream>
#include <cmath> // For abs()
namespace mathlib
{
	template<typename T >

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
		Fraction<T>  operator +(const Fraction& other) const // Add
		{
			return Fraction<T>(m_numerator * other.m_denominator + other.m_numerator * m_denominator,
				m_denominator * other.m_denominator);
		}
		Fraction<T>  operator *(const Fraction& other) const // Multiply
		{
			return Fraction<T>(m_numerator * other.m_numerator,
				m_denominator * other.m_denominator);
		}
		bool operator ==(const Fraction& other) const // Equal
		{
			return (m_numerator * other.m_denominator == m_denominator * other.m_numerator);
		}
		bool operator >(const Fraction& other) const // Greater Than
		{
			return (m_numerator * other.m_denominator > m_denominator * other.m_numerator);
		}
		bool operator <(const Fraction& other) const // Lesser Then
		{
			return (m_numerator * other.m_denominator < m_denominator * other.m_numerator);
		}
		bool operator >=(const Fraction& other) const // Greater Than Or Equal
		{
			return (m_numerator * other.m_denominator >= m_denominator * other.m_numerator);
		}
		bool operator <=(const Fraction& other) const // Lesser Than Or Equal
		{
			return (m_numerator * other.m_denominator <= m_denominator * other.m_numerator);
		}
		friend std::ostream& operator << (std::ostream& ostream, const Fraction<T>& fraction)
		{
			ostream << fraction.m_numerator << "/" << fraction.m_denominator;
			return ostream;
		}
		friend std::istream& operator>>(std::istream& istream, Fraction<T>& fraction)
		{
			char separator;

			// Read numerator, separator, then denominator
			istream >> fraction.m_numerator >> separator;

			if (separator != '/' && separator != '|') { // optional extra safety
				istream.setstate(std::ios::failbit); // mark stream as bad
				return istream;
			}

			istream >> fraction.m_denominator;

			if (fraction.m_denominator == 0) {
				throw std::invalid_argument("Denominator cannot be zero.");
			}

			return istream;
		}

		Fraction<T> Simplify() const {
			T gcd = findGCD(abs(m_numerator), abs(m_denominator));
			T simplifiedNumerator = m_numerator / gcd;
			T simplifiedDenominator = m_denominator / gcd;

			if (simplifiedDenominator < 0) {
				simplifiedNumerator = -simplifiedNumerator;
				simplifiedDenominator = -simplifiedDenominator;
			}

			return Fraction(simplifiedNumerator, simplifiedDenominator);
		}

		T findGCD(T a, T b) const {
			//Euclidean algorithm to find GCD
			while (b != 0) {
				int temp = b;
				b = a % b;
				a = temp;
			}

			return a;
		}
		float ToFloat()
		{
			if (m_denominator == 0)
			{
				throw std::invalid_argument("Denominator cannot be zero.");
			}
			return static_cast<float>(m_numerator) / m_denominator;
		}


	private:
		T m_numerator = 0;
		T m_denominator = -1;

	};





}
