#include <iostream>
using namespace std;

class tic
{
private:
    string player1, player2;
    char matrix[3][3];
    char p1, p2;

public:
    tic()
    {
        matrix[0][0] = '1';
        matrix[0][1] = '2';
        matrix[0][2] = '3';
        matrix[1][0] = '4';
        matrix[1][1] = '5';
        matrix[1][2] = '6';
        matrix[2][0] = '7';
        matrix[2][1] = '8';
        matrix[2][2] = '9';
    }

    void board()
    {
        cout << endl;
        cout << "                     " << " " << matrix[0][0] << " | " << matrix[0][1] << " | " << matrix[0][2] << "\n";
        cout << "                     " << "---|---|---\n";
        cout << "                     " << " " << matrix[1][0] << " | " << matrix[1][1] << " | " << matrix[1][2] << "\n";
        cout << "                     " << "---|---|---\n";
        cout << "                     " << " " << matrix[2][0] << " | " << matrix[2][1] << " | " << matrix[2][2] << "\n";
        cout << endl;
    }

    void playent()
    {
        cout << endl;
        cout << endl;
        cout << "<-----THIS IS A TIC TAC TO GAME PLAYER----->" << endl
             << endl;
        cout << " PLEASE ENTER THE NAME OF THE PLAYER (A) ";
        cin >> player1;
        cout << endl;
        cout << " PLEASE ENTER THE NAME OF THE PLAYER (B) ";
        cin >> player2;
        cout << endl;
        cout << endl;
        cout << "THE GAME IS ABOUT TO START-_-_-} \n"
             << player1 << " / vs / " << player2;
        cout << "\n"
             << "!-----{GET READY}-----!";
        cout << endl;
        cout << endl;
        selmark();
    }

    void selmark()
    {

        cout << "PLAYER " << player1 << " PLEASE SELECT A MARKER (X) or (O) {TO EXIT TYPE -_-_-_{E}-_-_- } {TO RESTART TYPE -_-_-_{R}-_-_- }";
        cin >> p1, p2;
        if (p1 == 'x' || p1 == 'X')
        {
            p2 = 'o';
            cout << endl;
            cout << "THE PLAYER " << player1 << " HAS SELECTED ---(" << p1 << ")--- AND THE PLAYER " << player2 << " HAS SELECTED {Auto_assined}---(" << p2 << ")---";
            return;
        }
        else if (p1 == 'o' || p1 == 'O')
        {
            p2 = 'x';
            cout << "THE PLAYER " << player1 << " HAS SELECTED ---(" << p1 << ")--- AND THE PLAYER " << player2 << " HAS SELECTED {Auto_assined}---(" << p2 << ")---";
            cout << endl;
            return;
        }
        else if (p1 == 'e' || p1 == 'E')
        {
            cout << endl;
            cout << endl;
            cout << "<--------THANK YOU FOR PLAYING---------->";
            exit(0);
        }
        else if (p1 == 'R' || p1 == 'r')
        {
            cout << endl;
            cout << endl;
            cout << "THE GAME IS ABOUT TO BEGIN AGAIN }}}=";
            return playent();
        }
        else
        {
            cout << " <---PLEASE SELECT FORM THE GIVEN OPTIONS ONLY--->" << endl
                 << endl;
            return selmark();
        }
        cout << endl;
    }

