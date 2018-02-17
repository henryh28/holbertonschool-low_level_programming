#!/usr/bin/python3
""" Return perimeter of island """


def island_perimeter(grid):
    """ Return perimeter of island """
    perimeter, connections = 0, 0

    for i in range(len(grid)):
        for j in range(len(grid)):            
            if grid[i][j] == 1:
                perimeter += 4

                if i != 0 and grid[i-1][j] == 1:
                    connections += 1
                if j != 0 and grid[i][j-1] == 1:
                    connections += 1

    return(perimeter - (2 * connections))
