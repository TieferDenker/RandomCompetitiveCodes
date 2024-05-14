# Problem link: https://www.hackerrank.com/challenges/crush/problem?isFullScreen=true

# Solved Partially

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'arrayManipulation' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. 2D_INTEGER_ARRAY queries
#

def arrayManipulation(n, queries):
    # Write your code here
    A = [0 for i in range(n)]
    m = len(queries)
    for i in range(0,m):
        q = queries[i]
        a = q[0]
        b = q[1]
        k = q[2]
        for j in range(a-1,b):
            A[j] = A[j] + k
    return max(A)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    queries = []

    for _ in range(m):
        queries.append(list(map(int, input().rstrip().split())))

    result = arrayManipulation(n, queries)

    fptr.write(str(result) + '\n')

    fptr.close()
