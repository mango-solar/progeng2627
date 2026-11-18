#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    std::srand(std::time(NULL));

    bool won = false;
    bool outMoves = false;
    int knightX, knightY;
    int moveX = 0, moveY = 0;
    int moves = 0;
    bool validMove;

    knightX = std::rand() % 8 + 1;
    knightY = std::rand() % 8 + 1;

    while ((knightX == 1 || knightX == 8) && (knightY == 1 || knightY == 8)){
        knightX = std::rand() % 8 + 1;
        knightY = std::rand() % 8 + 1;
    }

    std::cout << "Move the knight to the corner of the board within 5 moves" << std::endl;

    while ( not won && not outMoves){
        validMove = false;

        for(int row = 8;row > 0; row--){
            std::cout << row;
            for(int column = 1; column < 9; column++){

                if (column == knightX && row == knightY){
                    std::cout << "[K]";
                }
                else{
                    std::cout << "[ ]";
                }
            }

            std::cout << std::endl;
        }
        std::cout << "  1  2  3  4  5  6  7  8" << std::endl << std::endl;
        std::cout << "You have " << 5 - moves << " moves remaining" << std::endl;
        std::cout << "Enter coordinates knight should move to (x y):  ";
        std::cin >> moveX >> moveY;



        if(moveX == knightX + 2 || moveX == knightX - 2){
            if(moveY == knightY + 1 || moveY == knightY -1){
                validMove = true;
            }
        }

        else if(moveY == knightY + 2 || moveY == knightY -2){
            if(moveX == knightX + 1 || moveX == knightX -1){
                validMove = true;
            }
        }

        if(moveX >= 9 || moveX <= 0){
            validMove = false;
        }
        if(moveY >= 9 || moveY <= 0){
            validMove = false;
        }

        if(validMove){
            knightX = moveX;
            knightY = moveY;
            moves++;
        }
        else{
            std::cout << "Make sure your move is a valid move for a knight" << std::endl << std::endl;
        }
        

        if(moves == 5){
            outMoves = true;
        }

        if ((knightX == 1 || knightX == 8) && ( knightY == 1 || knightY == 8)){
            won = true;
        }

    }

    if (won){
        std::cout << std::endl << std::endl << "Congratulations for completing the challenge in " << moves << " moves";
    }
    else{
        std::cout << std::endl << std::endl << "Sorry you ran out of moves, try again!";
    }
}