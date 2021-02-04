//subtraction

#include<iostream>
int add(int x, int y );
int subtraction(int x, int y );
int multiplication(int x, int y );


int main()
{
  int x{5};
  int y{4};
  
  int total{ add( x, y ) }; 
  std::cout<< total <<'\n';
  
  
  return 0;
}

int add(int x, int y )
{
  return x + y;
}
