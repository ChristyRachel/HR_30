using namespace std;
#include <iostream>




class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge) {
    if (initialAge < 0) {
        age = 0;
        cout << "Age is not valid, setting age to 0." << endl;
    } else {
    age = initialAge;}
};

    void Person::amIOld(){

        /*
         * If age<13, print You are young..
         * If  age >= 13 and age < 18, print You are a teenager..
         * Otherwise, print You are old..
         */

        if (age<13)
            printf ("You are young.\n");
        else if((age >= 13) && (age < 18))
            printf ("You are a teenager.\n");
        else
            printf ("You are old.\n");
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
            age = age + 1;
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses();
        }
        p.amIOld();

		cout << '\n';
    }

    return 0;
}
