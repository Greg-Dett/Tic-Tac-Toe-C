#include <stdio.h>
#include <string.h>

void printBoard(char board[62][62]);
void createBoard(char emptyboard[62][62]);
void drawX(char board[62][62],int position);
void draw0(char board[62][62],int position);

int main (void){
    char board[62][62];
      for(int i=0;i<62;i++){
         for(int j=0;j<62;j++){
        board[i][j]=' ';
    }
    }
    createBoard(board);
    printf("\n\n\tTic Tac Toe\n\n");
    char square[10] = { 'o', '3', '5', '3', '4', '5', '6', '7', '8', '9' };
    int choice;
    for(int i=1;i<10;i++){
    
   
       if(i % 2 == 0)
        printf("Player 2 please select a square according to the map below\n");
    else
        printf("PLayer 1 please select a square according to the map below\n");

    printf("  %i  |  %i  |  %i \n", 1, 2, 3);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %i  |  %i  |  %i \n", 4, 5, 6);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %i  |  %i  |  %i \n", 7, 8, 9);

    printf("     |     |     \n\n");


        scanf("%d", &choice);
        while(square[choice]==1||square[choice]==2){
             printf("That Tile has already been picked, please select another\n");
             scanf("%d", &choice);
        }
           if(i % 2 == 0){
        draw0(board,choice);
        square[choice]=2;
        printBoard(board);}
    else{
       drawX(board,choice);
        square[choice]=1;
          printBoard(board); 
    }

    if(square[1]==square[2]&&square[2]==square[3]){
                if(i % 2 == 0){
        printf("Congratulation player 2 you won");}
    else{
       printf("Congratulation player 1 you won");
    }
        return 0;

    }
    else if(square[4]==square[5]&&square[5]==square[6]){
                if(i % 2 == 0){
        printf("Congratulation player 2 you won");}
    else{
       printf("Congratulation player 1 you won");
    }
        return 0;

    }
    else if(square[7]==square[8]&&square[8]==square[9]){
                if(i % 2 == 0){
        printf("Congratulation player 2 you won");}
    else{
       printf("Congratulation player 1 you won");
    }
        return 0;

    }
    else if(square[1]==square[5]&&square[5]==square[9]){
                if(i % 2 == 0){
        printf("Congratulation player 2 you won");}
    else{
       printf("Congratulation player 1 you won");
    }
        return 0;

    }
    else if(square[7]==square[5]&&square[5]==square[3]){
                if(i % 2 == 0){
        printf("Congratulation player 2 you won");}
    else{
       printf("Congratulation player 1 you won");
    }
        return 0;

    }
    else if(square[1]==square[4]&&square[4]==square[7]){
                if(i % 2 == 0){
        printf("Congratulation player 2 you won");}
    else{
       printf("Congratulation player 1 you won");
    }
        return 0;

    }
    else if(square[2]==square[5]&&square[5]==square[8]){
                if(i % 2 == 0){
        printf("Congratulation player 2 you won");}
    else{
       printf("Congratulation player 1 you won");
    }
        return 0;

    }
    else if(square[3]==square[6]&&square[6]==square[9]){
                if(i % 2 == 0){
        printf("Congratulation player 2 you won");}
    else{
       printf("Congratulation player 1 you won");
    }
        return 0;

    }
    

 
}
printf("There was no winner. PLease play again");
return 0;
}


void printBoard(char board[62][62]){
    for(int i=0;i<62;i++){
         for(int j=0;j<62;j++){
        printf("%c",board[i][j]);
    }
    printf("\n");
    }
}

