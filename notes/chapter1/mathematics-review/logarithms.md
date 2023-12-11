# Logarithms

## Logarithm Review
A logarithm is a mathematical function that represents the exponent to which a fixed number, known as the base, must be raised to obtain a certain number.

For example, take x^n = b. Then the logarithm base x of b is n. This is denoted as logx(b) = n. This can be read as log base x of b is equal to n.

Practical example, in base 2: Take 2^4 = 16. Then the log2(16) = 4. Or the log base 2 of 16 is equal to 4.

**Essential** All logarithms are to the base of 2 in Computer Science, unless clearly stated.

iff == if and only if

**Definition** x^a = b iff logx(b) = a 

## THEOREM 1.1.

loga(b) = logc(b) / logc(a) ; c > 0

- Proof: Let x = logc(b), y = logc(a), and z = loga(b). Then, by the definition of logarithms, c^x = b, c^y = a, and a^z = b. Combining these three equalities yields (c^y)^z = c^x = b. Therefore, x = yz, which implies z = x/y, proving the theorem. 

## THEOREM 1.2.

log(ab) = log(a) + log(b)

- Proof: Let x = log(a), y = log(b), z = log(ab). Then, assuming the default base of 2, 2^x = a, 2^y = b, 2^z = ab. Combining the last three equalities yields (2^x)*(2^y)=2^z=ab. Therefore, x + y = z, which proves the theorem. 
- Knowing that x + y = z is equal to log(a) + log(b) = log(ab). We can do the following:

1. First covert the formula into exponents: 2^x + 2^y = 2^z
2. Using x^a + x^b = x^ab, we arrive at 2^(x+y) = 2^z
3. Then using x^a * x^b = x^(a+b) (Product Law), we arrive at 2^x * 2^y = 2^z OR a * b = 2^z OR ab = 2^z. Therefore, proving x + y = z or the log(ab) = log(a) + log(b)

Take this example: log(8*4) = log(8) + log(4) 

1. 2^3 + 2^2 = 2^(3+2)
2. 2^(3+2) = 2^(3+2)
3. 2^3 * 2^2 = 2^(3+2)
4. 8 * 4 = 2^5
5. 32 = 32

## Other useful formulas
- log(a/b) = log(a) - log(b)

- log(a^b) = b * log(a)

- log(x) < x for all x > 0

- log(1) = 0, log(2) = 1, log(1024) = 10, log(1048576) = 20
