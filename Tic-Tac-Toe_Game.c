
#include <stdio.h>

void displayBoard(char board[3][3])
{
    int i, j;

    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %c ", board[i][j]);

            if (j < 2)
                printf("|");
        }

        printf("\n");
        if (i < 2)
            printf("---+---+---\n");
    }
    printf("\n");
}

int checkWinner(char board[3][3])
{
    int i;

    // Check rows and columns
    for (i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return 1;

        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return 1;
    }

    // Check diagonals
    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return 1;

    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return 1;

    return 0;
}

int main()
{
    char board[3][3];
    char player = 'X';
    int i, j, row, col, moves = 0;

    // Initialize the board
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }

    printf("===== TIC-TAC-TOE =====\n");
    printf("Player 1: X\n");
    printf("Player 2: O\n");
    printf("Enter row and column from 1 to 3.\n");

    while (1)
    {
        displayBoard(board);

        printf("Player %c, enter row and column: ", player);

        if (scanf("%d %d", &row, &col) != 2)
        {
            printf("Invalid input. Enter two numbers.\n");

            while (getchar() != '\n')
                ;

            continue;
        }

        // Convert to array indexes
        row--;
        col--;

        // Check valid position
        if (row < 0 || row >= 3 || col < 0 || col >= 3)
        {
            printf("Invalid position! Use numbers from 1 to 3.\n");
            continue;
        }

        // Check whether the cell is empty
        if (board[row][col] != ' ')
        {
            printf("That cell is already occupied. Try again.\n");
            continue;
        }

        board[row][col] = player;
        moves++;

        // Check for winner
        if (checkWinner(board))
        {
            displayBoard(board);
            printf("Player %c wins!\n", player);
            break;
        }

        // Check for draw
        if (moves == 9)
        {
            displayBoard(board);
            printf("It's a draw!\n");
            break;
        }

        // Switch players
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    return 0;
}
