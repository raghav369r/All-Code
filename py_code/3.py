'''
*                   * 1  9  1
* * *           * * * 3  5  3
* * * * *   * * * * * 5  1  5
* * * * * * * * * * * 6  0  5
'''
n = int(input('Enter no of rows: '))
s = n * 4 - 6  # max no of spacws
for i in range(1, n + 1):
    l = 2 * i  # for odd no of stars
    if i == n: l = 2 * (i - 1)  # last row different
    for j in range(1, l):
        print("* ", end="")
    for k in range(1, s):
        print("  ", end="")
    if (i == n): l += 1  # for one star missed in middle
    for j in range(1, l):
        print("* ", end="")
    print("")
    s -= 4  # decrementing spaces after each row
