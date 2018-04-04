def solve(alp, bet):
    updn = (0, 1, 8, 11, 69, 88, 96, 101, 111, 181, 609, 619, 689, 808, 818, 888, 906, 916, 986, 1001, 1111, 1691, 1881, 1961, 6009, 6119, 6699, 6889, 6969, 8008, 8118, 8698, 8888, 8968, 9006, 9116, 9696, 9886, 9966)
    count = 0
    for i in range(alp, bet):
        if i in updn:
            count += 1
    return count


# this will create a list of numbers with selecting amount of digits need to figure
def gen_strobogrammatic(n):
    """
    :type n: int
    :rtype: List[str]
    """
    result = helper(n, n)
    return result


def helper(n, length):
    if n == 0:
        return [""]
    if n == 1:
        return ["1", "0", "8"]
    middles = helper(n-2, length)
    result = []
    for middle in middles:
        if n != length:
            result.append("0" + middle + "0")
        result.append("8" + middle + "8")
        result.append("1" + middle + "1")
        result.append("9" + middle + "6")
        result.append("6" + middle + "9")
    return result


print("n = 2: \n", sorted(gen_strobogrammatic(7)))


if __name__ == '__main__':
    while True:
        prob = raw_input('enter expression: \n').split()
        print(solve(int(prob[0]), int(prob[1])))
