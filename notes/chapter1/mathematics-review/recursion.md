# 1.3. Recursion

A recursive function calls itself/is defined in terms of itself. Such as f(x) = 2f(x-1) + x^2

**Using recursion for numerical calculations is usually a bad idea. We have done so to illustrate the basic points.**

## Base Case - Lines 1 and 2

Lines 1 and 2 handle the base case. Defining the f(x) function means nothing without knowing that f(0) = 0, or the base case.

## Recursive Call - Line 3

The recusrive call is made in the third line.

"These considerations lead to the first two fundamental rules of recursion:

1. Base cases. You must always have some base cases, which can be solved without recursion.

2. Making progress. For the cases that are to be solved recursively, the recursive call must always be to a case that makes progress toward a base case."

Non mathematical recursion example: A dictionary when you do not understand the definition of a given word, so you look up words recursviley in the definition to understand.

The mod operator is expensive because n%x = n - [n/x] * x

**Procedure** is known as a function that returns void.

### The four basic rules of recursion

1. *Base cases.* You must always have **some** base cases, which can be solved **without** recursion.

2. *Making progress.* For the cases that are to be solved recursively, the recursive call must always be to a case that makes progress toward a base case.

3. *Design rule.* Assume that all the recursive calls work.

4. *Comnpund interest rule.* Never duplicate work by solving the same instance of a problem in separate recursive calls.
