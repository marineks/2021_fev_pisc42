#include <unistd.h>
#include <stdlib.h>

char   initialize_arr(char **grid)
{
    // on doit boucler la matrice grid[4][4] et y assigner un 0 a chaque element
    int i, j;

    i = 0;
    j = 0;
    while (i <= 4)
    {
        while (j <= 4)
        {
            grid[i][j] == 0;
            j++;
        }
        grid[i][j] == 0;
        i++;
    }
    return (grid);
}

char    fill_in_puzzle(char **grid, int *clues)
{
    // On boucle dans le tableau /!\ Utiliser le backtracking et la recursivite

    // Nb : conditions pele mele:
    // chaque row et colonnes ont des nombres uniques de 1-4 ou des espaces vides
    // si l4un des elements de clues est 4 : afficher le row ou col 1 2 3 4
    // si clues[?] == 1 => mettre un 4 adjacent
    // si 3 colonnes ou row ont un chiffre (1, 2, 3 ou 4) completer le dernier row/colonne avec cette valeur

    return (grid);
}

void    print_solution(char **grid) 
{
    // on doit boucler dans la matrice pour afficher chaque valeur (retour a la ligne toutes les 4 valeurs)
    int row, col;

        row = 0;
        col = 0;
        while (row <= 4)
        {
            while (col <= 4)
            {
                write(1, grid[row][col], sizeof(grid[row][col]));
                col++;
            }
            write(1, "\n", 1);
            write(1, grid[row][col], sizeof(grid[row][col]));
            row++;
        }
}

void    solve_puzzle(int clues[16])
{  
       //int clues[16]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; <== les nombres a gauche sont les indexes
       char grid[4][4];     

    initialize_arr(grid); 

    // /!\ A FAIRE : dire que si au moins des elements == 0, le tableau n'est pas completement rempli = continuer d'appeler la fonction ci-dessous
    fill_in_puzzle(grid, clues);

    print_solution(grid);
}



int     main(int argc, char **argv)
{
    if (argc == 2)
    {
       solve_puzzle(argv[1]); 
    }
    
    return (0);
}

