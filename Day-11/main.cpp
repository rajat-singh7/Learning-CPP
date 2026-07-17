//RECURSION
// #include <iostream>
// using namespace std;

 // factorial Of a Number
// int factorial(int n){
//     if (n<=1){
//         return 1;
//     }
//     return n* factorial(n-1);
//}
// FIBONACCI SEQUENCE:
// int fibo(int n){
//     if(n<2){
//         return 1;
//     }
//     return fibo(n-2) + fibo(n-1);
// }

// int main(){
    // factorial Of a Number
    // n! = n * (n-1)!
    // int a;
    // cout<<"Enter A number:"<<endl;
    // cin>>a;
    // cout<<"The Factorial of "<<a<<" is "<<factorial(a)<<endl;
    // FIBONACCI SEQUENCE:
    // int b;
    // cout<<"Enter Any Number to find out their fibonacci:"<<endl;
    // cin>>b;
    // cout<<"The term in fibonacci sequence at position "<<b<< " is "<<fibo(b)<<endl; 
    // REVERSE A STRING USING RECURSION


    // return 0;
//}



/**************** Practice some question on recursion *****************/
//QUESTION NO-01 REVERSE A STRING USING RECURSION
// void reverse(string s){
//     if(s.length()==0){
//         return;
//     }
//     string ros = s.substr(1); // Cuts off the very first letter and saves the Remaining part.
//     reverse(ros);
//     cout<<s[0];
// }

// int main(){
//     reverse("Rajat");
//     return 0;

// }

// QUESTION NO.02 REPLACE PI WITH 3.14 IN STRING
// void replacePi(string s){
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replacePi(s.substr(2));

//     }
//     else{
//         cout<<s[0];
//         replacePi(s.substr(1));
//     }
// }
// int main(){
//     replacePi("pippppiiiipi");
//     return 0;
// }
// QUESTION NO.03 TOWER OF HANOI
// void TowerOfHanoi(int n,char src,char dest, char helper){
//     if(n==0){
//         return; //base case
//     }
//     TowerOfHanoi(n-1,src,helper,dest);
//     cout<<"Move From "<<src<<" to "<<dest<<endl;
//     TowerOfHanoi(n-1,helper,dest,src);
// }

// int main(){
//     TowerOfHanoi(3 ,'A','C','B');
    //Output will be:
    // Move From A to C
    // Move From A to B
    // Move From C to B
    // Move From A to C
    // Move From B to A
    // Move From B to C
    // Move From A to C
//     return 0;
// }
//QUESTION NO.04-REMOVE ALL DUPLICATE FROM THE STRING:
// #include <iostream>
// using namespace std;
// 
// 
// string RemoveDuplicate(string s ){
    // if(s.length()==0){
        // return "";//Empty string
    // }
    // char ch=s[0];
    // string ans = RemoveDuplicate(s.substr(1));
// 
    // if(ch==ans[0]){
        // return ans;
    // }
    // return(ch+ans);
// }
// 
// int main(){
    // cout<<RemoveDuplicate("aaaabbbcccdddeeeffg")<<endl;
    // return 0;
// }
//QUESTION NO.05-MOVE ALL X TO THE END OF THE STRING:
// "axxbdxcefxhix"------>"abdcefhixxxxx"
// #include<iostream>
// using namespace std;
// 
// string MoveAllX(string s){
    // if(s.length()==0){
        // return "";
    // }
    // char ch=s[0];
    // string ans = MoveAllX(s.substr(1));
// 
    // if(ch=='x'){
        // return ans + ch;
    // }
    // return ch + ans;
// }
// int main()
// {
    // cout<<MoveAllX("axxbdxcefxhix");
    // return 0;
// }

//QUESTION NO.06-GENERATE ALL SUBSRTING OF A STRING:
#include<iostream>
using namespace std;

void subsequence(string s , string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string restofsrting=s.substr(1);

    subsequence(restofsrting,ans);
    subsequence(restofsrting,ans+ch);
}


int main()
{
    subsequence("ABC","");
    return 0;
}


