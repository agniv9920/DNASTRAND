#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int T, n;
    cin>>T;    //user input of number of testcases
    string s;  //declaring the dnastrand string which contains only A, T, C and G only.
    
    //Iterating while loop till T not equal to zero and the loop will take the input strand and convert it to complementary strand.
    
    while(T--)
    {
        cin>>n;   //user input of n characters of dna string
        cin>>s;   //user input of string 
        
        //logic for swapping input strand to complementary strand.
        //for loop will iterate through the length of the string and compare each character thereby swapping to its complement character.
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
                s[i] = 'T';
            }
            else if(s[i]=='T')
            {
                s[i] = 'A';
            }
            else if(s[i]=='C')
            {
                s[i] = 'G';
            }
            else if(s[i]=='G')
            {
                s[i] = 'C';
            }
            else
            {
                cout<<"Check input";
            }
        }
        cout<<s<<endl;   //printing the output complementary dnastrand.
    }
    return 0;
}
