/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:11:55 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/17 17:51:10 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

int check_clues(int grid[SIZE][SIZE], int clues[SIZE][SIZE]) {
    int visible, max, i, j;

    i = 0;
    while (i < SIZE) {
        // Check rows from left to right
        visible = 0;
        max = 0;
        j = 0;
        while (j < SIZE) {
            if (grid[i][j] > max) {
                max = grid[i][j];
                visible++;
            }
            j++;
        }
        if (visible != clues[2][i]) return 0;

        // Check rows from right to left
        visible = 0;
        max = 0;
        j = SIZE - 1;
        while (j >= 0) {
            if (grid[i][j] > max) {
                max = grid[i][j];
                visible++;
            }
            j--;
        }
        if (visible != clues[3][i]) return 0;

        i++;
    }

    i = 0;
    while (i < SIZE) {
        // Check columns from top to bottom
        visible = 0;
        max = 0;
        j = 0;
        while (j < SIZE) {
            if (grid[j][i] > max) {
                max = grid[j][i];
                visible++;
            }
            j++;
        }
        if (visible != clues[0][i]) return 0;

        // Check columns from bottom to top
        visible = 0;
        max = 0;
        j = SIZE - 1;
        while (j >= 0) {
            if (grid[j][i] > max) {
                max = grid[j][i];
                visible++;
            }
            j--;
        }
        if (visible != clues[1][i]) return 0;

        i++;
    }

    return 1;
}

