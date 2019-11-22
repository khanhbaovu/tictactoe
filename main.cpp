#include <iostream>
#include <cstdlib>
using namespace std;

char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7','8', '9'};
char player = 'X';
void Draw(){
    system("cls");
    cout<< "TIC TAC TOE"<< endl;
    cout<< "MADE BY KHANH BAO VU"<< endl;
    cout<< "--------------------------------------"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< matrix[i][j]<< " ";
        }
        cout<< endl;
    }
}
void TogglePlayer() {
    if(player=='X') {
        player = 'O';
    }
    else {
        player='X';
    }
}
void Input(){

    int a;

    cout<<"-----------"<<endl;
    if (player == 'X') {
        cout<<"X Turn!"<<endl;
    }
    else {
        cout<<"O Turn!"<<endl;
    }
    cout<< "Press the number of the field: ";
    cin>>a;

    if (a==1 && matrix[0][0]=='1') {
        matrix[0][0] = player;
    } else if(a==1 && matrix[0][0]!='1') {
        TogglePlayer();
    }
    if (a==2 && matrix[0][1]=='2') {
        matrix[0][1] = player;
    } else if(a==2 && matrix[0][1]!='2'){
        TogglePlayer();
    }
    if (a==3 && matrix[0][2]=='3') {
        matrix[0][2] = player;
    } else if (a==3 && matrix[0][2]!='3') {
        TogglePlayer();
    }
    if (a==4 && matrix[1][0]=='4') {
        matrix[1][0] = player;
    } else if (a==4 && matrix[1][0]!='4'){
        TogglePlayer();
    }
    if (a==5 && matrix[1][1]=='5') {
        matrix[1][1] = player;
    } else if(a==5 && matrix[1][1]!='5') {
        TogglePlayer();
    }
    if (a==6 && matrix[1][2]=='6') {
        matrix[1][2] = player;
    } else if (a==6 && matrix[1][2]!='6') {
        TogglePlayer();
    }
    if (a==7 && matrix[2][0]=='7') {
        matrix[2][0] = player;
    } else if (a==7 && matrix[2][0]!='7') {
        TogglePlayer();
    }
    if (a==8 && matrix[2][1]=='8') {
        matrix[2][1] = player;
    } else if (a==8 && matrix[2][1]!='8') {
        TogglePlayer();
    }
    if (a==9 && matrix[2][2]=='9') {
        matrix[2][2] = player;
    } else if (a==9 && matrix[2][2]!='9') {
        TogglePlayer();
    }
}

char Win() {

    if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X' ){
        return 'X';
    }
    else if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X' ){
        return 'X';
    }
    else if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X' ){
        return 'X';
    }
    else if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X' ){
        return 'X';
    }
    else if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X' ){
        return 'X';
    }
    else if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X' ){
        return 'X';
    }
    else if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X' ){
        return 'X';
    }
    else if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X' ){
        return 'X';
    }

    else if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X' ){
        return 'X';
    }

    if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O' ){
        return 'O';
    }
    else if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O' ){
        return 'O';
    }
    else if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O' ){
        return 'O';
    }
    else if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O' ){
        return 'O';
    }
    else if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O' ){
        return 'O';
    }
    else if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O' ){
        return 'O';
    }
    else if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O' ){
        return 'O';
    }
    return '/';
}
int main()
{
    Draw();
    while (1) {
        Input();
        Draw();
        if(Win()=='X') {
            cout<<"--------------------------------------"<<endl;
            cout<< "X wins!"<< endl;
            cout<<"--------------------------------------"<<endl;
            break;
        }
        else if(Win()=='O') {
            cout<<"--------------------------------------"<<endl;
            cout<< "O wins!"<< endl;
            cout<<"--------------------------------------"<<endl;
            break;
        }
        TogglePlayer();
    }
    system("pause");
    return 0;
}
