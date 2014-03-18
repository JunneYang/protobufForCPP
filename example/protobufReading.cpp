#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "addressbook.pb.h"
using namespace std;

string filepath="./addressbook.db";

int main(int argc,char* argv[])
{
    tutorial::AddressBook addressbook=tutorial::AddressBook();
    fstream input(filepath.c_str(), ios::in | ios::binary);
    addressbook.ParseFromIstream(&input);

    for (int i=0;i<addressbook.person_size();i++)
    {
        cout<<"********************************************"<<endl;
        cout<<addressbook.person(i).id()<<endl;
        cout<<addressbook.person(i).name()<<endl;
        if(addressbook.person(i).has_email())
        {
            cout<<addressbook.person(i).email()<<endl;
        }

        for(int j=0;j<addressbook.person(i).phone_size();j++)
        {
            const tutorial::Person::PhoneNumber& phone_number = addressbook.person(i).phone(j);
            switch (phone_number.type())
            {
                case tutorial::Person::MOBILE:
                    cout<<"Mobile"<<endl;
                    break;
                case tutorial::Person::HOME:
                    cout<<"Home"<<endl;
                    break;
                case tutorial::Person::WORK:
                    cout<<"Work"<<endl;
                    break;
            }
            cout<<phone_number.number()<<endl;
        }
    }
    return 0;
}

