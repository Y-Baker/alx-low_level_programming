#!/usr/bin/python3

"""New Module For Island Problem"""


def island_perimeter(grid):
    """
    Return the perimeter of the rectangle island in the grid
    grid: list of list of int
    - 0 is water
    - 1 is land
    """
    edges = 0
    size = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
