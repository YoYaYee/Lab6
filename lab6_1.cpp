#include<iostream>
using namespace std;

int num;
int n = 1;
int even;
int odd;


int main(){
    while (n != 0)       
    {      
        cout << "Enter an integer: ";
        cin >> num;
        n = num;
        if (num != 0)
        {
             if (num%2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
