import math


def divisors(n):

    def divisorGen(n):
        divisors = []
        for i in range(1, int(math.sqrt(n) + 1)):
            if n % i == 0:
                yield i
                if i * i != n:
                    divisors.append(n / i)
        for divisor in reversed(divisors):
            yield divisor
    res = list(divisorGen(n))
    return len(res)
