# Logarithms

## Logarithm Review
A logarithm is a mathematical function that represents the exponent to which a fixed number, known as the base, must be raised to obtain a certain number.

For example, take x^n = b. Then the logarithm base x of b is n. This is denoted as logx(b) = n. This can be read as log base x of b is equal to n.

Practical example, in base 2: Take 2^4 = 16. Then the log2(16) = 4. Or the log base 2 of 16 is equal to 4.

**Essential** All logarithms are to the base of 2 in Computer Science, unless clearly stated.

iff == if and only if

**Definition** x^n = b iff logx(b) = a 

## THEOREM 1.1.

loga(b) = logc(b) / logc(a) ; c > 0

- Proof: Let x = logc(b), y = logc(a), and z = loga(b). Then, by the definition of logarithms, c^x = b, c^y = a, and a^z = b. Combining these three equalities yields (c^y)^z = c^x = b. Therefore, x = yz, which implies z = x/y, proving the theorem. 
