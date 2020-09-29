def Half(a):
    return (a >> 1) + (a & 1)

def main():
    a, b = map(int, input().split())
    if a == b:
        ans = (a >> 1) * (a >> 1) + (a & 1) * Half(a)
    else:
        ans = max((a >> 1) * b + (a & 1) * Half(b), (b >> 1) * a + (b & 1) * Half(a))
    print(ans - 1)

if __name__ == "__main__":
    main()