void createBoard(char emptyboard[62][62]){
    for(int i=0;i<62;i++){
        emptyboard[i][20]='|';
        emptyboard[i][41]='|';
        emptyboard[20][i]='-';
        emptyboard[41][i]='-';
    }
    
} 
void drawX(char board[62][62],int position){
    int row1=19;
    int row2=40;
    int row3=61;
    
    if(position==1){
       
    for(int i=0;i<20;i++){
        board[i][i]='\\';
        board[i][row1-i]='/';
    }
    }
    else if(position==2){
       
    for(int i=0;i<20;i++){
        board[i][i+21]='\\';
        board[i][row2-i]='/';
    }
    }
    else if(position==3){
       
    for(int i=0;i<20;i++){
        board[i][i+42]='\\';
        board[i][row3-i]='/';
    }
    }
    else if(position==4){
        
    for(int i=0;i<20;i++){
        board[21+i][i]='\\';
        board[21+i][row1-i]='/';
    }
    }
    else if(position==5){
      
    for(int i=0;i<20;i++){
        board[21+i][i+21]='\\';
        board[21+i][row2-i]='/';
    }
    }
    else if(position==6){
        
    for(int i=0;i<20;i++){
        board[21+i][i+42]='\\';
        board[21+i][row3-i]='/';
    }
    }
       else if(position==7){
        
    for(int i=0;i<20;i++){
        board[42+i][i]='\\';
        board[42+i][row1-i]='/';
    }
    }
    else if(position==8){
        
    for(int i=0;i<20;i++){
        board[42+i][i+21]='\\';
        board[42+i][row2-i]='/';
    }
    }
    else if(position==9){
        
    for(int i=0;i<20;i++){
        board[42+i][i+42]='\\';
        board[42+i][row3-i]='/';
    }
    }
}
void draw0(char board[62][62],int position){
        int column2=21;
        int column3=42;
        if(position==1){
           for(int i=0;i<6;i++){
        board[i+7][0]='|';
        board[i+7][19]='|';
        board[1][i+7]='-';
        board[18][i+7]='-';

        board[i+1][5-i]='/';
        board[i+1][14+i]='\\';
        board[13+i][i]='\\';
        board[13+i][19-i]='/';
    }
    }
    else if(position==2){
        for(int i=0;i<6;i++){
        board[i+7][0+column2]='|';
        board[i+7][19+column2]='|';
        board[1][i+7+column2]='-';
        board[18][i+7+column2]='-';

        board[i+1][5-i+column2]='/';
        board[i+1][14+i+column2]='\\';
        board[13+i][i+column2]='\\';
        board[13+i][19-i+column2]='/';
    }
    }
    else if(position==3){
        for(int i=0;i<6;i++){
        board[i+7][0+column3]='|';
        board[i+7][19+column3]='|';
        board[1][i+7+column3]='-';
        board[18][i+7+column3]='-';

        board[i+1][5-i+column3]='/';
        board[i+1][14+i+column3]='\\';
        board[13+i][i+column3]='\\';
        board[13+i][19-i+column3]='/';
    }
    }
    else if(position==4){
        for(int i=0;i<6;i++){
        board[i+7+column2][0]='|';
        board[i+7+column2][19]='|';
        board[1+column2][i+7]='-';
        board[18+column2][i+7]='-';

        board[i+1+column2][5-i]='/';
        board[i+1+column2][14+i]='\\';
        board[13+i+column2][i]='\\';
        board[13+i+column2][19-i]='/';
    }
    }
    else if(position==5){
        for(int i=0;i<6;i++){
        board[i+7+column2][0+column2]='|';
        board[i+7+column2][19+column2]='|';
        board[1+column2][i+7+column2]='-';
        board[18+column2][i+7+column2]='-';

        board[i+1+column2][5-i+column2]='/';
        board[i+1+column2][14+i+column2]='\\';
        board[13+i+column2][i+column2]='\\';
        board[13+i+column2][19-i+column2]='/';
    }
    }
    else if(position==6){
        for(int i=0;i<6;i++){
        board[i+7+column2][0+column3]='|';
        board[i+7+column2][19+column3]='|';
        board[1+column2][i+7+column3]='-';
        board[18+column2][i+7+column3]='-';

        board[i+1+column2][5-i+column3]='/';
        board[i+1+column2][14+i+column3]='\\';
        board[13+i+column2][i+column3]='\\';
        board[13+i+column2][19-i+column3]='/';
    }
    }
     else if(position==7){
        for(int i=0;i<6;i++){
        board[i+7+column3][0]='|';
        board[i+7+column3][19]='|';
        board[1+column3][i+7]='-';
        board[18+column3][i+7]='-';

        board[i+1+column3][5-i]='/';
        board[i+1+column3][14+i]='\\';
        board[13+i+column3][i]='\\';
        board[13+i+column3][19-i]='/';
    }
    }
    else if(position==8){
        for(int i=0;i<6;i++){
        board[i+7+column3][0+column2]='|';
        board[i+7+column3][19+column2]='|';
        board[1+column3][i+7+column2]='-';
        board[18+column3][i+7+column2]='-';

        board[i+1+column3][5-i+column2]='/';
        board[i+1+column3][14+i+column2]='\\';
        board[13+i+column3][i+column2]='\\';
        board[13+i+column3][19-i+column2]='/';
    }
    }
    else if(position=9){
        for(int i=0;i<6;i++){
        board[i+7+column3][0+column3]='|';
        board[i+7+column3][19+column3]='|';
        board[1+column3][i+7+column3]='-';
        board[18+column3][i+7+column3]='-';

        board[i+1+column3][5-i+column3]='/';
        board[i+1+column3][14+i+column3]='\\';
        board[13+i+column3][i+column3]='\\';
        board[13+i+column3][19-i+column3]='/';
    }
    }
    

}
