#include <iostream>
uaing namespace std;
int main()
{
  int s;
    int m;
    int e;
    double avarage=(s+m+e)/3;
    string n;
    int total;
    cout<<"What is your name:"<<endl;
    cin>>n;
    cout<<"What is your science marks:"<<endl;
    cin>>s;
    cout<<"What is your maths marks:"<<endl;
    cin>>m;
    cout<<"What is your maths marks:"<<endl;
    cin>>e;
    cout<<"your name:"<<n<<endl;
    cout<<"your full marks:"<<total<<endl;
    if (total>=225)
    cout<<"Your grade is A"<<endl;
    else if (total>=195)
    cout<<"Your grade is B"<<endl;
    else if (total>=165)
    cout<<"Your grade is C"<<endl;
    else if (total>=105)
    cout<<"Your grade is S"<<endl;
    else
    cout<<"Your grade is Fail"<<endl;
    
}
