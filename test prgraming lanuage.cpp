#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        string comm;
        cin >> comm;
        if(comm == "print")
        {
            cout << "what do you want to print?";
            string print;
            cin >> print;
            cout << print;
        }
        if(comm == "var")
        {
            cout << "what data do you want to store?";
            int var;
            cin >> var;
            string comm2;
            if(comm2 == "print")
            {
                cout << "what do you want to print?";
                string print2;
                cin >> print2;
                cout << print2;
            }
            if(comm2 == var){
                cout << "what data do you want to store?";
                int var2;
                cin >> var2;
                int fullVar;
                fullVar = var + var2;
                string print3
                if(print3 == "print full var")
                {
                    cout << fullVar;
                }
            }
        }
    }
    return 0;
}
