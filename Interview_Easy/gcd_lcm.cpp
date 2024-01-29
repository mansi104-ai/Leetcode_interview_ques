from math import gcd

def max_difference(N):
    max_lcm = 0 
    max_gcd= 0

    for i in range(1, N + 1):
        for j in range(i + 1, N + 1):
            # Calculate LCM and GCD for each pair (i, j)
            current_lcm = (i * j) // gcd(i, j)
            current_gcd = gcd(i, j)

            # Update max_lcm and max_gcd if the current values are greater
            max_lcm = max(max_lcm, current_lcm)
            max_gcd = max(max_gcd, current_gcd)

    # Calculate the difference between the maximum LCM and maximum GCD
    difference = max_lcm - max_gcd
    return difference

N= int(input())

result = max_difference(N)
print(result)
