#include<iostream>
#include<string>
using namespace std;
void khooneh(string khoone[16]) {
    khoone[0] = "1";
    khoone[1] = "2";
    khoone[2] = "3";
    khoone[3] = "4";
    khoone[4] = "5";
    khoone[5] = "6";
    khoone[6] = "7";
    khoone[7] = "8";
    khoone[8] = "9";
    khoone[9] = "10";
    khoone[10] = "11";
    khoone[11] = "12";
    khoone[12] = "13";
    khoone[13] = "14";
    khoone[14] = "15";
    khoone[15] = "16";
}
void khooneh1(string khoonehe[16]) {
    khoonehe[0] = "";
    khoonehe[1] = "";
    khoonehe[2] = "";
    khoonehe[3] = "";
    khoonehe[4] = "";
    khoonehe[5] = "";
    khoonehe[6] = "";
    khoonehe[7] = "";
    khoonehe[8] = "";
    khoonehe[9] = "";
    khoonehe[10] = "";
    khoonehe[11] = "";
    khoonehe[12] = "";
    khoonehe[13] = "";
    khoonehe[14] = "";
    khoonehe[15] = "";
}
int main()
{

    cout<<"WELCOME TO TIC TAC TUE GAME"<<endl;
    cout<<"PLAYER1 TAKES (X) AND PLAYER2 TAKES (O)"<<endl;
    cout<<"I HOPE YOU ENJOY MY GAME"<<endl;
    cout << "   **     **   " << endl;
    cout << " ****** ****** " << endl;
    cout << " ************* " << endl;
    cout << "  ***********  " << endl;
    cout << "   *********   " << endl;
    cout << "    *******    " << endl;
    cout << "     *****     " << endl;
    cout << "      ***      " << endl;
    cout << "       *       " << endl;
    cout<<endl;
    int player1score=0 , player2score=0;
   start:
string khoone[16];
khooneh(khoone);
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|       " << khoone[0] << "      |       " << khoone[1] << "      |       " << khoone[2] << "      |       " << khoone[3] << "      |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|       " << khoone[4] << "      |       " << khoone[5] << "      |       " << khoone[6] << "      |       " << khoone[7] << "      |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|       " << khoone[8] << "      |       " << khoone[9] << "     |       " << khoone[10] << "     |       " << khoone[11] << "     |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|       " << khoone[12] << "     |       " << khoone[13] << "     |       " << khoone[14] << "     |       " << khoone[15] << "     |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

string khoonehe[9];
khooneh1(khoonehe);
string player1 ="X";
string player2 ="O";
int khoonemadenazar;
cout<<"enter the number of the cell player1: "<<flush;
cin>>khoonemadenazar;
if (khoonemadenazar<1 || khoonemadenazar>16){
cout << "wrong cell :("<<endl;
cout<<"enter the number of the cell that exist player1: "<<endl;
cin>>khoonemadenazar;}
khoonehe[khoonemadenazar -1] = player1;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
int khoonemadenazar1;
cout<<"enter the number of the cell player2: "<<endl;
cin>>khoonemadenazar1;
if (khoonemadenazar1<1 || khoonemadenazar1>16){
cout << "wrong cell :(";
cout<<"enter the number of the cell that exist player2: "<<endl;
cin>>khoonemadenazar1;
;
}
else if (khoonemadenazar==khoonemadenazar1){
cout<<"plz choose empty cell: ";
cin>>khoonemadenazar1;
}
if (khoonemadenazar1<1 || khoonemadenazar1>16){
cout << "wrong cell :("<<endl;
cout<<"enter the number of the cell that exist player2: "<<endl;
cin>>khoonemadenazar1;
}
khoonehe[khoonemadenazar1 -1] = player2;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
int khoonemadenazar2;
cout<<"enter the number of the cell player1: "<<endl;
cin>>khoonemadenazar2;
if (khoonemadenazar2<1 || khoonemadenazar2>16){
cout << "wrong cell :(";
cout<<"enter the number of the cell that exist player1: "<<endl;
cin>>khoonemadenazar2;
;
}
else if (khoonemadenazar==khoonemadenazar2 || khoonemadenazar2==khoonemadenazar1){
cout<<"plz choose empty cell: ";
cin>>khoonemadenazar2;
}
if (khoonemadenazar2<1 || khoonemadenazar2>16){
cout << "wrong cell :("<<endl;
cout<<"enter the number of the cell that exist player1: "<<endl;
cin>>khoonemadenazar2;
}
khoonehe[khoonemadenazar2 -1] = player1;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

int khoonemadenazar3;
cout<<"enter the number of the cell player2: "<<endl;
cin>>khoonemadenazar3;
if (khoonemadenazar3<1 || khoonemadenazar3>16){
cout << "wrong cell :(";
cout<<"enter the number of the cell that exist player2: "<<endl;
cin>>khoonemadenazar3;
;
}
else if (khoonemadenazar==khoonemadenazar3 || khoonemadenazar3==khoonemadenazar1 || khoonemadenazar3==khoonemadenazar2){
cout<<"plz choose empty cell: ";
cin>>khoonemadenazar3;
}
if (khoonemadenazar3<1 || khoonemadenazar3>16){
cout << "wrong cell :("<<endl;
cout<<"enter the number of the cell that exist player2: "<<endl;
cin>>khoonemadenazar3;
}
khoonehe[khoonemadenazar3 -1] = player2;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
int khoonemadenazar4;
cout<<"enter the number of the cell player1: "<<endl;
cin>>khoonemadenazar4;
if (khoonemadenazar4<1 || khoonemadenazar4>16){
cout << "wrong cell :(";
cout<<"enter the number of the cell that exist player1: "<<endl;
cin>>khoonemadenazar4;
;
}
else if (khoonemadenazar==khoonemadenazar4 || khoonemadenazar4==khoonemadenazar1
|| khoonemadenazar4==khoonemadenazar2 || khoonemadenazar4==khoonemadenazar3){
cout<<"plz choose empty cell: ";
cin>>khoonemadenazar4;
}
if (khoonemadenazar4<1 || khoonemadenazar4>16){
cout << "wrong cell :("<<endl;
cout<<"enter the number of the cell that exist player1: "<<endl;
cin>>khoonemadenazar4;
}
khoonehe[khoonemadenazar4 -1] = player1;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "X" && khoonehe[1] == "X" && khoonehe[2] == "X" && khoonehe[3] == "X") ||
    (khoonehe[4] == "X" && khoonehe[5] == "X" && khoonehe[6] == "X" && khoonehe[7] == "X") ||
    (khoonehe[8] == "X" && khoonehe[9] == "X" && khoonehe[10] == "X" && khoonehe[11] == "X") ||
    (khoonehe[12] == "X" && khoonehe[13] == "X" && khoonehe[14] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[4] == "X" && khoonehe[8] == "X" && khoonehe[12] == "X") ||
    (khoonehe[1] == "X" && khoonehe[5] == "X" && khoonehe[9] == "X" && khoonehe[13] == "X") ||
    (khoonehe[2] == "X" && khoonehe[6] == "X" && khoonehe[10] == "X" && khoonehe[14] == "X") ||
    (khoonehe[3] == "X" && khoonehe[7] == "X" && khoonehe[11] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[5] == "X" && khoonehe[10] == "X" && khoonehe[15] == "X") ||
    (khoonehe[3] == "X" && khoonehe[6] == "X" && khoonehe[9] == "X" && khoonehe[12] == "X")
)
{
    cout << "The winner is player 1 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<endl;
    player1score++;
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar5;
cout<<"enter the number of the cell player2: "<<endl;
cin>>khoonemadenazar5;
if (khoonemadenazar5<1 || khoonemadenazar5>16){
cout << "wrong cell :(";
cout<<"enter the number of the cell that exist player2: "<<endl;
cin>>khoonemadenazar5;
;
}
else if (khoonemadenazar==khoonemadenazar5 || khoonemadenazar5==khoonemadenazar1
|| khoonemadenazar5==khoonemadenazar2 || khoonemadenazar5==khoonemadenazar3 || khoonemadenazar5 == khoonemadenazar4){
cout<<"plz choose empty cell: ";
cin>>khoonemadenazar5;
}
if (khoonemadenazar5<1 || khoonemadenazar5>16){
cout << "wrong cell :("<<endl;
cout<<"enter the number of the cell that exist player2: "<<endl;
cin>>khoonemadenazar5;
}
khoonehe[khoonemadenazar5 -1] = player2;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "O" && khoonehe[1] == "O" && khoonehe[2] == "O" && khoonehe[3] == "O") ||
    (khoonehe[4] == "O" && khoonehe[5] == "O" && khoonehe[6] == "O" && khoonehe[7] == "O") ||
    (khoonehe[8] == "O" && khoonehe[9] == "O" && khoonehe[10] == "O" && khoonehe[11] == "O") ||
    (khoonehe[12] == "O" && khoonehe[13] == "O" && khoonehe[14] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[4] == "O" && khoonehe[8] == "O" && khoonehe[12] == "O") ||
    (khoonehe[1] == "O" && khoonehe[5] == "O" && khoonehe[9] == "O" && khoonehe[13] == "O") ||
    (khoonehe[2] == "O" && khoonehe[6] == "O" && khoonehe[10] == "O" && khoonehe[14] == "O") ||
    (khoonehe[3] == "O" && khoonehe[7] == "O" && khoonehe[11] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[5] == "O" && khoonehe[10] == "O" && khoonehe[15] == "O") ||
    (khoonehe[3] == "O" && khoonehe[6] == "O" && khoonehe[9] == "O" && khoonehe[12] == "O")
)
{
    player2score++;
    cout << "The winner is player 2 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar6;
cout<<"enter the number of the cell player1: "<<endl;
cin>>khoonemadenazar6;
if (khoonemadenazar6<1 || khoonemadenazar6>16){
cout << "wrong cell :(";
cout<<"enter the number of the cell that exist player1: "<<endl;
cin>>khoonemadenazar6;
;
}
else if (khoonemadenazar==khoonemadenazar6 || khoonemadenazar6==khoonemadenazar1
|| khoonemadenazar6==khoonemadenazar2 || khoonemadenazar6==khoonemadenazar3 ||
khoonemadenazar6 == khoonemadenazar4 || khoonemadenazar6 == khoonemadenazar5){
cout<<"plz choose empty cell: ";
cin>>khoonemadenazar6;
}
if (khoonemadenazar6<1 || khoonemadenazar6>16){
cout << "wrong cell :("<<endl;
cout<<"enter the number of the cell that exist player1: "<<endl;
cin>>khoonemadenazar6;
}
khoonehe[khoonemadenazar6 -1] = player1;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "X" && khoonehe[1] == "X" && khoonehe[2] == "X" && khoonehe[3] == "X") ||
    (khoonehe[4] == "X" && khoonehe[5] == "X" && khoonehe[6] == "X" && khoonehe[7] == "X") ||
    (khoonehe[8] == "X" && khoonehe[9] == "X" && khoonehe[10] == "X" && khoonehe[11] == "X") ||
    (khoonehe[12] == "X" && khoonehe[13] == "X" && khoonehe[14] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[4] == "X" && khoonehe[8] == "X" && khoonehe[12] == "X") ||
    (khoonehe[1] == "X" && khoonehe[5] == "X" && khoonehe[9] == "X" && khoonehe[13] == "X") ||
    (khoonehe[2] == "X" && khoonehe[6] == "X" && khoonehe[10] == "X" && khoonehe[14] == "X") ||
    (khoonehe[3] == "X" && khoonehe[7] == "X" && khoonehe[11] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[5] == "X" && khoonehe[10] == "X" && khoonehe[15] == "X") ||
    (khoonehe[3] == "X" && khoonehe[6] == "X" && khoonehe[9] == "X" && khoonehe[12] == "X")
)
{
    cout << "The winner is player 1 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<endl;
    player1score++;
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar7;
cout<<"enter the number of the cell player2: "<<endl;
cin>>khoonemadenazar7;
if (khoonemadenazar7<1 || khoonemadenazar7>16){
cout << "wrong cell :(";
cout<<"enter the number of the cell that exist player2: "<<endl;
cin>>khoonemadenazar7;
;
}
else if (khoonemadenazar==khoonemadenazar7 || khoonemadenazar7==khoonemadenazar1
|| khoonemadenazar7==khoonemadenazar2 || khoonemadenazar7==khoonemadenazar3 || khoonemadenazar7 == khoonemadenazar4
 || khoonemadenazar7 == khoonemadenazar5 || khoonemadenazar7 == khoonemadenazar6){
cout<<"plz choose empty cell: ";
cin>>khoonemadenazar7;
}
if (khoonemadenazar7<1 || khoonemadenazar7>16){
cout << "wrong cell :("<<endl;
cout<<"enter the number of the cell that exist player2: "<<endl;
cin>>khoonemadenazar7;
}
khoonehe[khoonemadenazar7 -1] = player2;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "O" && khoonehe[1] == "O" && khoonehe[2] == "O" && khoonehe[3] == "O") ||
    (khoonehe[4] == "O" && khoonehe[5] == "O" && khoonehe[6] == "O" && khoonehe[7] == "O") ||
    (khoonehe[8] == "O" && khoonehe[9] == "O" && khoonehe[10] == "O" && khoonehe[11] == "O") ||
    (khoonehe[12] == "O" && khoonehe[13] == "O" && khoonehe[14] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[4] == "O" && khoonehe[8] == "O" && khoonehe[12] == "O") ||
    (khoonehe[1] == "O" && khoonehe[5] == "O" && khoonehe[9] == "O" && khoonehe[13] == "O") ||
    (khoonehe[2] == "O" && khoonehe[6] == "O" && khoonehe[10] == "O" && khoonehe[14] == "O") ||
    (khoonehe[3] == "O" && khoonehe[7] == "O" && khoonehe[11] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[5] == "O" && khoonehe[10] == "O" && khoonehe[15] == "O") ||
    (khoonehe[3] == "O" && khoonehe[6] == "O" && khoonehe[9] == "O" && khoonehe[12] == "O")
)
{
    player2score++;
    cout << "The winner is player 2 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar8;
cout << "enter the number of the cell player1: " << endl;
cin >> khoonemadenazar8;
if (khoonemadenazar8 < 1 || khoonemadenazar8 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player1: " << endl;
    cin >> khoonemadenazar8;
}
else if (khoonemadenazar8 == khoonemadenazar || khoonemadenazar8 == khoonemadenazar1 || khoonemadenazar8 == khoonemadenazar2 || 
         khoonemadenazar8 == khoonemadenazar3 || khoonemadenazar8 == khoonemadenazar4 || khoonemadenazar8 == khoonemadenazar5 || 
         khoonemadenazar8 == khoonemadenazar6 || khoonemadenazar8 == khoonemadenazar7) {
    cout << "plz choose empty cell: ";
    cin >> khoonemadenazar8;
}
if (khoonemadenazar8 < 1 || khoonemadenazar8 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player1: " << endl;
    cin >> khoonemadenazar8;
}
khoonehe[khoonemadenazar8 - 1] = player1;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "O" && khoonehe[1] == "O" && khoonehe[2] == "O" && khoonehe[3] == "O") ||
    (khoonehe[4] == "O" && khoonehe[5] == "O" && khoonehe[6] == "O" && khoonehe[7] == "O") ||
    (khoonehe[8] == "O" && khoonehe[9] == "O" && khoonehe[10] == "O" && khoonehe[11] == "O") ||
    (khoonehe[12] == "O" && khoonehe[13] == "O" && khoonehe[14] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[4] == "O" && khoonehe[8] == "O" && khoonehe[12] == "O") ||
    (khoonehe[1] == "O" && khoonehe[5] == "O" && khoonehe[9] == "O" && khoonehe[13] == "O") ||
    (khoonehe[2] == "O" && khoonehe[6] == "O" && khoonehe[10] == "O" && khoonehe[14] == "O") ||
    (khoonehe[3] == "O" && khoonehe[7] == "O" && khoonehe[11] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[5] == "O" && khoonehe[10] == "O" && khoonehe[15] == "O") ||
    (khoonehe[3] == "O" && khoonehe[6] == "O" && khoonehe[9] == "O" && khoonehe[12] == "O")
)
{
    player2score++;
    cout << "The winner is player 2 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar9;
cout << "enter the number of the cell player2: " << endl;
cin >> khoonemadenazar9;
if (khoonemadenazar9 < 1 || khoonemadenazar9 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player2: " << endl;
    cin >> khoonemadenazar9;
}
else if (khoonemadenazar9 == khoonemadenazar || khoonemadenazar9 == khoonemadenazar1 || khoonemadenazar9 == khoonemadenazar2 || 
         khoonemadenazar9 == khoonemadenazar3 || khoonemadenazar9 == khoonemadenazar4 || khoonemadenazar9 == khoonemadenazar5 || 
         khoonemadenazar9 == khoonemadenazar6 || khoonemadenazar9 == khoonemadenazar7 || khoonemadenazar9 == khoonemadenazar8) {
    cout << "plz choose empty cell: ";
    cin >> khoonemadenazar9;
}
if (khoonemadenazar9 < 1 || khoonemadenazar9 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player2: " << endl;
    cin >> khoonemadenazar9;
}
khoonehe[khoonemadenazar9 - 1] = player2;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "              " << khoonehe[2] << "              " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "              " << khoonehe[6] << "              " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "              " << khoonehe[10] << "              " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "            " << khoonehe[14] << "              " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if ((khoonehe[0] == "X" && khoonehe[1] == "X" && khoonehe[2] == "X" && khoonehe[3] == "X") ||
    (khoonehe[4] == "X" && khoonehe[5] == "X" && khoonehe[6] == "X" && khoonehe[7] == "X") ||
    (khoonehe[8] == "X" && khoonehe[9] == "X" && khoonehe[10] == "X" && khoonehe[11] == "X") ||
    (khoonehe[12] == "X" && khoonehe[13] == "X" && khoonehe[14] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[4] == "X" && khoonehe[8] == "X" && khoonehe[12] == "X") ||
    (khoonehe[1] == "X" && khoonehe[5] == "X" && khoonehe[9] == "X" && khoonehe[13] == "X") ||
    (khoonehe[2] == "X" && khoonehe[6] == "X" && khoonehe[10] == "X" && khoonehe[14] == "X") ||
    (khoonehe[3] == "X" && khoonehe[7] == "X" && khoonehe[11] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[5] == "X" && khoonehe[10] == "X" && khoonehe[15] == "X") ||
    (khoonehe[3] == "X" && khoonehe[6] == "X" && khoonehe[9] == "X" && khoonehe[12] == "X"))
{
    cout << "The winner is player 1 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<endl;
    player1score++;
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar10;
cout << "enter the number of the cell player1: " << endl;
cin >> khoonemadenazar10;
if (khoonemadenazar10 < 1 || khoonemadenazar10 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player1: " << endl;
    cin >> khoonemadenazar10;
}
else if (khoonemadenazar10 == khoonemadenazar || khoonemadenazar10 == khoonemadenazar1 || khoonemadenazar10 == khoonemadenazar2 || 
         khoonemadenazar10 == khoonemadenazar3 || khoonemadenazar10 == khoonemadenazar4 || khoonemadenazar10 == khoonemadenazar5 || 
         khoonemadenazar10 == khoonemadenazar6 || khoonemadenazar10 == khoonemadenazar7 || khoonemadenazar10 == khoonemadenazar8 || 
         khoonemadenazar10 == khoonemadenazar9) {
    cout << "plz choose empty cell: ";
    cin >> khoonemadenazar10;
}
if (khoonemadenazar10 < 1 || khoonemadenazar10 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player1: " << endl;
    cin >> khoonemadenazar10;
}
khoonehe[khoonemadenazar10 - 1] = player1;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "O" && khoonehe[1] == "O" && khoonehe[2] == "O" && khoonehe[3] == "O") ||
    (khoonehe[4] == "O" && khoonehe[5] == "O" && khoonehe[6] == "O" && khoonehe[7] == "O") ||
    (khoonehe[8] == "O" && khoonehe[9] == "O" && khoonehe[10] == "O" && khoonehe[11] == "O") ||
    (khoonehe[12] == "O" && khoonehe[13] == "O" && khoonehe[14] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[4] == "O" && khoonehe[8] == "O" && khoonehe[12] == "O") ||
    (khoonehe[1] == "O" && khoonehe[5] == "O" && khoonehe[9] == "O" && khoonehe[13] == "O") ||
    (khoonehe[2] == "O" && khoonehe[6] == "O" && khoonehe[10] == "O" && khoonehe[14] == "O") ||
    (khoonehe[3] == "O" && khoonehe[7] == "O" && khoonehe[11] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[5] == "O" && khoonehe[10] == "O" && khoonehe[15] == "O") ||
    (khoonehe[3] == "O" && khoonehe[6] == "O" && khoonehe[9] == "O" && khoonehe[12] == "O")
)
{
    player2score++;
    cout << "The winner is player 2 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar11;
cout << "enter the number of the cell player2: " << endl;
cin >> khoonemadenazar11;
if (khoonemadenazar11 < 1 || khoonemadenazar11 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player2: " << endl;
    cin >> khoonemadenazar11;
}
else if (khoonemadenazar11 == khoonemadenazar || khoonemadenazar11 == khoonemadenazar1 || khoonemadenazar11 == khoonemadenazar2 || 
         khoonemadenazar11 == khoonemadenazar3 || khoonemadenazar11 == khoonemadenazar4 || khoonemadenazar11 == khoonemadenazar5 || 
         khoonemadenazar11 == khoonemadenazar6 || khoonemadenazar11 == khoonemadenazar7 || khoonemadenazar11 == khoonemadenazar8 || 
         khoonemadenazar11 == khoonemadenazar9 || khoonemadenazar11 == khoonemadenazar10) {
    cout << "plz choose empty cell: ";
    cin >> khoonemadenazar11;
}
if (khoonemadenazar11 < 1 || khoonemadenazar11 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player2: " << endl;
    cin >> khoonemadenazar11;
}
khoonehe[khoonemadenazar11 - 1] = player2;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "X" && khoonehe[1] == "X" && khoonehe[2] == "X" && khoonehe[3] == "X") ||
    (khoonehe[4] == "X" && khoonehe[5] == "X" && khoonehe[6] == "X" && khoonehe[7] == "X") ||
    (khoonehe[8] == "X" && khoonehe[9] == "X" && khoonehe[10] == "X" && khoonehe[11] == "X") ||
    (khoonehe[12] == "X" && khoonehe[13] == "X" && khoonehe[14] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[4] == "X" && khoonehe[8] == "X" && khoonehe[12] == "X") ||
    (khoonehe[1] == "X" && khoonehe[5] == "X" && khoonehe[9] == "X" && khoonehe[13] == "X") ||
    (khoonehe[2] == "X" && khoonehe[6] == "X" && khoonehe[10] == "X" && khoonehe[14] == "X") ||
    (khoonehe[3] == "X" && khoonehe[7] == "X" && khoonehe[11] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[5] == "X" && khoonehe[10] == "X" && khoonehe[15] == "X") ||
    (khoonehe[3] == "X" && khoonehe[6] == "X" && khoonehe[9] == "X" && khoonehe[12] == "X")
)
{
    cout << "The winner is player 1 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<endl;
    player1score++;
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar12;
cout << "enter the number of the cell player1: " << endl;
cin >> khoonemadenazar12;
if (khoonemadenazar12 < 1 || khoonemadenazar12 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player1: " << endl;
    cin >> khoonemadenazar12;
}
else if (khoonemadenazar12 == khoonemadenazar || khoonemadenazar12 == khoonemadenazar1 || khoonemadenazar12 == khoonemadenazar2 || 
         khoonemadenazar12 == khoonemadenazar3 || khoonemadenazar12 == khoonemadenazar4 || khoonemadenazar12 == khoonemadenazar5 || 
         khoonemadenazar12 == khoonemadenazar6 || khoonemadenazar12 == khoonemadenazar7 || khoonemadenazar12 == khoonemadenazar8 || 
         khoonemadenazar12 == khoonemadenazar9 || khoonemadenazar12 == khoonemadenazar10 || khoonemadenazar12 == khoonemadenazar11) {
    cout << "plz choose empty cell: ";
    cin >> khoonemadenazar12;
}
if (khoonemadenazar12 < 1 || khoonemadenazar12 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player1: " << endl;
    cin >> khoonemadenazar12;
}
khoonehe[khoonemadenazar12 - 1] = player1;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "O" && khoonehe[1] == "O" && khoonehe[2] == "O" && khoonehe[3] == "O") ||
    (khoonehe[4] == "O" && khoonehe[5] == "O" && khoonehe[6] == "O" && khoonehe[7] == "O") ||
    (khoonehe[8] == "O" && khoonehe[9] == "O" && khoonehe[10] == "O" && khoonehe[11] == "O") ||
    (khoonehe[12] == "O" && khoonehe[13] == "O" && khoonehe[14] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[4] == "O" && khoonehe[8] == "O" && khoonehe[12] == "O") ||
    (khoonehe[1] == "O" && khoonehe[5] == "O" && khoonehe[9] == "O" && khoonehe[13] == "O") ||
    (khoonehe[2] == "O" && khoonehe[6] == "O" && khoonehe[10] == "O" && khoonehe[14] == "O") ||
    (khoonehe[3] == "O" && khoonehe[7] == "O" && khoonehe[11] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[5] == "O" && khoonehe[10] == "O" && khoonehe[15] == "O") ||
    (khoonehe[3] == "O" && khoonehe[6] == "O" && khoonehe[9] == "O" && khoonehe[12] == "O")
)
{
    player2score++;
    cout << "The winner is player 2 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar13;
cout << "enter the number of the cell player2: " << endl;
cin >> khoonemadenazar13;
if (khoonemadenazar13 < 1 || khoonemadenazar13 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player2: " << endl;
    cin >> khoonemadenazar13;
}
else if (khoonemadenazar13 == khoonemadenazar || khoonemadenazar13 == khoonemadenazar1 || khoonemadenazar13 == khoonemadenazar2 || khoonemadenazar13 == khoonemadenazar3 || khoonemadenazar13 == khoonemadenazar4 || khoonemadenazar13 == khoonemadenazar5 || khoonemadenazar13 == khoonemadenazar6 || khoonemadenazar13 == khoonemadenazar7 || khoonemadenazar13 == khoonemadenazar8 || khoonemadenazar13 == khoonemadenazar9 || khoonemadenazar13 == khoonemadenazar10 || khoonemadenazar13 == khoonemadenazar11 || khoonemadenazar13 == khoonemadenazar12) {
    cout << "plz choose empty cell: ";
    cin >> khoonemadenazar13;
}
if (khoonemadenazar13 < 1 || khoonemadenazar13 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player2: " << endl;
    cin >> khoonemadenazar13;
}
khoonehe[khoonemadenazar13 - 1] = player2;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "X" && khoonehe[1] == "X" && khoonehe[2] == "X" && khoonehe[3] == "X") ||
    (khoonehe[4] == "X" && khoonehe[5] == "X" && khoonehe[6] == "X" && khoonehe[7] == "X") ||
    (khoonehe[8] == "X" && khoonehe[9] == "X" && khoonehe[10] == "X" && khoonehe[11] == "X") ||
    (khoonehe[12] == "X" && khoonehe[13] == "X" && khoonehe[14] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[4] == "X" && khoonehe[8] == "X" && khoonehe[12] == "X") ||
    (khoonehe[1] == "X" && khoonehe[5] == "X" && khoonehe[9] == "X" && khoonehe[13] == "X") ||
    (khoonehe[2] == "X" && khoonehe[6] == "X" && khoonehe[10] == "X" && khoonehe[14] == "X") ||
    (khoonehe[3] == "X" && khoonehe[7] == "X" && khoonehe[11] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[5] == "X" && khoonehe[10] == "X" && khoonehe[15] == "X") ||
    (khoonehe[3] == "X" && khoonehe[6] == "X" && khoonehe[9] == "X" && khoonehe[12] == "X")
)
{
    cout << "The winner is player 1 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<endl;
    player1score++;
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar14;
cout << "enter the number of the cell player1: " << endl;
cin >> khoonemadenazar14;
if (khoonemadenazar14 < 1 || khoonemadenazar14 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player1: " << endl;
    cin >> khoonemadenazar14;
}
else if (khoonemadenazar14 == khoonemadenazar || khoonemadenazar14 == khoonemadenazar1 || khoonemadenazar14 == khoonemadenazar2 || khoonemadenazar14 == khoonemadenazar3 || khoonemadenazar14 == khoonemadenazar4 || khoonemadenazar14 == khoonemadenazar5 || khoonemadenazar14 == khoonemadenazar6 || khoonemadenazar14 == khoonemadenazar7 || khoonemadenazar14 == khoonemadenazar8 || khoonemadenazar14 == khoonemadenazar9 || khoonemadenazar14 == khoonemadenazar10 || khoonemadenazar14 == khoonemadenazar11 || khoonemadenazar14 == khoonemadenazar12 || khoonemadenazar14 == khoonemadenazar13) {
    cout << "plz choose empty cell: ";
    cin >> khoonemadenazar14;
}
if (khoonemadenazar14 < 1 || khoonemadenazar14 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player1: " << endl;
    cin >> khoonemadenazar14;
}
khoonehe[khoonemadenazar14 - 1] = player1;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "O" && khoonehe[1] == "O" && khoonehe[2] == "O" && khoonehe[3] == "O") ||
    (khoonehe[4] == "O" && khoonehe[5] == "O" && khoonehe[6] == "O" && khoonehe[7] == "O") ||
    (khoonehe[8] == "O" && khoonehe[9] == "O" && khoonehe[10] == "O" && khoonehe[11] == "O") ||
    (khoonehe[12] == "O" && khoonehe[13] == "O" && khoonehe[14] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[4] == "O" && khoonehe[8] == "O" && khoonehe[12] == "O") ||
    (khoonehe[1] == "O" && khoonehe[5] == "O" && khoonehe[9] == "O" && khoonehe[13] == "O") ||
    (khoonehe[2] == "O" && khoonehe[6] == "O" && khoonehe[10] == "O" && khoonehe[14] == "O") ||
    (khoonehe[3] == "O" && khoonehe[7] == "O" && khoonehe[11] == "O" && khoonehe[15] == "O") ||
    (khoonehe[0] == "O" && khoonehe[5] == "O" && khoonehe[10] == "O" && khoonehe[15] == "O") ||
    (khoonehe[3] == "O" && khoonehe[6] == "O" && khoonehe[9] == "O" && khoonehe[12] == "O")
)
{
    player2score++;
    cout << "The winner is player 2 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
int khoonemadenazar15;
cout << "enter the number of the cell player2: " << endl;
cin >> khoonemadenazar15;
if (khoonemadenazar15 < 1 || khoonemadenazar15 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player2: " << endl;
    cin >> khoonemadenazar15;
}
else if (khoonemadenazar15 == khoonemadenazar || khoonemadenazar15 == khoonemadenazar1 || khoonemadenazar15 == khoonemadenazar2 || khoonemadenazar15 == khoonemadenazar3 || khoonemadenazar15 == khoonemadenazar4 || khoonemadenazar15 == khoonemadenazar5 || khoonemadenazar15 == khoonemadenazar6 || khoonemadenazar15 == khoonemadenazar7 || khoonemadenazar15 == khoonemadenazar8 || khoonemadenazar15 == khoonemadenazar9 || khoonemadenazar15 == khoonemadenazar10 || khoonemadenazar15 == khoonemadenazar11 || khoonemadenazar15 == khoonemadenazar12 || khoonemadenazar15 == khoonemadenazar13 || khoonemadenazar15 == khoonemadenazar14) {
    cout << "plz choose empty cell: ";
    cin >> khoonemadenazar15;
}
if (khoonemadenazar15 < 1 || khoonemadenazar15 > 16) {
    cout << "wrong cell :(" << endl;
    cout << "enter the number of the cell that exist player2: " << endl;
    cin >> khoonemadenazar15;
}
khoonehe[khoonemadenazar15 - 1] = player2;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[0] << "               " << khoonehe[1] << "               " << khoonehe[2] << "               " << khoonehe[3] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[4] << "               " << khoonehe[5] << "               " << khoonehe[6] << "               " << khoonehe[7] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[8] << "               " << khoonehe[9] << "               " << khoonehe[10] << "               " << khoonehe[11] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "       " << khoonehe[12] << "               " << khoonehe[13] << "               " << khoonehe[14] << "               " << khoonehe[15] << "      " << endl;
cout << "|              |              |              |              |" << endl;
cout << "|              |              |              |              |" << endl;
cout << "-------------------------------------------------------------" << endl;

if (
    (khoonehe[0] == "X" && khoonehe[1] == "X" && khoonehe[2] == "X" && khoonehe[3] == "X") ||
    (khoonehe[4] == "X" && khoonehe[5] == "X" && khoonehe[6] == "X" && khoonehe[7] == "X") ||
    (khoonehe[8] == "X" && khoonehe[9] == "X" && khoonehe[10] == "X" && khoonehe[11] == "X") ||
    (khoonehe[12] == "X" && khoonehe[13] == "X" && khoonehe[14] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[4] == "X" && khoonehe[8] == "X" && khoonehe[12] == "X") ||
    (khoonehe[1] == "X" && khoonehe[5] == "X" && khoonehe[9] == "X" && khoonehe[13] == "X") ||
    (khoonehe[2] == "X" && khoonehe[6] == "X" && khoonehe[10] == "X" && khoonehe[14] == "X") ||
    (khoonehe[3] == "X" && khoonehe[7] == "X" && khoonehe[11] == "X" && khoonehe[15] == "X") ||
    (khoonehe[0] == "X" && khoonehe[5] == "X" && khoonehe[10] == "X" && khoonehe[15] == "X") ||
    (khoonehe[3] == "X" && khoonehe[6] == "X" && khoonehe[9] == "X" && khoonehe[12] == "X")
)
{
    cout << "The winner is player 1 :)" << endl;
    cout<<endl;
    cout << "  ██████    █████   ███    ███  ███████" << endl;
    cout << " ██        ██   ██  ████  ████  ██     " << endl;
    cout << " ██   ███  ███████  ██ ████ ██  ██████" << endl;
    cout << " ██    ██  ██   ██  ██  ██  ██  ██     " << endl;
    cout << "  ██████   ██   ██  ██      ██  ███████"<<endl; 
    cout<<endl;
    cout << "  ██████   ██     ██  ███████  ██████    " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██    " << endl;
    cout << " ██    ██  ██     ██  ██████   ██████     " << endl;
    cout << " ██    ██  ██     ██  ██       ██   ██ " << endl;
    cout << "  ██████     █████    ███████  ██   ██ " << endl; 
    cout<<endl;
    player1score++;
    cout<<"player 1: "<<player1score<<endl;
cout<<"player 2: "<<player2score<<endl;
goto start;
}
else {cout<<"draw";}
    return 0;
    
}
