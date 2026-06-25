// tic toc toe simple game
#include <stdio.h>

char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

void displayBoard()
{
    int i, j;

    printf("\nTIC TAC TOE\n\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf(" %c ", board[i][j]);

            if(j < 2)
                printf("|");
        }

        printf("\n");

        if(i < 2)
            printf("----|----|----\n");
    }

    printf("\n");
}

int checkWin()
{
    int i;

    for(i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] &&
           board[i][1] == board[i][2])
            return 1;

        if(board[0][i] == board[1][i] &&
           board[1][i] == board[2][i])
            return 1;
    }

    if(board[0][0] == board[1][1] &&
       board[1][1] == board[2][2])
        return 1;

    if(board[0][2] == board[1][1] &&
       board[1][1] == board[2][0])
        return 1;

    return 0;
}

int main()
{
    int choice, player = 1, moves = 0;
    char mark;

    printf("Welcome to Tic Tac Toe!\n");

    while(moves < 9)
    {
        displayBoard();

        mark = (player == 1) ? 'X' : 'O';

        printf("Player %d (%c), Enter Position: ", player, mark);
        scanf("%d", &choice);

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if(choice >= 1 && choice <= 9 &&
           board[row][col] != 'X' &&
           board[row][col] != 'O')
        {
            board[row][col] = mark;
            moves++;

            if(checkWin())
            {
                displayBoard();
                printf("\nPlayer %d Wins!\n", player);
                return 0;
            }

            player = (player == 1) ? 2 : 1;
        }
        else
        {
            printf("Invalid Move! Try Again.\n");
        }
    }

    displayBoard();
    printf("\nMatch Draw!\n");

    return 0;
}