#include <iostream>
#include <string>

using namespace std;

// lets declare a function prototype
void the_display_code(string password);
void addFirst(int&, int&);
void passingMode(int&, int);
//void arraySystem(string)
//void arraySystem(string, int);
//void arraySystem(string, int, float)



class softwareengineers{
public:
    int salary;
    string framework;
    double paycheck;
    double calculate_time(double);
    void estimate_error();
    int noframeworks;
    string password;
    string resetPassword(string password);
    string getPassword() const;
    string passkey;


private:
    string adminPassword = "omologo";

};


class aiengineers: public softwareengineers
{
public:
    string laptoptype;
    int years_of_experience;

private:
    string password;
    bool ways_of_deployement();

};


class machinelearning: public aiengineers
{
public:
    string frameworks;
    bool ways_of_working();
    bool ways_of_datalabelling();
    string yourname;

private:
    string mlmodel;
    int project_duration;

};


struct Credentials{

    string firstname;
    string lastname;
    string address;
    string date_of_birth;
    string get_result();

};

 

int main()
{
    //char workerList = {"Ibrahim", "Obaloluwa", "Balikis","Lateefat","Nurudeen"};
    //arraySystem(workerList, 5);


    struct Credentials
    {

    string firstname;
    string lastname;
    string address;
    string date_of_birth;

    };
 

    cout<<"Your default Estate is: " << endl; //<< member->address << endl;

    softwareengineers admin;

    //cout << admin.getPassword();


    machinelearning engineer1;

    cout << "Kindly Enter your name here:";
    cin>> engineer1.yourname;
    cout<< "Hello " << engineer1.yourname<< endl;

    cout << "Kindly Enter your framework here:";
    cin>> engineer1.frameworks;
    cout<< "Your preferred framework is " << engineer1.frameworks << endl;


    // ....................................................
    int num = 5;
    int numb = 6;

    addFirst(num, num);

    cout << "............................................"<<endl;
    passingMode(numb,numb);
    cout << "............................................"<< endl;

    aiengineers newcomers;

    newcomers.salary = 40000;
    newcomers.paycheck = 32000.00;
    // lets try to use other variable in the class
    cout<< "This is the salary of the best of the newest newcomer #" << newcomers.salary << endl;
    cout<<"This is actually the paycheck of the customers #" << newcomers.paycheck << endl;
    cout<< "Kindly enter your password: ";
    cin >> newcomers.passkey;
    cout<<"The inputed password is: "<< newcomers.passkey <<endl;


    // Lets try to create an instance of the classes

    newcomers.estimate_error();
    cout<<"The current time in hours is: " << newcomers.calculate_time(73.45)<< endl;


    return 0;
}

// Lets experiment with classes
void the_display_code(string password)
{
    cout<<"This is the second code running"<< endl;
    cout<<"Lets try to access the private variable "<< password <<endl;
    password = "35832787832";
    cout<<"Lets try to access the private variable "<< password <<endl;

}

// lets declare a method for the class
void softwareengineers::estimate_error()
{
    double error;
    double Actual_value = 1.00;
    cout<< "Kindly tell us your error: ";
    cin >> error;

    // lets say am estimating the error
    error = (error/Actual_value)* 30;

    cout << "The actual error is: " << error << endl;
}


double softwareengineers::calculate_time(double current_time)
{

    current_time = current_time/60;

    return current_time;

}


void addFirst(int& first, int& second){


    cout<< "The first of the number "<< first<< endl;

    first = first +2;

    cout<< "The sum of both numbers is " << second << endl;

    second = second *2;

    cout<< "The final second number is " << second << endl;
    cout<< "The first number is "<< first << endl;

}


void passingMode(int& refr, int value)
{

    cout<< "The reference value is "<< refr << endl;

    refr = refr +2;

    cout << "The new value of the reference variable is: "<< refr << endl;
    cout << "Lets check out the second number "<< value <<endl;
    value = value *2;

    cout<< "The final check of the value variable is "<< value << endl;

    cout << "The new value of the reference variable is: "<< refr << endl;

}
 


string softwareengineers::resetPassword(string password){

    password = password + "2";

    return password;
}


string softwareengineers::getPassword() const
{

    return adminPassword;

}
 
