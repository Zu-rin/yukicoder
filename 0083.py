def main():
    num = int(input())
    ans = ""
    if num & 1:
        ans += "7"
        num -= 3
    ans += "1" * (num >> 1)
    print(ans)
        

if __name__ == "__main__":
    main()