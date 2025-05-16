#include "facebook.h"
#include <iostream>

FacebookProfile::FacebookProfile() {
    name = "";
    email = "";
    gender = ' ';
    for (int i = 0; i < 11; i++) {
        contact[i] = '\0';
    }
}

FacebookProfile::FacebookProfile(string n, string e, char g, char c[11]) {
    name = n;
    email = e;
    gender = g;
    for (int i = 0; i < 11; i++) {
        contact[i] = c[i];
    }
}

void FacebookProfile::setName(string n) {
    name = n;
}

void FacebookProfile::setEmail(string e) {
    email = e;
}

void FacebookProfile::setGender(char g) {
    gender = g;
}

void FacebookProfile::setContact(char c[11]) {
    for (int i = 0; i < 11; i++) {
        contact[i] = c[i];
    }
}

string FacebookProfile::getName() const {
    return name;
}

string FacebookProfile::getEmail() const {
    return email;
}

char FacebookProfile::getGender() const {
    return gender;
}

const char* FacebookProfile::getContact() const {
    return contact;
}

void FacebookProfile::updateContact(char c[11]) {
    for (int i = 0; i < 11; i++) {
        contact[i] = c[i];
    }
}

int GenderCount(FacebookProfile arr[], int size) {
    int maleCount = 0, femaleCount = 0, otherCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i].getGender() == 'M') {
            maleCount++;
        }
        else if (arr[i].getGender() == 'F') {
            femaleCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "Male count: " << maleCount << endl;
    cout << "Female count: " << femaleCount << endl;
    cout << "Other count: " << otherCount << endl;

    return maleCount + femaleCount + otherCount;
}
