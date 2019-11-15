#!/usr/bin/python3


def island_perimeter(grid):
    perimeter = 0
    maxidx = len(grid) - 1
    vaxvertical = 0
    for idx1, vertical in enumerate(grid):
        for idx2, horizontal in enumerate(vertical):
            maxvertical = len(vertical) - 1
            if horizontal == 1:
                if idx1 != 0 and grid[idx1 - 1][idx2] == 0:
                    perimeter += 1
                if idx1 != maxidx and grid[idx1 + 1][idx2] == 0:
                    perimeter += 1
                if idx2 != 0 and grid[idx1][idx2 - 1] == 0:
                    perimeter += 1
                if idx2 == 0:
                    perimeter += 1
                if idx2 != maxvertical and grid[idx1][idx2 + 1] == 0:
                    perimeter += 1
            else:
                pass
    return (perimeter)
