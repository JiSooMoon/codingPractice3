#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    vector<string> words;
    string empty;
    getline(cin,empty);

    unordered_set<string> lists;
    for(int i = 0; i < N; i++){
        
        string line;
        getline(cin,line);
        if(!lists.insert(line).second){
            cout << "IT'S BEEN DONE ALREADY\n";
           
        }else{
             cout << line << endl;
           // count++;
        }
    }
   
    
    
  
   

    
   
    return 0;
}

/*
input:
5
Jelly Slugs
Flex Tape
Spider Action Figure
Plumbus
Flex Tape

output:
Jelly Slugs
Flex Tape
Spider Action Figure
Plumbus
IT'S BEEN DONE ALREADY


*/
