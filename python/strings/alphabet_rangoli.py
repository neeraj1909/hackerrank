def print_rangoli(size):
    # your code goes here
    width = 4 * size - 3
    alpha = 'abcdefghijklmnopqrstuvwxyz'
    
    z = list(range(size))[::-1] + list(range(1, size))
    
    for i in z:
        a, b = alpha[size-1:i:-1], alpha[i:size]
        print('-'.join(a + b).center(width, '-'))
    
if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
    