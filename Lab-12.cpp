// COMSC-210 | Lab 12 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
#include <array>
#include <fstream>
#include <string>

using namespace std;
const int Size=30;

void printList(const array<string,Size>&list){

    
}


int main(){
    array<string, Size> GroceryList;
    string filepath;
    
    
    string response;
    while(true){
        cout<<"Welcome to the Grocery List, Enter F to enter a file path or for Manual Input Enter M"<<endl;
        cout<<"Other functions enter L to list the Grocery List, Enter X to exit"<<endl;
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
                while(getline(file,line)){
                    
                }


            }
        }
        if(response=="M"){
            for(int i=0;i<Size;i++){

            }
            
        }
        if(response=="L"){
            if(GroceryList.empty()!=0){

            }
            else{
                
                cout<<endl<<"Grocery List is empty please fill data!"<<endl<<endl;
            }
        }
        if(response=="X"){
            break;
        }

    }

    return 1;
}