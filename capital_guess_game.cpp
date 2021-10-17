#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    string array[28] = {"Andhra Pradesh", "Arunachal Pradesh", "Assam", "Bihar", "Chhatisgarh", "Goa", "Gujarat", "Haryana", "Himachal Pradesh",
                        "Jharkhand", "Karnataka", "Kerala", "Madhya Pradesh", "Maharashtra", "Manipur", "Meghalya", "Mizoram", "Nagaland",
                        "Odisha", "Punjab", "Rajasthan", "Sikkim", "Tamil Nadu", "Telangana", "Tripura", "UttarPradesh", "Uttarkhand",
                        "West Bengal"};
    string check[28] = {"Amravati", "Itanagar", "Dispur", "Patna", "Raipur", "Panaji", "Gandhinagar", "Chandigarh", "Shimla", "Ranchi",
                        "Bengalaru", "Thiruvananthapuram", "Bhopal", "Mumbai", "Impal", "Shillong", "Aizwal", "Kohima", "Bhubneshwar",
                        "Chandigarh", "Jaipur", "Gangtok", "Chennai", "Hyderabad", "Agartala", "Lucknow", "Dehradun", "Kolkata"};
    string input;
    char choice_1;
    static int score=0;

    cout << "A state will be displayed , you have to guess the capital of that state correct " << endl;
  do{

    int Randchoice = rand() % 28;

    cout << "State is : " ;
    cout << array[Randchoice] << endl;

    fflush(stdin);
    cout << "Enter the capital of the state (Enter the first letter capital !!) " << endl;
    cin >> input;

    if (input == check[Randchoice])
    {
       cout << "Your answer is correct " << endl;
       score++;
       cout << "Score is : " << score << endl;

    }
    
    else
    {
        cout << "Your answer is wrong " << endl;
        score--;
        cout << "Score is : " << score << endl;

    }

    cout << "Do you want to continue " << endl;
    cin >> choice_1;

  }while(choice_1=='y' || choice_1=='Y');

    return 0;
}
