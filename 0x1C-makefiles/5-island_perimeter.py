#!/usr/bin/python3

"""New Module For Island Problem"""


def island_perimeter(grid):
    """
    Return the perimeter of the rectangle island in the grid
    grid: list of list of int
    - 0 is water
    - 1 is land
    """
    num = 0
    max_width = 0
    max_height = 0

    for row in grid:
        for item in row:
            if item == 1:
                num += 1
        if num > max_width:
            max_width = num
        num = 0

    for row in range(len(grid[0])):
        for col in range(len(grid)):
            if grid[col][row] == 1:
                num += 1
        if num > max_height:
            max_height = num
        num = 0

    return 2 * (max_width + max_height)
