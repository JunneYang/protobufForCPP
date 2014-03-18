#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "addressbook.pb.h"
using namespace std;

int main(int argc,char* argv[]){
	string filepath="./addressbook.db";

	tutorial::AddressBook addressbook=tutorial::AddressBook();
	for(int i=0;i<10;++i)
	{
    		tutorial::Person* person=addressbook.add_person();
    		stringstream ss;
    		ss<<i;
    		string s=ss.str();

		person->set_name("John Doe"+s);
    		person->set_id(1234+i);
    		person->set_email("jdoe@example.com"+s);

    		tutorial::Person::PhoneNumber* phone=person->add_phone();
    		phone->set_number("555-4321"+s);
    		phone->set_type(tutorial::Person::MOBILE);
	}

	fstream output(filepath.c_str(), ios::out | ios::trunc | ios::binary);
	addressbook.SerializeToOstream(&output);

	return 0;
}

