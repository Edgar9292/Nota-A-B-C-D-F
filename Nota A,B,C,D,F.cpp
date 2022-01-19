int main ()
{
    float grade;
    cout << "Sua Nota:";
    cin >> grade;

    if(grade >=9)
        cout <<"Nota A" << endl;
    else if(grade >=8)
        cout <<"Nota B" << endl;
    else if(grade>= 7) 
        cout<< "Nota C" << endl;
    else if (grade >=6)
        cout<< "Nota D" << endl;
    else
        cout<< "Nota F" << endl;
    return 0;
}