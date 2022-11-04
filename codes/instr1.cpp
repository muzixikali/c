//	reading more than one string

# include<iostream>

int main()
{
    using namespace std;
    const int ARRAYSIZE = 20;
    char name[ARRAYSIZE];
    char dessert[ARRAYSIZE];

    cout << "Enter your name:\n";
    cin >> name ;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
