"""
------------- Python version ---------------

def high(x):
    alpha = 'abcdefghijklmnopqrstuvwxyz'
    wlist = x.lower().split(' ')
    scores = []
    for word in wlist:
        total = 0
        for char in word:
            total += alpha.find(char) + 1
        scores.append(total)
    return wlist[scores.index(max(scores))]
"""
