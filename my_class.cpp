#include "my_class.h"
#include<iostream>
using namespace std;
static void private_helper_function()
{
    cout << "private helper function" << endl;
}

void global_helper_function()
{
    cout << "global helper function" << endl;
}