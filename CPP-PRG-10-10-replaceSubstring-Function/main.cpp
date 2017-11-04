//
//  main.cpp
//  CPP-PRG-10-10-replaceSubstring-Function
//
//  Created by Keith Smith on 11/4/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a function named replaceSubstring. The function should accept three C-string
//  of string object arguments. Let's call them string1, string2, and string3. It
//  should search string1 for all occurences of string2. When it finds an occurence of
//  string2, it should replace it with string3. For eample, suppose the three arguments
//  have the following values:
//
//      string1:        "the dog jumped over the fence"
//      string2:        "the"
//      string3:        "that"
//
//  With these three arguments, the function would return a string object with the value
//  "that dog jumped over the fence." Demonstrate the function in a complete program.
//

#include <iostream>
#include <string>

using namespace std;

void enterStringValues(string *, string *, string *);
string *replaceSubstring(string *, string *, string *, string *);
void displayOutputMessage(string *, string *, string *, string *);

int main()
{
    string *strString1 = nullptr;
    string *strString2 = nullptr;
    string *strString3 = nullptr;
    string *strStringFinal = nullptr;
    
    strString1 = new string;
    strString2 = new string;
    strString3 = new string;
    
    enterStringValues(strString1, strString2, strString3);
    
    strStringFinal = replaceSubstring(strString1, strString2, strString3, strStringFinal);
    
    displayOutputMessage(strString1, strString2, strString3, strStringFinal);
    
    return 0;
}

void enterStringValues(string *strStr1, string *strStr2, string *strStr3)
{
    string *strTemp = nullptr;
    strTemp = new string;
    *strTemp = " ";
    
    cout << "Please enter the main string:\n";
    getline(cin, *strStr1);
    
    cout << "Please enter the string to search for:\n";
    getline(cin, *strStr2);
    
//    *strTemp = strTemp->append(*strStr2);
//    *strStr2 = *strTemp;
//    *strStr2 = strStr2->append(" ");
//    strTemp->clear();
    
    cout << "Please enter the string to replace with:\n";
    getline(cin, *strStr3);
    
//    *strTemp = strTemp->append(" ");
//    *strTemp = strTemp->append(*strStr3);
//    *strStr3 = *strTemp;
//    *strStr3 = strStr3->append(" ");
}

string *replaceSubstring(string *strStr1, string *strStr2, string *strStr3, string *strStrFinal)
{
    string *strTempBegin = nullptr;
    strTempBegin = new string;
    
    string *strTempEnd = nullptr;
    strTempEnd = new string;
    
    strStrFinal = new string;
    
    int intTempIndex = 0;
    
    intTempIndex = strStr1->find(*strStr2);
    
    cout << intTempIndex << endl;
    
    strTempBegin->assign(*strStr1, 0, intTempIndex);
    
//    cout << "Begin: " << *strTempBegin << endl;
    
    strTempEnd->assign(*strStr1, intTempIndex + strStr2->length());
    
//    cout << "End: " << *strTempEnd << endl;
    
    strTempBegin->insert(strTempBegin->length(), *strStr3);
    
    strTempBegin->insert(strTempBegin->length(), *strTempEnd);
    
//    cout << "Combined: " << *strTempBegin << endl;
    
//    strTempBegin->resize(strStr2->length());
    
    intTempIndex += strStr2->length();
    
    *strStrFinal = *strTempBegin;
    
    return strStrFinal;
}

void displayOutputMessage(string *strStr1, string *strStr2, string *strStr3, string *strStrFinal)
{
    cout << "Searching your string:\n" << *strStr1 << endl << "for string \'" << *strStr2 << "\'\n";
    cout << "And replacing it with string \'" << *strStr3 << "\'\nResulted in string:\n";
    cout << *strStrFinal << endl;
}
