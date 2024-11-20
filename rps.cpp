#include <iostream>
#include <ctime>

char userChoice();
char computerChoice();
void showChoice(char x,char y);
void chooseWinner(char m, char n);

int main(){
    using namespace std;
    
    char player_1 = userChoice();
    char player_2 = computerChoice();
    computerChoice();
    showChoice(player_1, player_2);
    chooseWinner(player_1, player_2);
    return 0;
}

char userChoice()
{
    char user_choice;
    do{
    std::cout << " Enter r, p or s";
    std::cin >> user_choice;
    }while(user_choice != 'r' && user_choice != 'p' && user_choice != 's');
    return user_choice;
}

char computerChoice()
{
    char computer_choice;
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
        default: return 'r';
    }
}

void showChoice(char x, char y)
{
    std::cout << "Your choice: " << x << std::endl;
    std::cout << "Computer choice: " << y << std::endl;
}

void chooseWinner(char m, char n)
{
  switch(m)
  {
    case 'r':
        if(n=='r'){
            std::cout<<"Tie";}
        else if(n=='p'){
            std::cout<<"Lose";}
        else{
            std::cout<<"Win";}
        break;
    case 'p':
        if(n=='p'){
            std::cout<<"Tie";}
        else if(n=='s'){
            std::cout<<"Lose";}
        else{
            std::cout<<"Win";}
        break;
    case 's':
        if(n=='s'){
            std::cout<<"Tie";}
        else if(n=='r'){
            std::cout<<"Lose";}
        else{
            std::cout<<"Win";}
        break;
  }
}