//
// Created by Will Smith on 11/7/17.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {


    vector<string> exampleWords;
    vector<string> moreWords;

    string userInput,firstWord,secondWord;

    int commaLoc;

    cout<<"Enter input string:"<<endl;
    getline(cin,userInput);

    while (userInput.find(",") == string::npos){
        cout<<"Error: No comma in string."<<endl<<endl;
        cout<<"Enter input string:"<<endl;
        getline(cin,userInput);
    }


    commaLoc = userInput.find(",");

    firstWord = userInput.substr(0,commaLoc);

    exampleWords.push_back(firstWord);
    secondWord = userInput.substr(commaLoc+1);
    moreWords.push_back(secondWord);


    cout<<"First word: ";

    for (int i=0; i<firstWord.size(); i++){
        if (!isspace(firstWord.at(i))){
            cout<<firstWord.at(i);
        }
    }
    cout<<endl;

    cout<<"Second word: ";

    for (int i=0; i<secondWord.size(); i++){
        if (!isspace(secondWord.at(i))){
            cout<<secondWord.at(i);
        }
    }
    cout<<endl;

    return 0;
}