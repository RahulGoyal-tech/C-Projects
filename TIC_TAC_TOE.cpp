/* Position no. at every block
Player1 = O  Player2 = X
Grid from | and -
*/

#include<iostream>
#include<vector>
using namespace std;

int i,j,l=0,y=0,winner=0, temp=0,temp2=1, inp1,inp2;
float movec = 0;
int Player1[9];
int Player2[9];
void gridprint(){
for(i=0;i<23;i++){
    for(j=0;j<23;j++){
        if((i!=8&&j==8&&i!=16)||(i!=8&&j==16&&i!=16))
        {
            cout<<"|";
        }
        else if(i==8||i==16)
        {
            cout<<"-";
        }

        if(i==4&&j==4)
        {
            for(int k=0; k<9; k++)
            {
                if (Player1[k]==1)
                {
                    cout<<"O";
                    temp=1;
                    break;
                }
                else if(Player2[k]==1)
                {
                    cout<<"X";
                    temp=1;
                    break;
                }
            }
            if(temp==1){
               temp = 0; 
            }
            else{
                cout<<"1";
                temp = 0;
            }
        }
        else if(i==4&&j==12)
        {
            for(int k=0; k<9; k++)
            {
                if (Player1[k]==2)
                {
                    cout<<"O";
                    temp = 1;
                    break;
                }
                else if(Player2[k]==2)
                {
                    cout<<"X";
                    temp = 1;
                    break;
                }
            }
            if(temp==1){
                temp=0;
            }
            else{
                cout<<"2";
                temp = 0;
            }
        }
        else if(i==4&&j==20)
        {
            for(int k=0; k<9; k++)
            {
                if (Player1[k]==3)
                {
                    cout<<"O";
                    temp = 1;
                    break;
                }
                else if(Player2[k]==3)
                {
                    cout<<"X";
                    temp = 1;
                    break;
                }
                
            }
            if(temp==1){
                temp=0;
            }
            else{
                cout<<"3";
                temp = 0;
            }
        }
        else if(i==12&&j==4)
        {
            for(int k=0; k<9; k++)
            {
                if (Player1[k]==4)
                {
                    cout<<"O";
                    temp =1;
                    break;
                }
                else if(Player2[k]==4)
                {
                    cout<<"X";
                    temp = 1;
                    break;
                }
            }
            if(temp==1){
                temp=0;
            }
            else{
                cout<<"4";
                temp = 0;
            }
        }
        else if(i==12&&j==12)
        {
            for(int k=0; k<9; k++)
            {
                if (Player1[k]==5)
                {
                    cout<<"O";
                    temp = 1;
                    break;
                }
                else if(Player2[k]==5)
                {
                    cout<<"X";
                    temp = 1;
                    break;
                }
            }
            if(temp==1){
                temp=0;
            }
            else{
                cout<<"5";
                temp = 0;
            }
        }
        else if(i==12&&j==20)
        {
            for(int k=0; k<9; k++)
            {
                if (Player1[k]==6)
                {
                    cout<<"O";
                    temp = 1;
                    break;
                }
                else if(Player2[k]==6)
                {
                    cout<<"X";
                    temp = 1;
                    break;
                }
            }
            if(temp==1){
                temp=0;
            }
            else{
                cout<<"6";
                temp = 0;
            }
        }
        else if(i==20&&j==4)
        {
            for(int k=0; k<9; k++)
            {
                if (Player1[k]==7)
                {
                    cout<<"O";
                    temp = 1;
                    break;
                }
                else if(Player2[k]==7)
                {
                    cout<<"X";
                    temp = 1;
                    break;
                }
            }
            if(temp==1){
                temp=0;
            }
            else{
                cout<<"7";
                temp = 0;
            }
        }
        else if(i==20&&j==12)
        {
            for(int k=0; k<9; k++)
            {
                if (Player1[k]==8)
                {
                    cout<<"O";
                    temp = 1;
                    break;
                }
                else if(Player2[k]==8)
                {
                    cout<<"X";
                    temp = 1;
                    break;
                }
            }
            if(temp==1){
                temp=0;
            }
            else{
                cout<<"8";
                temp = 0;
            }
        }
        else if(i==20&&j==20)
        {
            for(int k=0; k<9; k++)
            {
                if (Player1[k]==9)
                {
                    cout<<"O";
                    temp = 1;
                    break;
                }
                else if(Player2[k]==9)
                {
                    cout<<"X";
                    temp = 1;
                    break;
                }
            }
            if(temp==1){
                temp=0;
            }
            else{
                cout<<"9";
                temp = 0;
            }
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<"\n";
}
}
int winchck1(){
    for(int k=0; k<9; k++)
    {
        if (Player1[k]==1)
        {
            for(int a=0;a<9;a++)
            {
                if(Player1[a]==2)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==3){
                            return 1;
                            
                        }
                        
                    }
                    
                    return 0;
                            
                        
                }
                else if(Player1[a]==5)
                {   
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==9){
                            return 1;
                            
                        }
                    }
                    return 0;
                    
                }
                else if(Player1[a]==4)
                {   
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==7){
                            return 1;
                            
                        }
                    }
                    return 0;
                    
                }
                
            }
            return 0;
            
        }
        else if (Player1[k]==3)
        {
            for(int a=0;a<9;a++)
            {
                if(Player1[a]==2)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==1){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==6)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==7){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player1[k]==9)
        {
            for(int a=0;a<9;a++)
            {
                if(Player1[a]==6)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==3){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==1){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==8)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==7){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
        }
        else if (Player1[k]==7)
        {
            for(int a=0;a<9;a++)
            {
                if(Player1[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==3){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==8)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==4)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==1){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player1[k]==5)
        {
            for(int a=0;a<9;a++)
            {
                if(Player1[a]==2)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==8){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==6)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==4){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==1)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==7)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==3){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player1[k]==2)
        {
            for(int a=0;a<9;a++)
            {
                if(Player1[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==8){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==3)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==1){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player1[k]==4)
        {
            for(int a=0;a<9;a++)
            {
                if(Player1[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==6){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==7)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==1){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player1[k]==6)
        {
            for(int a=0;a<9;a++)
            {
                if(Player1[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==4){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==3)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player1[k]==8)
        {
            for(int a=0;a<9;a++)
            {
                if(Player1[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==2){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player1[a]==7)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player1[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
    }
}
int winchck2(){
    for(int k=0; k<9; k++)
    {
        if (Player2[k]==1)
        {
            for(int a=0;a<9;a++)
            {
                if(Player2[a]==2)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==3){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==4)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==7){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player2[k]==3)
        {
            for(int a=0;a<9;a++)
            {
                if(Player2[a]==2)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==1){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==6)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==7){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player2[k]==9)
        {
            for(int a=0;a<9;a++)
            {
                if(Player2[a]==6)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==3){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==1){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==8)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==7){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player2[k]==7)
        {
            for(int a=0;a<9;a++)
            {
                if(Player2[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==3){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==8)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==4)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==1){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player2[k]==5)
        {
            for(int a=0;a<9;a++)
            {
                if(Player2[a]==2)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==8){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==6)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==4){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==1)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==7)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==3){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player2[k]==2)
        {
            for(int a=0;a<9;a++)
            {
                if(Player2[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==8){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==3)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==1){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player2[k]==4)
        {
            for(int a=0;a<9;a++)
            {
                if(Player2[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==6){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==7)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==1){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player2[k]==6)
        {
            for(int a=0;a<9;a++)
            {
                if(Player2[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==4){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==3)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
        else if (Player2[k]==8)
        {
            for(int a=0;a<9;a++)
            {
                if(Player2[a]==5)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==2){
                            return 1;
                        }
                    }
                    return 0;
                }
                else if(Player2[a]==7)
                {
                    for (int b=0; b<9; b++)
                    {
                        if(Player2[b]==9){
                            return 1;
                        }
                    }
                    return 0;
                }
                
            }
            return 0;
        }
    }
}
int main(){

while(winner!=1)
{
    gridprint();
    movec=movec+0.5;
    while(temp2){
    cout<<"Player 1s Turn\n";
    cout<<"Enter Position: ";
    cin>>inp1;
    for(int k=0; k<9; k++){
        if(inp1==Player2[k])
        {
            cout<<"Position Already taken by player 2\nPlease Reselect\n\n";
            temp2=1;
            break;
        }
        else if(inp1==Player1[k]){
            cout<<"Position Already taken by you\nPlease Reselect\n\n";
            temp2=1;
            break;
        }
        else if(inp1>9||inp1<1){
            cout<<"Input position invalid\nPlease Reselect\n\n";
            temp2 = 1;
            break;
        }
        else{
            temp2=0;
        }
    }
    }
    Player1[l] = inp1;
    l++;
    temp2 = 1;
    int chk1 = winchck1();
    if(chk1){
        system("Color C6");
        gridprint();
        cout<<"PLAYER 1 IS WINNER !!!!";
        break;
    }
    if(movec==4.5)
    {
        cout<<"GAME DRAW!!";
        system("Color C1");
        break;
    }
    gridprint();
    movec=movec+0.5;
    while(temp2){
    cout<<"Player 2s Turn\n";
    cout<<"Enter Position: ";
    cin>>inp2;
    for(int k=0; k<9; k++){
        if(inp2==Player1[k])
        {
            cout<<"Position Already taken by player 1\nPlease Reselect\n\n";
            temp2=1;
            break;
        }
        else if(inp2==Player2[k]){
            cout<<"Position Already taken by you\nPlease Reselect\n\n";
            temp2=1;
            break;
        }
        else if(inp2>9||inp2<1){
            cout<<"Input position invalid\nPlease Reselect\n\n";
            temp2 = 1;
            break;
        }
        else{
            temp2=0;
        }
    }
    }
    Player2[y] = inp2;
    y++;
    temp2 = 1;
    int chk2 = winchck2();
    if(chk2){
        system("Color C6");
        gridprint();
        cout<<"PLAYER 2 IS WINNER !!!!";
        break;
    }
    if(movec==4.5)
    {
        cout<<"GAME DRAW!!";
        system("Color C1");
        break;
    }
}
}