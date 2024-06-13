for x in range(0, 5):
    print('* ' * 5)
print('-----------------------')
for i in range(5):
    for j in range(i):
        print('  ', end='')
    for j in range(5 - i, 0, -1):
        print(j, end=' ')
    print()
print('-----------------------')
for z in range(1, 5 + 1):
    for y in range(1, 5 + 1):
        if z == y or z + y == 5 + 1:
            print('x ', end='')
        else:
            print('  ', end='')
    print()