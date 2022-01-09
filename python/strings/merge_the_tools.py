def merge_the_tools(string, k):
    # your code goes here
    for i in range(0, len(string), k):
        sub_string = string[i: i+k]
        result = []
        for i in range(len(sub_string)):
            if sub_string[i] not in result:
                result.append(sub_string[i])
        result = ''.join(result)
        print(f'{result}')

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
    