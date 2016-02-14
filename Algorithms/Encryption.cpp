#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    char sent[82],s[82];
    cin.getline(sent,82);
    int j=0;
    for(int i=0;sent[i]!='\0';i++)
    {
        if(sent[i]!=' ')
    {
        s[j]=sent[i];
        j++;
    }
    }
    s[j]='\0';
    int r=floor(sqrt(strlen(s)));
    int c=ceil(sqrt(strlen(s)));
    for(j=0;j<c;j++)
        {
        for(int i=j;i<strlen(s);i+=c)
            cout<<s[i];
        cout<<' ';
    }

    return 0;
}
