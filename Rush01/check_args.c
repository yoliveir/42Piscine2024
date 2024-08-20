/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:11:01 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/17 17:50:46 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include <unistd.h>
#include <stdlib.h>

int check_args(char *args) {
    int len = 0;
    int expected_length = SIZE * SIZE * 2 - 1; // (size*size) numbers with (size-1) spaces

    // Calculate length
    while (args[len] != '\0') {
        len++;
    }
    if (len != expected_length) return 0;

    // Validate characters
    int i = 0;
    while (i < len) {
        if (i % 2 == 0) {
            if (args[i] < '1' || args[i] > '9') return 0; // Changed to '9' for SIZE 9
        } else {
            if (args[i] != ' ') return 0;
        }
        i++;
    }
    return 1;
}

void parse_args(char *args, int clues[SIZE][SIZE]) {
    int index = 0;
    int i = 0;
    int j = 0;

    while (i < SIZE) {
        while (j < SIZE) {
            clues[i][j] = args[index] - '0';
            index += 2; // Skip number and space
            j++;
        }
        j = 0; // Reset column index
        i++;
    }
}

void initialize_grid(int grid[SIZE][SIZE]) {
    int i = 0;

    while (i < SIZE * SIZE) {
        grid[i / SIZE][i % SIZE] = 0;
        i++;
    }
}

