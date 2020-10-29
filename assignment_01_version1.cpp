#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{ int games=0;
    do{
       int chosen_Door, prize_Door, open_Door = 0;
    cout<<"There are 3 doors and prize is kept behind one of them. "<<endl;

    prize_Door = rand() %3+1;
    cout<<prize_Door<<endl;

   // cout << "Which door you want to choose(1-3)? ";
    //cin >> chosen_Door;



    cout << "Odds of winning: " << 1/(double)3 <<endl;
     do{
        open_Door = rand() % 3 + 1;
     }
        while(open_Door == prize_Door || open_Door == chosen_Door);

//    cout<< open_Door <<" no. door is Empty."<< endl;


    cout << "Odds if you pick a new door: " << (1 - 1/(double)3)/((double)3-2) <<endl;

  //  cout << "Would you like to pick a new door? (1/0), where 1 is yes and 0 is no. ";
    //int s;
    //cin>>s;

    if (s == 1) {
        cout << "What door do you want to choose? ";
        cin >> chosen_Door;
    }

    if (chosen_Door == prize_Door) cout << "YOU WIN!" << endl;
    else cout << "You lose!" << endl;
    }
    while(games<100);

    return 0;
}

