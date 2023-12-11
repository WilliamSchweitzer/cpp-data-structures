# 1.2.5. Proofs

The two most common ways of proving statements in data structure analysis are proof by induction and proof by contradiction (and occasionally a proof by intimidation, by profs only). **The best way of proving that a theorem is false is by exhibiting a counterexample.**

## Proof by induction

Defintion of induction: "a means of proving a theorem by showing that if it is true of any particular case it is true of the next case in a series, and then showing that it is indeed true in one particular case." - Google/ Oxford Languages

A proof by induction has **two standard parts**. 
1. The first step is proving a *base case*. This can be done by establishing a theorem is true for some small value(s). **This step is almost always trivial**. 
2. The next step assume an *inductive hypothesis*. **Generally this means that the theorem is assumed to be true for all cases up to some limit k.**
3. Using the assumption in step 2, the theorem is then shown to be true for the next value, which is typically k + 1 (**Prove for k + 1**). *This proves the theorem (as long as k is finite).*

Take the following example using the Fibonacci numbers.

# Proof by Induction: Fibonacci Numbers  

## Base Case:
For n = 0 and n = 1, the Fibonacci numbers F(0) and F(1) are defined as 0 and 1, respectively.

Base Case 1: F(0) = 0
Base Case 2: F(1) = 1

## Inductive Step:
Assume that the Fibonacci property holds for some arbitrary positive integer k, i.e., assume that:

\[ F(k) = F(k-1) + F(k-2) \]

Now, we want to show that the property holds for k+1, i.e., we want to prove:

\[ F(k+1) = F(k) + F(k-1) \]

Starting with the assumption:

\[ F(k+1) = F(k) + F(k-1) \]

Substitute the assumed values for F(k) and F(k-1) using the induction hypothesis:

\[ F(k+1) = (F(k-1) + F(k-2)) + F(k-1) \]

Combine like terms:

\[ F(k+1) = 2 \cdot F(k-1) + F(k-2) \]

Now, we know that F(k-1) and F(k-2) both satisfy the Fibonacci property, as we assumed it to be true for k. Therefore, we can express them as:

\[ F(k-1) = F(k-2) + F(k-3) \]
\[ F(k-2) = F(k-3) + F(k-4) \]

Substitute these expressions into the equation:

\[ F(k+1) = 2 \cdot (F(k-2) + F(k-3)) + (F(k-3) + F(k-4)) \]

Combine like terms again:

\[ F(k+1) = 3 \cdot F(k-2) + 2 \cdot F(k-3) + F(k-4) \]

Continue this process until you reach the base cases (F(0) and F(1)), and each term will be expressed in terms of F(0) and F(1).

## Conclusion:
By proving the base case and showing that if the property holds for an arbitrary k, then it holds for k+1, we have established that the Fibonacci property is true for all non-negative integers

*This example was generated using ChatGPT 3.5*

---------------------------

## Proof by counterexample

The statement Fk = k^2 is false. The easiest way to prove this is to compute F11 = 114 > 11^2. You can see proof by counterexample is straight forward as the name implies you need just a counterexample.

-------------------------

## Proof by contradiction

Proof by contradiction proceeds by assuming that the theorem is false and showing that this assumption implies that some known property is false, and hence the original assumption was inccorrect thereby prooving a theorem true. A classic example is the proof that there is an infinite number of primes. To prove this, we assume that the theorem is false, so that there is some largest prime pk. Let p1, p2, ..., pk be all the primes in order and consider.

N = p1p2p3...pk+1

Clearly, N is larger than pK, by the assumption N is not prime. However, none of p1,p2, ..., pk divide N exactly, bnecause there will always be a remainder of 1. This is a contradiction, because every number is either prime or a product of primes. Therefore, the original assumption that pk is the largest prim, is false, which implies the theorem is true.
