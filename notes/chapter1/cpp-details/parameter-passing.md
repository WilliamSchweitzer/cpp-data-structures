# 1.5.3 Parameter Passing

1. If the formal parameter should be able to change the value of the actual argument, then you **must use call-by-reference.**
2. Otherwise, the value of the actual argument cannot be changed by the formal parame-ter. If the type is a primitive type, use call-by-value. Otherwise, the type is a class type and is generally passed using call-by-constant-reference, unless it is an unusually small and easily copyable type (e.g., a type that stores two or fewer primitive types).

Put another way,
1. Call-by-value is appropriate for small objects that should not be altered by the function.
2. Call-by-constant-reference is appropriate for large objects that should not be altered by the function and are expensive to copy.
3. Call-by-reference is appropriate for all objects that may be altered by the function.

**CALL--BY-VALUE COPIES THE OBJECT**. The original object is not changed.