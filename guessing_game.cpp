#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //variables
    int random_num, guess_num, attemp_num; 
    random_num = rand(); //rand function
    attemp_num = 0;
    //processing loop until the user win
    do{
        cout << "Enter your guessing number: "; 
        cin >> guess_num;
        if (guess_num < random_num)
        {
            cout << "Too Low" << endl;
        }
        else if (guess_num > random_num)
        {
            cout << "Too High" << endl;
        }
        else if (guess_num == random_num)
        {
            cout << "Correct. You win the game\n";
        }
        attemp_num++;
    } while (guess_num != random_num);
    
    cout << "Number of attemps: " << attemp_num << endl;
    
    return 0;
}