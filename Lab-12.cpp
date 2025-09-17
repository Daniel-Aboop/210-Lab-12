// COMSC-210 | Lab 12 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
#include <array>
#include <fstream>
#include <string>

using namespace std;
const int Size=30;

void printList(const array<string,Size>&list){
    cout<<"Printing List:"<<endl;

    for(int i=0;i<Size;i++){
        
        cout<<i<<"#: "<<list[i]<<", ";
    }
    cout<<endl;
    
}

//Used C:\\Users\\hope4\\Desktop\\COMSC 210 Work\\210-Lab-12\\List.txt
int main(){
    array<string, Size> GroceryList;
    string filepath;
    
    
    string response;
    while(true){
        cout<<"Welcome to the Grocery List, Enter F to enter a file path or for Manual Input Enter M"<<endl;
        cout<<"Other functions enter L to list the Grocery List,enter E to empty the list, Enter X to exit"<<endl;
        getline(cin,response);
        if(response=="F"){
            cout<<"Please enter file path"<<endl;
            getline(cin,filepath);
            ifstream file(filepath);
            if(!file){
                cout<<"error opening file, please try again"<<endl;
            }
            else{
                cout<<"file opened"<<endl;
                cout<<"Entering data now...."<<endl;
                string line;
                int z=0;
                while(getline(file,line)&&z<=GroceryList.size()){
                GroceryList[z]=line;
                z++;
                }
            }
        }
        if(response=="M"){
            string hold;
            for(int i=0;i<Size;i++){
                cout<<"Enter Item for #"<<i;
                getline(cin,hold);


            }   
        }
        if(response=="L"){
         printList(GroceryList);
        }
        if(response=="E"){
            GroceryList.fill("");
            cout<<"GroceryList set to blank"<<endl;
        }
        if(response=="X"){
            break;
        }
    }
    return 1;
}