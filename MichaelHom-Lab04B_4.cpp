// Michael Hom
//CS102 Laboratory 4B Part 4
// The program calculate total cost based on
// in or out of state tuition and whether they want room and board

#include <iostream>
using namespace std;
int main()
{
    //declare variables
    const double INSTATE_TUITION = 3000;
    const double OUTSTATE_TUITION = 4500;
    const double INSTATE_ROOM_BOARD = 2500;
    const double OUTSTATE_ROOM_BOARD = 3500;

    double tuition_cost, room_board_cost, total_cost;
    char tuition;
    char room_board;

    //Gather inputs from user
    cout << "Please input \"I\" if you are in-state or \"O\" if you are out-of-state:";
    cin >> tuition;
    cout << "Please input \"Y\" if you require room and board and \"N\" if you do not:";
    cin >> room_board;

    //calculate tuition, room and board, and total costs

    tuition_cost = tuition == 'I' || tuition == 'i' ? INSTATE_TUITION : OUTSTATE_TUITION;

    room_board_cost = tuition == 'I' || tuition == 'i' ? INSTATE_ROOM_BOARD : OUTSTATE_ROOM_BOARD;

    room_board_cost = room_board == 'N' || room_board == 'n'? 0 : room_board_cost;

    room_board_cost = room_board == 'Y' || room_board == 'y'? room_board_cost : 0;

    total_cost = tuition_cost + room_board_cost;

    //output total cost

    total_cost = (tuition == 'I' || tuition == 'i' || tuition == 'O' || tuition == 'o')
    && (room_board == 'Y' || room_board == 'y' || room_board == 'N' || room_board == 'n') ?
        total_cost : 0;

    cout << (total_cost != 0 ? "\nYour total bill for this semester is $" :
             "\nYour inputs were invalid. Please try again." ) << total_cost <<
            (total_cost != 0 ? " " : "\b ");

    cout << "\nCoded by Michael Hom";
    cin.ignore();
    cin.get();

    return 0;
}
