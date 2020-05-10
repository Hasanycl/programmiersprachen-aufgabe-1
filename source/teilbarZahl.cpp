#include<iostream>
using namespace std;


int main()
{
   //Every integer from 1 to 10 divides evenly into some integer from 11 to 20. Therefore it’s not necessary to check 1-10, 11-20 is enough and we can increment i always by 20 because 
  // the number we should have at final position has to be a multiple of 20

    int i = 20;

    while (i % 11 != 0 || i % 12 != 0 || i % 13 != 0 ||i % 14 != 0 ||i % 15 !=0 || i % 16 != 0 ||i % 17 != 0 ||i % 18 != 0 || i % 19 != 0 || i % 20 != 0) {
        i += 20;
    }

    cout << i;

};