def printGrid(grid):
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            print(grid[i][j], end = " ")

        print()

numberOfTestcases = int(input())

for testCase in range(numberOfTestcases):
    n, m = list(map(int ,input().split(" ")))
    grid = [[] * m] * n

    for i in range(n):
        grid[i] = list(map(int, input().split(" ")))

    
