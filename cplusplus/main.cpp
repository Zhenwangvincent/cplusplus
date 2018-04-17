//
//  main.cpp
//  cplusplus
//
//  Created by Vincent on 2018/4/5.
//  Copyright © 2018年 Vincent. All rights reserved.
//

#include <iostream>
#include "assignment1.h"
using namespace std;

int main() {
    Phone myPhone; // create Account object myAccount
    
    // show that the initial value of myAccount's name is the empty string
    cout << "Initial Phone name is: " << myPhone.getName();
    
    // prompt for and read name
    cout << "\nPlease enter the Phone name: ";
    string theName;
    getline(cin, theName); // read a line of text
    myPhone.setName(theName); // put theName in myPhone
    
    // display the name stored in object myPhone
    cout << "Name in object myPhone is: "
    << myPhone.getName() << endl;
    return 0;
}

