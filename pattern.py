for i in range(3):
    for j in range(3):
        print(" * ",end=' ')
        j-=1
    print("\n")


def p1(n):
    for x in range(0, n):
        print('* ' * n)


def p2(n):
    for x in range(0, n):
        print(' ' * x, end='')
        for y in range(0, n - x):
            print(str(n - x - y) + ' ', end='')
        print()


def p3(n):
    for x in range(1, n + 1):
        for y in range(1, n + 1):
            if x == y or x + y == n + 1:
                print('x ', end='')
            else:
                print('  ', end='')
        print()


print('-----------------------')
p1(5)
print('-----------------------')
p2(5)
print('-----------------------')
p3(5)
print('-----------------------')