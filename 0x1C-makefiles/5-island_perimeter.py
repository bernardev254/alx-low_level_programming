#!/usr/bin/python3
"""
Module for island_perimeter() method
"""


def recur(a, b, matrix, perimeter):
    steps = [
        (0, 1),
        (1, 0),
        (0, -1),
        (-1, 0)
        ]
    for (ax, bx) in steps:
        new_a = ax + a
        new_b = bx + b
        if outside_grid(new_a, new_b, matrix):
            continue
        neibour = matrix[new_a][new_b]
        if neibour == 1:
            perimeter -= 1

    return perimeter


def outside_grid(a, b, matrix):
    if a < 0 or b < 0 or a > len(matrix) - 1 or b > len(matrix) - 1:
        return True
    return False


def island_perimeter(grid):
    """
    Computers the length of the perimeter of an island.
    """
    perimeter = 0
    for x, row in enumerate(grid):
        for y, cell in enumerate(row):
            cell_perim = 0            
            if cell == 1:
                cell_perim = 4
                cell_perim = recur(x, y, grid, cell_perim)
            perimeter += cell_perim                

    return perimeter
