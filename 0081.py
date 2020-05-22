def main():
    num = int(input())
    ans = 0
    for i in range(num):
        k = 1
        s = input() + ".0"
        s = s.split('.')
        if s[0][0] == '-':
            k = -1
        ans += int(s[0]) * pow(10, 10)
        ans += k * int(s[1]) * pow(10, 10 - len(s[1]))
    a = str(ans)[:-10]
    b = str(ans)[-10:]
    if len(a) == 0 or a == "-":
        a += "0"
    while len(b) < 10:
        b += "0"
    print(a + "." + b)

if __name__ == "__main__":
    main()
