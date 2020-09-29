def main():
    input()
    d = list(map(int, input().split()))
    ans = m = 0
    for i in range(7):
        if m <= d.count(i):
            m = d.count(i)
            ans = i
    print(ans)

if __name__ == "__main__":
    main()