# 1.2.3. Series

## Important formulas
- The sum from i=0 -> n of: 2^i = 2^(n+1) - 1
- The companion of the above is:
The sum from i=0 -> n of: a^i = (a^(n+1) - 1) / (a - 1)
In the formula involving a. If 0 < a < 1, then:
The sum from i=0 -> n of: a^i <= (1 / 1 - a)

The above formulas are the "geometric series" formulas.

We can derive the last formula for The sum from i=0 -> infinity of: a^i (0 < a < 1) in the following manner: Let S be the sum. Then:

S = 1 + a + a^2 + a^3 + a^4 + a^5 + ...
Then

aS = a + a^2 + a^3 + a^4 + a^5 + ...

We can subtract aS from S becuase the given geometric series is convergent and not divergent. This results in virtually all the terms on the right or from aS being canceled.

S - aS = 1
which implies that 

S = 1/(1 - a)

----

The above technique can be used to compute the sum of i/(2^i) from i=1 to infinity. **This sum occurs frequently** It can be written as:

S = 1/2 + 2/2^2 + 3/2^3 + 4/2^4 + 5/2^5 + ...

then multiply by 2:

2S = 1 + 2/2 + 3/2^2 + 4/2^3 + 5/2^4 + 6/2^5 ...

Subtracting these two equations yields:

2S - S 

S = 1 + 1/2 + 1/2^2 + 1/2^3 + 1/2^4 + 1/2^5 + ...

Thus, S = 2.

-----

Another type of common series in analysis is the **arithmetic series**. Any such series can be evaluated from the basic formula:

**The sum from i=1 to N of i = N(N + 1) / 2 ~= N^2 / 2** Common

For instance, to find the sum of 2 + 5 + 8 + ... + (3k - 1), you can rewrite it as 3(1 + 2 + 3 + ... + K) - (1 + 1 + 1 + ... + 1), which is equal to:
3k(k+1)/2 - k. Another way to remember this is to add the first and last terms (total 3k + 1), the second and next to last terms (total 3k - 1), and so on. Since there are k/2 of these pairs, the total sum is k(3k+1)/2.


**Uncommon, but important arithmetic series**
1. The sum from i=1 to N of i^2 = N(N + 1)(2N + 1) / 6 ~= N^3 / 3
2. The sum from i=1 to N of i^k ~= N^(K + 1) / |k + 1|       k != 1
	When k = -1, the second formula is not valid. We then need the following formula, which is **used far more in computer science that in other mathematical disciplines**. 
**The numbers, H sub n or Hn, are known as harmonic numbers**, and the sum is known as a **harmonic sum**.
The error in the following approximation tends to y ~= 0.57721566, which is known as **Euler's constant** and is denoted as e:

Hn = The sum from i=1 to N of 1/i =~ log base e (N)
--------------

The following two formulas are just general algebraic manipulations.

1. The sum from i=1 to N of the function f(N) = N*f(N)
2. The sum from i=n sub 0 to N of the function f(i) = the sum from i=1 to N of the function f(i) - the sum from i=1 to n sub 0 of the function f(i)


## TODO: Add screenshots of the formulas
