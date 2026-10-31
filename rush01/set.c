
void	set_clues(char **puzzle_board, char **clues)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= 4)
	{
		puzzle_board[0][i] = clues[0][j];
		puzzle_board[5][i] = clues[1][j];
		puzzle_board[i][0] = clues[2][j];
		puzzle_board[i][5] = clues[3][j];
		i++;
		j++;
	}
}