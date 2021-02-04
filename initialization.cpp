//addition

#include<iostream>
int add(int x, int y );

int main()
{
  int a{5};
  int b{4};
  
  int sum{ add( a, b ) }; 
  std::cout<< sum <<'\n';
  
  return 0;
}

int add(int x, int y )
{
  return x + y;
}
