#include<iostream>
#include<vector>
#include<string>
using namespace std;
int z=-1;
int check(vector<char> vec){
      char ch;
      int x=0,y=5;
      vector<char> s1(vec.size(), '_');
    for(int j=0; j<vec.size()+10; j++){

cout<<"Guess your next alphabet:"<<endl;
cin>>ch;
for(int i=0;i<vec.size(); i++){
    if(vec[i]==ch){
        x++;
        cout<< "Correct! Keep going. Heart left: "<<y<<endl;
        s1[i]=vec[i];
        for(int i=0;i<vec.size(); i++){
            cout<<" "<<s1[i];
        }
    }

}
if(s1==vec){
    cout<<"\nCongratulations! You've guessed the word right.";
    break;
}
if(x==0){
  y--;
    cout<<"Wrong guess! Hearts left :"<<y;
    if(y==0){
        cout<<endl;
        
        cout << "You lost!, the correct word was: ";
    for (char c : vec) {
        cout << c;
    }
    cout<<".";
        return 1;
    }
}
x=0;
cout<<endl;

}

return 1;

}
int stringtovector(string str){
    vector<char> vec(str.begin(), str.end());
   return check(vec);
}
int newword(vector<string> fruitList){
   z++;
   return stringtovector(fruitList[z]);
    
}

int main(){
    vector<string> fruitList = {"watermelon", "apple", "banana", "mango", "orange", "grapes", "pineapple", "strawberry", "dragonfruit" , "pear", "peach", "papaya", "piwi", "guava", "blueberries", "apricot", "cherries", "lemon"};  
     cout<<"Namaskar !"<<endl;
    cout<<"Welcome to hangman game. Word Category: Fruit. \n You have 5 Hearts to start with. Each incorrect guess will cost you 1 Heart. Try to guess the word by suggesting one letter at a time.\n Let's begin!"<<endl;
int next=1;
 while(next!=0){
next=newword(fruitList);

if(next==1){
    cout << " Ready for the next word? (Enter 1 for Yes, 0 for No): ";
            cin >>next;
}
 }
cout<<"Thank you for playing WordGuess by Rohit Chavan. See you soon!\n";
return 0;
}