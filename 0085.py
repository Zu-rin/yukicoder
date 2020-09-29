def main():
    a, b, c = map(int, input().split())
    if a > b:
        a, b = b, a
    if (a == 1 and b != 2) or (a & b) & 1:
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    main()