from math import gcd
def solution(numer1, denom1, numer2, denom2):
    numerator = numer1 * denom2 + numer2 * denom1
    denominator = denom1 * denom2

    common_divisor = gcd(numerator, denominator)
    
    reduced_numerator = numerator / common_divisor
    reduced_denominator = denominator / common_divisor
    answer = [reduced_numerator,reduced_denominator]
    return answer