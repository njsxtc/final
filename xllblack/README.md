# Final Exam

In this final exam you will compare the Black model lognormal payoff to a Gamma payoff.
The deliverable is an add-in, documentation of the functions you write, and a spreadsheet demonstrating the implied volatilty curve.

The Gamma distribution has density function f(x) = x^(a - 1) exp(-b x) b^a/Gamma(a), x > 0,
where Gamma(a) = int_0^infty x^(a - 1) exp(-x) dx.
It has mean a/b and variance a/b^2.

The Black distribution is f exp(s Z - s^2/2), where Z is standard normal and s = sigma sqrt(t).  
It has mean f and variance f^2 (exp(s^2) - 1).

Solving f = a/b and f^2(exp(s^2) - 1) = a/b^2 gives
a = 1/(exp(s^2) - 1) and b = (exp(s^2) - 1)/f.

You will find the implied volatility curve of the Gamma distribution with a and b parameterized by f and s.

Fork ... to your github repository.
Clone a local copy.
Make sure the build is working.
Implement the value of a put option.

Use existing code to compute the Black implied volatility.

Generate documentation using Sandcastle Help File Builder.
Commit your work.
Issue a pull request.

