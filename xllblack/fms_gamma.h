// fms_gamma.h - Gamma distribution
#pragma once
#include <cmath>
#include <tuple>

//
// Cephes library declarations
//

// Gamma function
// int_0^infty t^{a - 1} exp(-a t) dt
extern "C" double gamma(double a);

// Incomplete Gamma function 
// int_0^x t^{a - 1} exp(-a t) dt
extern "C" double igam(double a, double x);

namespace fms::gamma {

	// Gamma distribution: x^{a-1} exp(-b x) b^a/Gamma(a), x > 0
	inline double pdf(double x, double a, double b)
	{
		return pow(x, a - 1) * exp(-b * x) * pow(b, a) / ::gamma(a);
	}

	inline double cdf(double x, double a, double b)
	{
		return ::igam(a, b * x) / ::gamma(a);
	}

	// The Gamma distribution has density function f(x) = x ^ (a - 1) exp(-b x) b ^ a / Gamma(a), x > 0,
	// It has mean a/b and variance a/b^2.
	//
	// The Black distribution is f exp(s Z - s^2/2), where Z is standard normal and s = sigma sqrt(t).  
	// It has mean f and variance f^2 (exp(s^2) - 1).
	//
	//Solving f = a/b and f^2(exp(s^2) - 1) = a/b^2 gives
	// a = 1/(exp(s^2) - 1) and b = (exp(s^2) - 1)/f.
	inline std::pair<double, double> convert(double f, double s)
	{
		//!!! return (a, b) above
		return std::pair(f, s);
	}

	// Put value is E[(k - F)^+] = k P(F <= k) - E[F 1(F <= k)]
	// E[F 1(F <= k)] = int_0^k x f(x) dx = gamma::cdf(k, a + 1, b)
	inline double put(double f, double sigma, double k, double t)
	{
		double s = sigma * sqrt(t);

		//!!! delete this comment and the next three lines
		s = s;
		f = f;
		k = k;
		//!!! calculate put value

		return 0;
	}
}
