
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    string txt;
    ifstream truth_file("truth.txt");
    ifstream lie_file("lies.txt");
    int truth_lines=0;
    int lie_lines=0;
    while(getline(truth_file,txt)){
        truth_lines++;}
        while(getline(lie_file,txt)){
            lie_lines++;}
            
            srand(time(0));
            int t1=0,t2=0,l=0;
            while(t1==t2){
                t1=rand()%truth_lines;
                t2=rand()%truth_lines;
                l=rand()%lie_lines;
            }
ifstream tfile("truth.txt");
ifstream lfile("lies.txt");
string truth1;
string truth2;
string lie;
for(int i=0;i<=max(t1,t2);i++){
    string txt;
    getline(tfile,txt);
     if(i==t1){
        truth1=txt;
    }
    else if(i==t2){
        truth2=txt;
    }

}
for(int i=0;i<=max(t1,l);i++);
getline(lfile,lie);
int bullet=1;
int liechecker;
for(int i=0;i<=max(t1,t2);i++){
    if(i==t1){
        cout<<bullet<<". "<<truth1<<endl;
        bullet++;
    }
    else if(i==t2){
        cout<<bullet<<". "<<truth2<<endl;
        bullet++;
    }
    
    else if(i==l){
        cout<<bullet<<". "<<lie<<endl;
        liechecker=bullet;
        bullet++;
    }
}
cout<<"The LIE in this is"<<endl;
int ans;
cin>>ans;
if(ans==liechecker)cout<<"Lessgoo seems like u are a TRUTH WIZARD and yet u fall victim to the lies told by your girl <3\n"<<endl;
else{
    cout<<"-1 LPA\n the LIE is >>"<<endl;
    cout<<lie<<endl;
}
 char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    while (choice == 'y' || choice == 'Y') {
        
            srand(time(0));
            int t1=0,t2=0,l=0;
            while(t1==t2){
                t1=rand()%truth_lines;
                t2=rand()%truth_lines;
                l=rand()%lie_lines;
            }
ifstream tfile("truth.txt");
ifstream lfile("lies.txt");
string truth1;
string truth2;
string lie;
for(int i=0;i<=max(t1,t2);i++){
    string txt;
    getline(tfile,txt);
    if(i==t1){
        truth1=txt;
    }
    else if(i==t2){
        truth2=txt;
    }

}

for(int i=0;i<=max(t1,t2);i++)
getline(lfile,lie);
int bullet=1;
int liechecker;
for(int i=0;i<=max(t1,l);i++){
    if(i==t1){
        cout<<bullet<<". "<<truth1<<endl;
        bullet++;
    }
    else if(i==t2){
        cout<<bullet<<". "<<truth2<<endl;
        bullet++;
    }
    
    else if(i==l){
        cout<<bullet<<". "<<lie<<endl;
        liechecker=bullet;
        bullet++;
    }
}
cout<<"The LIE in this is"<<endl;
int ans;
cin>>ans;
if(ans==liechecker)cout<<"Lessgoo seems like u are a TRUTH WIZARD and yet u fall victim to the lies told by your girl <3 \n"<<endl;
else{
    cout<<"-1 LPA\n the LIE is >>"<<endl;
    cout<<lie<<endl;
}
cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    }

return 0;
}


