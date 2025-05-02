#include <iostream>
using namespace std;

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkWin()
{
    if (square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }

    else if (square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }

    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }

    else if (square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }

    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }

    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }
    else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9'){
        return 0;
    }

    else
    {
        return -1;
    }
}

void Board()
{
    system("clear");
    cout<<"\n\n\tTic Tac Toe Game \n\n";
    cout<<"PLAYER 1(X)  PLAYER 2(O)"<< endl<< endl;
    cout<<endl;

    cout<<"    |    |    "<<endl;
    cout <<" "<<square[1] << "  |  " << square[2] << " |  " << square[3] <<endl;

    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    
    cout <<" "<<square[4] << "  |  " << square[5] << " |  " << square[6] <<endl;

    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;


    cout <<" "<<square[7] << "  |  " << square[8] << " |  " << square[9] <<endl;

    cout<<"    |    |    "<<endl<<endl;
    
}

void playingGame(int player){
    
    char symbol;
    if(player==2){
        cout<<"player2 is playing";
        symbol='O';

    }else{
        cout<<"player1 is playing";
        symbol='X';
    }
    int input;
    cin>>input;
   
    
    if(input==1 && square[1]=='1'){
        square[1]=symbol;
        

        
    }
    else if(input==2 && square[2]=='2'){
        square[2]=symbol;
        
    }
    else if(input==3 && square[3]=='3'){
        square[3]=symbol;

    }

    else if(input==4 && square[4]=='4'){
        square[4]=symbol;
            }

    else if(input==5 && square[5]=='5'){
        square[5]=symbol;
        
    }

    else if(input==6 && square[6]=='6'){
        square[6]=symbol;
    
    }

    else if(input==7 && square[7]=='7'){
        square[7]=symbol;
        
    }

    else if(input==8 && square[8]=='8'){
        square[8]=symbol;
        
    }

    else if(input==9 && square[9]=='9'){
        square[9]=symbol;
        
    }
    else{
        cout<<"inavlid move"<<endl;
        
      
    }

   

}


int main()
{ 

    int input,player=1,i;
    char symbol;

    do{
   
    Board();
    player=(player%2)?1:2;

    symbol=(player==1)? 'X':'O';
    
    cout<<"player "<<player<<":Enter the number"<<endl;
    cin>>input;
  
    if(input==1 && square[1]=='1'){
        square[1]=symbol;
        

        
    }
    else if(input==2 && square[2]=='2'){
        square[2]=symbol;
       
    }
    else if(input==3 && square[3]=='3'){
        square[3]=symbol;
       
    }

    else if(input==4 && square[4]=='4'){
        square[4]=symbol;
        
    }

    else if(input==5 && square[5]=='5'){
        square[5]=symbol;
        
    }

    else if(input==6 && square[6]=='6'){
        square[6]=symbol;
        
    }

    else if(input==7 && square[7]=='7'){
        square[7]=symbol;
       
    }

    else if(input==8 && square[8]=='8'){
        square[8]=symbol;
        
    }

    else if(input==9 && square[9]=='9'){
        square[9]=symbol;
        
    }
    else{
        cout<<"inavlid move"<<endl;
        player--;
        cin.ignore();
        cin.get();
    
      
    }

    i=checkWin();
    player++;
    }
    while(i==-1);

    Board();
    if(i==1){
        cout<<"CONGRATULATIONS: PLAYER"<<--player<<"WINS";
    }
    else{
        cout<<"IT'S A DRAW";
    }
    cin.ignore();
    cin.get();
    
   
    

    return 0;
}