    int slot;
    int slo;
    void move1()
    {
        board();
        cout << "PLAYER " << player1 << " PLEASE SELECT FORM (1<9) -_-_-} ";
        cin >> slot;
        if (slo == slot)
        {
            cout << endl;
            cout << "!-=-=-ERORRRRRR-=-=-!" << endl;
            cout << "THE PLAYER " << player1 << " HAS SELECTED A PRE OCUPIED BLOCK || ";
            cout << "PLEASE SELECT ANOTHER SQUARE -=}-=}-=}-=} ";
            cout << endl;
            move1();
        }
        else if (slot > 9 || slot < 1)
        {
            cout << endl
                 << " <---PLEASE SELECT FORM THE DESIGINSTED BOXES ONLY---> " << endl;
            return;
        }
        switch (slot)
        {
        case 1:
            if (matrix[0][0] == '1')
            {
                matrix[0][0] = p1;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 2:
            if (matrix[0][1] == '2')
            {
                matrix[0][1] = p1;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 3:
            if (matrix[0][2] == '3')
            {
                matrix[0][2] = p1;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 4:
            if (matrix[1][0] == '4')
            {
                matrix[1][0] = p1;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 5:
            if (matrix[1][1] == '5')
            {
                matrix[1][1] = p1;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 6:
            if (matrix[1][2] == '6')
            {
                matrix[1][2] = p1;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 7:
            if (matrix[2][0] == '7')
            {
                matrix[2][0] = p1;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 8:
            if (matrix[2][1] == '8')
            {
                matrix[2][1] = p1;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 9:
            if (matrix[2][2] == '9')
            {
                matrix[2][2] = p1;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        default:
            cout << endl
                 << " <---PLEASE SELECT FORM THE DESIGINSTED BOXES ONLY---> " << endl;
            break;
        }
        board();
        winner();
    }

    void move2()
    {
        board();
        cout << "PLAYER " << player2 << " PLEASE SELECT FORM (1<9) -_-_-} ";
        cin >> slo;

        if (slo == slot)
        {
            cout << endl;
            cout << "!-=-=-ERORRRRRR-=-=-!" << endl;
            cout << "PLEASE SELECT ANOTHER SQUARE AS IT HAS BEEN ALREADY OCUPIED ";
            cout << endl;
            move2();
        }
        else if (slo > 9 || slo < 1)
        {
            cout << endl
                 << " <---PLEASE SELECT FORM THE DESIGINSTED BOXES ONLY---> " << endl;
            return;
        }
        switch (slo)
        {
        case 1:
            if (matrix[0][0] == '1')
            {
                matrix[0][0] = p2;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 2:
            if (matrix[0][1] == '2')
            {
                matrix[0][1] = p2;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 3:
            if (matrix[0][2] == '3')
            {
                matrix[0][2] = p2;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 4:
            if (matrix[1][0] == '4')
            {
                matrix[1][0] = p2;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 5:
            if (matrix[1][1] == '5')
            {
                matrix[1][1] = p2;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 6:
            if (matrix[1][2] == '6')
            {
                matrix[1][2] = p2;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 7:
            if (matrix[2][0] == '7')
            {
                matrix[2][0] = p2;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 8:
            if (matrix[2][1] == '8')
            {
                matrix[2][1] = p2;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        case 9:
            if (matrix[2][2] == '9')
            {
                matrix[2][2] = p2;
                break;
            }
            else
            {
                cout << "THE SQARE IS ALREADY OCUPIE!! ";
                move1();
            }
            break;
        default:
            cout << endl
                 << " <---PLEASE SELECT FORM THE DESIGINSTED BOXES ONLY---> " << endl;
            break;
        }
        board();
        winner();
    }

    void winner()
    {
        char a, b, c, d, e, f, g, h, i;
        a = matrix[2][2];
        b = matrix[2][1];
        c = matrix[2][0];
        d = matrix[0][0];
        e = matrix[0][1];
        f = matrix[0][2];
        g = matrix[1][0];
        h = matrix[1][1];
        i = matrix[1][2];

        if (a == 'x' && b == 'x' && c == 'x' || d == 'x' && e == 'x' && f == 'x' || g == 'x' && h == 'x' && i == 'x' || a == 'x' && d == 'x' && c == 'x' || e == 'x' && h == 'x' && b == 'x' || a == 'x' && f == 'x' && i == 'x' || a == 'x' && h == 'x' && d == 'x' || f == 'x' && h == 'x' && c == 'x')
        {
            cout << "<----{-_-_ COGRATULATIONS _-_ }---->" << endl;

            switch (p1)
            {
            case 'x':
                cout << "THE WINNER IS " << player1;
                restart();
            }
            switch (p2)
            {
            case 'x':
                cout << "THE WINNER IS " << player2;
                restart();
            }
        }
        else if (a == 'o' && b == 'o' && c == 'o' || d == 'o' && e == 'o' && f == 'o' || g == 'o' && h == 'o' && i == 'o' || a == 'o' && d == 'o' && c == 'o' || e == 'o' && h == 'o' && b == 'o' || a == 'o' && f == 'o' && i == 'o' || a == 'o' && h == 'o' && d == 'o' || f == 'o' && h == 'o' && c == 'o')
        {
            cout << "COGRATULATIONS" << endl;
            switch (p1)
            {
            case 'o':
                cout << "THE WINNER IS " << player1;
                restart();
            }
            switch (p2)
            {
            case 'o':
                cout << "THE WINNER IS " << player2;
                restart();
            }
        }
    }

    void restart()
    {
        cout << endl;
        cout << endl;
        char input;
        cout << "TO RESTART PRESS (R)--===> ";
        cin >> input;
        if (input == 'R' || input == 'r')
        {
            cout << "THE GAME IS ABOUT TO BEGIN AGAIN {HOPE YOU LOVE IT}";
            clear();
            return playent();
        }
        else if (input == 'e' || input == 'E')
        {
            cout << "<--------THANK YOU FOR PLAYING---------->";
        }
    }
    void clear()
    {
        matrix[0][0] = '1';
        matrix[0][1] = '2';
        matrix[0][2] = '3';
        matrix[1][0] = '4';
        matrix[1][1] = '5';
        matrix[1][2] = '6';
        matrix[2][0] = '7';
        matrix[2][1] = '8';
        matrix[2][2] = '9';
    }
};

int main()
{
    tic t;
    t.playent();
    for (int i = 0; i < 4; i++)
    {
        t.move1();
        t.move2();
    }
    // t.move2();
    // t.winner();
    cout << "!_-_-} IT IS A DRAW {_-_-!";
    t.restart();
    return 0;
}