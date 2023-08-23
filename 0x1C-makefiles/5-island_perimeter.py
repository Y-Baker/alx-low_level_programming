#!/usr/bin/python3

"""New Module For Island Problem"""

def island_perimeter(grid):
    """
    Return the perimeter of the rectangle island in the grid
    grid: list of list of int
    - 0 is water
    - 1 is land
    """
    max_width = 0
    num_width = 0
    max_height = 0
    num_heigt = 0
    size_grid = len(grid)

    for row in range(size_grid):
        for col in range(size_grid):
            if grid[row][col] == 1:
                num_width += 1
            if grid[col][row] == 1:
                num_heigt += 1
        if num_width > max_width:
            max_width = num_width
        if num_heigt > max_height:
            max_height = num_heigt
        num_width = num_heigt = 0
    return 2 * (max_width + max_height)
