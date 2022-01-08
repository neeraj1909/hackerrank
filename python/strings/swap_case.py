def swap_case(s):
    result = []
    for word in s.split(' '):
        temp = []
        for s in word:
            if ord(s) >= 65 and ord(s) <= 90:
                temp.append(s.lower())
            elif ord(s) >= 97 and ord(s) <= 122:
                temp.append(s.upper())
            else:
                temp.append(s)
        result.append(''.join(temp))
    return ' '.join(result)

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
    