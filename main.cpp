#include <iostream>
#include <unistd.h>
using namespace std;
// Problem 1
// int main() {
//     int num,pos=0,neg=0, count=0, sum=0;
//    cout << "Enter a number :(0 is to stop): ";
//     cin >> num;
//     while(num!=0) {
//         count++;
//         sum+=num;
//         cin>>num;
//         if(num>0) {
//             pos++;
//         }
//         else if(num<0) {
//
//             neg++;
//         }
//
//     }
//     cout<<"the number of positive is :"<<pos<<endl;
//     cout<<"the number of negative is :"<<neg<<endl;
//     cout<<"the total is :"<<sum<<endl;
// }

// Problem12
// int main() {
//     int star;
//     cout<<"enter the number:";
//     cin>>star;
//     for(int i=0;i<star;i++) {
//
//         for(int j=0;j<star;j++) {
//  cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// // Problem13
// int main() {
//     int star;
//     cout << "enter the number:";
//     cin >> star;
//     for (int i = 1; i <= star; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// Problem14
// int main() {
//     int n;
//     cout << "Enter depth(0 is to exit): ";
//     cin >> n;
//     if (n == 0) {
//         cout << "There depth is 0" << endl;
//     }
//     else {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 cout <<i;
//             }
//             cout << endl;
//         }
//     }
// }
// Problem15
// int main() {
//     int n;
//     cout << "Enter a number(greater than 0): ";
//     cin >> n;
//     double sum = 0;
//     double a;
//     if (n<=0) {
//         cout << "Invalid input." << endl;
//     }
//     else {
//         for (double i=1; i<=n; i++) {
//             cout <<"1/"<<i;
//             if (i<n) cout<<"+";
//             sum += 1/i;
//
//         }
//         cout <<endl;
//         cout <<"the sum is " << sum << endl;
//     }
//
// }
//Problem 16
// int main() {
//     double  rent=1000, sum=0;
//     for (int i = 1; i <= 5; i++) {
//        if (i>1) rent *= 1.03;
//         sum = sum + rent;
//         cout<<"for year number "<<i <<" rent is "<<rent<<endl;
//         cout<<"for total "<<i <<"years rent is "<<sum<<endl;
//
//     }
// }
// Problem 17
// int main() {
//     int x;
//     cout << "Please enter a number: ";
//     cin >> x;
//     int sum = 0;
//     while (x>0) {
//         sum =sum+x%10;
//         x = x/10;
//     }
//     cout <<" The sum is: " << sum << endl;
// }
// Problem18
// int main() {
//     int binary;
//     cout << "Enter Binary Number: ";
//     cin >> binary;
//     int decimal=0, power=0;
//     while(binary>0) {
//         decimal+=(binary%10)*pow(2,power);
//         power++;
//         binary/=10;
//     }
//     cout <<"the decimal number is " << decimal;
// }
// Problem19
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int orginal = n;
//     for (int i = 2; i <= n; i++) {
//         while (n % i == 0) {
//             cout << i << " ";
//             n /= i;
//         }
//     }
//     cout << endl;
// }
// Problem20
// int main() {
//
// }

// Problem21
// int main() {
//     int n;
//     cout << "Enter the number of seconds: ";
//     cin >> n;
//     while (n != 0) {
//         cout <<n <<"seconds remaining"<<endl;
//         sleep(n);
//         n--;
//     }
// }

//Problem22
int main() {
    int ron=sran()+rand()%100;

}