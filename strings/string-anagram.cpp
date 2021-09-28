#include <bits/stdc++.h>
using namespace std;
#define noch 256

// strings to check if anagram
int main() {
    string str1, str2;
    getline(cin,str1);
    getline(cin,str2);
    int count1[noch] = {0};
    int count2[noch]= {0};
    int flag=1,i;
    for(i=0;str1[i] && str2[i];i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
    //checking if same length
    if(str1[i] || str2[i])
    flag=0;
    for(i=0;i<noch;i++)
    if(count1[i]!=count2[i])
    flag=0;
    if(flag==1)
    cout<<"Anagram";
    else cout<<"Not an anagram";
    return 0;
}
