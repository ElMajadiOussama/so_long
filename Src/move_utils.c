#include "../Incl/so_long.h"
void	move_right_utils(t_data *my_struct)
{
	if (my_struct->matrix[my_struct->i][my_struct->j + 1] == 'E' && my_struct->coin == 0)
		return (quit(my_struct));
	else if (my_struct->matrix[my_struct->i][my_struct->j + 1] == 'E' && my_struct->coin != 0)
	{
		my_struct->matrix[my_struct->i][my_struct->j] = '0';
		my_struct->matrix[my_struct->i][my_struct->j + 1] = 'X';
	}

}

void	move_left_utils(t_data *my_struct)
{
    if (my_struct->matrix[my_struct->i - 1][my_struct->j] == '0')
	{
		my_struct->matrix[my_struct->i][my_struct->j] = '0';
		my_struct->matrix[my_struct->i][my_struct->j - 1] = 'P';
	}

}

void	move_up_utils(t_data *my_struct)
{
	if (my_struct->matrix[my_struct->i - 1][my_struct->j] == '0')
	{
		my_struct->matrix[my_struct->i][my_struct->j] = '0';
		my_struct->matrix[my_struct->i - 1][my_struct->j] = 'P';
	}
}

void	move_down_utils(t_data *my_struct)
{
	if (my_struct->matrix[my_struct->i + 1][my_struct->j] == '0')
	{
		my_struct->matrix[my_struct->i][my_struct->j] = '0';
		my_struct->matrix[my_struct->i + 1][my_struct->j] = 'P';
	}
}
