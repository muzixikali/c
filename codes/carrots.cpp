// uses and displays a variable

# include<iostream>

int main()
{
    using namespace std;

    int carrots;    // declare a integer variable

    carrots = 25;   //assign a value to the variable
    cout << "I have ";
    cout << carrots;    // display the value of variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;  // modify the variable
    cout << "Crunch,crutch.Now I have " << carrots << " carrots"<<endl;
    return 0;
}