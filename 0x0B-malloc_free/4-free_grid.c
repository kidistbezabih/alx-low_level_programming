#include <stdlib.h>

/**
 * free_grid - Function
 * @grid: The 2D array 
 * @height: The height 
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;

i = 0;
// while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
