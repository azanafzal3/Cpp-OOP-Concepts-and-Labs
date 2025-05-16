#ifndef FACEBOOK_H
#define FACEBOOK_H

#include <string>

using namespace std;

class FacebookProfile {
private:
    string name;
    string email;
    char gender;
    char contact[11];

public:
    FacebookProfile(); // Default constructor
    FacebookProfile(string n, string e, char g, char c[11]); // Parameterized constructor

    // Setters
    void setName(string n);
    void setEmail(string e);
    void setGender(char g);
    void setContact(char c[11]);

    // Getters
    string getName() const;
    string getEmail() const;
    char getGender() const;
    const char* getContact() const;

    void updateContact(char c[11]); // Update contact number
};

int GenderCount(FacebookProfile arr[], int size); // Global function to count gender

#endif // FACEBOOK_H
