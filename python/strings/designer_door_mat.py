# Enter your code here. Read input from STDIN. Print output to STDOUT
def design_pattern(n, m):
    pattern = '.|.'
    for i in range(1, n + 1):
        # code here
        if i < (n + 1) // 2:
            length_of_pattern = 2 * i - 1
            length_of_dashes = (m - 3 * length_of_pattern) // 2
            print('-' * length_of_dashes + pattern * length_of_pattern + '-' * length_of_dashes)
        elif i > (n + 1) // 2:
            length_of_dashes = (i - (n + 1) // 2) * 3
            length_of_pattern = (m - (2 * length_of_dashes)) // 3
            print('-' * length_of_dashes + pattern * length_of_pattern + '-' * length_of_dashes)
        else:
            length_of_dashes = (m - 7) // 2
            print('-' * length_of_dashes + 'WELCOME' + '-' * length_of_dashes)

if __name__ == '__main__':
    n, m = map(int, input().split())
    design_pattern(n, m)
    