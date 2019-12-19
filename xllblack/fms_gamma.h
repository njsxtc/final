// fms_gamma.h - Gamma distribution
#pragma once
#include <cmath>

//
// Cephes library declarations
//

// gamma
// int_0^infty t^{a - 1} exp(-a t) dt
extern "C" double gamma(double a);

// incomplete gamma function 
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

}

namespace fms {

}
