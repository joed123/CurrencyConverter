#include<iostream>
#include<cstdlib>
#include<string>
#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include<sys/types.h>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
  int choose;
  cout << "Do you wish to run the converter program (1 for yes)?" << endl;
  cin >> choose;
  if (choose == 1){
    string filetext;
    ifstream myfile;
    myfile.open("/Users/joe/Desktop/Passer.txt");
    int pounds;
    getline (myfile,filetext);
    int num = stoi(filetext);
    pounds = num/1.3845;
    ofstream recfile;
    recfile.open("Passer2.txt");
    recfile << pounds;
    myfile.close();
    recfile.close();
  }
  else{
    cout << "You choose not to run the program" << endl;
  }
return 0;
}
