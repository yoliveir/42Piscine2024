/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:10:25 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/17 17:54:57 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char **argv) {
    int clues[SIZE][SIZE];
    int grid[SIZE][SIZE];

    if (argc != 2 || !check_args(argv[1])) {
        print_error();
        return 1;
    }

    parse_args(argv[1], clues);
    initialize_grid(grid);

    if (solve(grid, clues, 0)) {
        print_grid(grid);
    } else {
        print_error();
    }

    return 0;
}

