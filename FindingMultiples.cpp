
#include <iostream>
using namespace std;

int pair_int (int num1 , int num2);
void printpair (int num1 , int num2);


int main(int argc, char const *argv[])
{
int pair1, pair2;
cout<<"Enter your first desire integer"<<endl;
cin>>pair1;
cout<<"Enter your second desire integer"<<endl;
cin>>pair2;
if (pair2>pair1) {exit(0);}
printpair (pair1, pair2);
  return 0;
}

int pair_int (int num1, int num2)

  {
    float z;

    z=(num1%num2);
    if(z==0)

    std::cout << "True" << std::endl;
    else
    std::cout << "False" << std::endl;

    std::cout<<"Remainder is: "<< z <<endl;
  }

void printpair (int num1 , int num2)
    {
      std::cout <<pair_int(num1, num2) << std::endl;

    }
