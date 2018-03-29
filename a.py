def solve(s):
    res = ''
    lst = s.split('(')
    lst = list(filter(None, lst))
    stp = False
    while len(lst) > 0:
        print(res, lst)

        if lst[0][-1] == '-' or lst[0] == '-':
            if not lst:
                break
            res += lst.pop(0)
            for item in lst:
                if '-' in item and not stp:
                    lst[lst.index(item)] = item = item.replace('-', '+')
                    stp = True
                if '+' in item:
                    lst[lst.index(item)] = item = item.replace('+', '-')
                    stp = True
                if ')' in item:
                    if item[-1] and item[-1] == '-':
                        lst[lst.index(item)] = item = item.replace(')', '')
                        stp = False
                        break
                    # if item[-1] and item[-1] == '+':

                    lst[lst.index(item)] = item = item.replace(')', '')
                    stp = False
                    break
                res += lst.pop(0)
        elif lst[0][-1] == '+' or lst[0] == '+':
            for item in lst:
                if '+' in item and not stp:
                    lst[lst.index(item)] = item = item.replace('+', '-')
                    stp = True
        elif ')' in lst[0]:
            res += lst.pop(0).replace(')', '')
            continue
        if not lst:
            break
        res += lst.pop(0)
        print(res, lst)
    for _ in range(3):
        while '-+' in res:
            res = res.replace('-+', '+')
            print(res)
        while '+-' in res:
            res = res.replace('+-', '-')
            print(res)
        while '--' in res:
            res = res.replace('--', '+')
            print(res)
        while '++' in res:
            res = res.replace('++', '+')
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

"""
Test.assert_equals(solve("a-(b)"),"a-b")
Test.assert_equals(solve("a-(-b)"),"a+b")
Test.assert_equals(solve("a+(b)"),"a+b")
Test.assert_equals(solve("a+(-b)"),"a-b")
Test.assert_equals(solve("(((((((((-((-(((n))))))))))))))"),"n")
Test.assert_equals(solve("(((a-((((-(-(f)))))))))"),"a-f")
Test.assert_equals(solve("((((-(-(-(-(m-g))))))))"),"m-g")
Test.assert_equals(solve("(((((((m-(-(((((t)))))))))))))"),"m+t")
Test.assert_equals(solve("-x"),"-x")
Test.assert_equals(solve("-(-(x))"),"x")
Test.assert_equals(solve("-((-x))"),"x")
Test.assert_equals(solve("-(-(-x))"),"-x")
Test.assert_equals(solve("-(-(x-y))"),"x-y")
Test.assert_equals(solve("-(x-y)"),"-x+y")
Test.assert_equals(solve("x-(y+z)"),"x-y-z")
Test.assert_equals(solve("x-(y-z)"),"x-y+z")
Test.assert_equals(solve("x-(-y-z)"),"x+y+z")
Test.assert_equals(solve("x-(-((-((((-((-(-(-y)))))))))))"),"x-y")
# Test.assert_equals(solve("u-(v-w+(x+y))-z"),"u-v+w-x-y-z")
Test.assert_equals(solve("x-(s-(y-z))-(a+b)"),"x-s+y-z-a-b")
Test.assert_equals(solve("u+(g+v)+(r+t)"),"u+g+v+r+t")
Test.assert_equals(solve("q+(s-(x-o))-(t-(w-a))"),"q+s-x+o-t+w-a")
Test.assert_equals(solve("u-(v-w-(x+y))-z"),"u-v+w+x+y-z")
Test.assert_equals(solve("v-(l+s)-(t+y)-(c+f)+(b-(n-p))"),"v-l-s-t-y-c-f+b-n+p")
"""
