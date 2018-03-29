def solve(s):
    res = ''
    lst = s.split('(')
    lst = list(filter(None, lst))
    while len(lst) > 0:
        print(res, lst)

        if lst[0][-1] == '-' or lst[0] == '-':
            if not lst:
                break
            res += lst.pop(0)
            for item in lst:
                if '-' in item:
                    lst[lst.index(item)] = item = item.replace('-', '+')
                elif '+' in item:
                    lst[lst.index(item)] = item = item.replace('+', '-')
                if ')' in item:
                    if item[-1] and item[-1] == '-':
                        lst[lst.index(item)] = item = item.replace(')', '')

                        break
                    lst[lst.index(item)] = item = item.replace(')', '')

                    break
                res += lst.pop(0)
        elif ')' in lst[0]:
            res += lst.pop(0).replace(')', '')
            continue
        if not lst:
            break
        res += lst.pop(0)
        print(res, lst)
    while '-+' in res:
        res = res.replace('-+', '+')
        print(res)
    while '+-' in res:
        res = res.replace('+-', '-')
        print(res)
    while '--' in res:
        res = res.replace('--', '+')
        print(res)
    # while '++' in res:
    #     res = res.replace('++', '+')
    if ')' in res:
        res = res.replace(')', '')
    while res[0] == '+':
        res = res[1:]
    if len(res) > 3 and res[0] == '-' and res[2] == '-':
        res = res[1:]
    return res


if __name__ == '__main__':
    while True:
        prob = raw_input('enter expression: \n')
        print(solve(prob))
