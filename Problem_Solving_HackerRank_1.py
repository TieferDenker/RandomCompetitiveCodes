# Problem link: https://www.hackerrank.com/challenges/dynamic-array/problem?isFullScreen=true

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'dynamicArray' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER n
#  2. 2D_INTEGER_ARRAY queries
#

def dynamicArray(n, queries):
    # Write your code here
    A = [[] for i in range(n)]
    l = len(queries)
    lastAnswer = 0
    ans = []
    for i in range(0,l):
        q = queries[i]
        qtype = q[0]
        x = q[1]
        y = q[2]
        if qtype == 1:
            idx = (x^lastAnswer)%n
            A[idx].append(y)
        else:
            idx = (x^lastAnswer)%n
            lastAnswer = A[idx][y%len(A[idx])]
            ans.append(lastAnswer)
    return ans

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    q = int(first_multiple_input[1])

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    result = dynamicArray(n, queries)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
