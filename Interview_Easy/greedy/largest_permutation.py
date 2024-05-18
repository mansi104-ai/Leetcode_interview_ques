class Solution:

    def solve(self, A, B):
        i=0
        _max = len(A)
        d = { x: i for (i, x) in enumerate(A) }
        
        while B and i < len(A):
            j = d[_max]
            if i == j:
                pass
            else:
                B-= 1

                A[i], A[j] = A[j], A[i]
                d[A[i]] = i
                d[A[j]] = j
            i += 1
               _max -= 1

        return A
