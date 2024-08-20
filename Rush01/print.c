/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:12:12 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/17 17:51:33 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include <unistd.h>

void print_grid(int grid[SIZE][SIZE]) {
    int i = 0;
    int j = 0;

    while (i < SIZE) {
        while (j < SIZE) {
            write_num(grid[i][j]);
            if (j < SIZE - 1) write_char(' ');
            j++;
        }
        write_char('\n');
        j = 0; // Reset column index
        i++;
    }
}

void print_error() {
    write(1, "Error\n", 6);
}

void write_char(char c) {
    write(1, &c, 1);
}

void write_num(int num) {
    char c = '0' + num;
    write(1, &c, 1);
}

