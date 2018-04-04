def words_to_object(s):
    s = s.split()
    res = '['
    names = []
    ids = []
    for i, item in enumerate(s):
        if i % 2 == 0:
            names.append(item)
        else:
            ids.append(item)
    for i, name in enumerate(names):
        ling = "{name: '" + name + "', id: '" + ids[i] + "'}, "
        res += ling
    res = res[:-2]
    res += ']'
    return res


if __name__ == '__main__':
    while True:
        prob = raw_input('enter expression: \n')
        print(words_to_object(prob))
