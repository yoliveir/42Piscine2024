#ifndef COMMON_H
#define COMMON_H

// Define SIZE
#define SIZE 9

// Function prototypes
int check_args(char *args);
void parse_args(char *args, int clues[SIZE][SIZE]);
void initialize_grid(int grid[SIZE][SIZE]);
int solve(int grid[SIZE][SIZE], int clues[SIZE][SIZE], int pos);
void print_grid(int grid[SIZE][SIZE]);
void print_error();

// Print functions
void write_char(char c);
void write_num(int num);

// Additional function prototypes
int is_valid(int grid[SIZE][SIZE], int clues[SIZE][SIZE]);
int can_place(int grid[SIZE][SIZE], int row, int col, int num);
int check_clues(int grid[SIZE][SIZE], int clues[SIZE][SIZE]);

#endif // COMMON_H

