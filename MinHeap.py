def MinHeap(i, x):
    p = left_h(x)
    q = right_h(x)
    if p < len(i) and i[p] < i[x]:
        low = p
    else:
        low = x
    if q < len(i) and i[q] < i[low]:
        low = q
    if low != x:
        i[x], i[low] = i[low], i[x]
        MinHeap(i, low)

def left_h(x):
    return 2 * x + 1

def right_h(x):
    return 2 * x + 2

def createHeap(i):
    a = int((len(i)//2)-1)
    for x in range(a, -1, -1):
        MinHeap(i, x)

i = [12, 10, 2, 24, 1, 0]
createHeap(i)
print(i)