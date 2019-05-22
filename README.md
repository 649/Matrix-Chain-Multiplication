# Matrix Chain Multiplication

> Author: [@037](https://twitter.com/037)

### Compile
```
sudo g++ -std=c++11 -o MatrixMult.exe MatrixMult.cpp
```

### Input structure
The input has the following format. The first number, n >= 1, in the test case will tell you how many matrices are in the sequence. The first number will be then followed by n + 1 numbers indicating the size of the dimensions of the matrices. Recall that the given information is enough to fully specify the dimensions of the matrices to be multiplied.

### Output structure
First, you need to output the minimum number of scalar multiplications needed to multiply the given matrices. Then, print the matrix multiplication sequence, via parentheses, that minimizes the total number of number multiplications. Each matrix should be named A#, where # is the matrix number starting at 0 (zero) and ending at n-1. See the examples below.

### Example
```
2
2 3 5
30
(A0A1)
```

```
3
10 100 5 50
7500
((A0A1)A2)
```

```
3
10 30 5 60
4500
((A0A1)A2)
```

```
6
30 35 15 5 10 20 25
15125
((A0(A1A2))((A3A4)A5))
```