/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:11:29 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/17 17:52:00 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include <unistd.h>
#include <stdlib.h>

int solve(int grid[SIZE][SIZE], int clues[SIZE][SIZE], int pos) {
    if (pos == SIZE * SIZE) {
        return is_valid(grid, clues);
    }
    int row = pos / SIZE;
    int col = pos % SIZE;

    int num = 1;
    while (num <= SIZE) {
        if (can_place(grid, row, col, num)) {
            grid[row][col] = num;
            if (solve(grid, clues, pos + 1)) {
                return 1;
            }
            grid[row][col] = 0;
        }
        num++;
    }
    return 0;
}

int is_valid(int grid[SIZE][SIZE], int clues[SIZE][SIZE]) {
    return check_clues(grid, clues);
}

int can_place(int grid[SIZE][SIZE], int row, int col, int num) {
    int i = 0;
    while (i < SIZE) {
        if (grid[row][i] == num || grid[i][col] == num) {
            return 0;
        }
        i++;
    }
    return 1;
}

