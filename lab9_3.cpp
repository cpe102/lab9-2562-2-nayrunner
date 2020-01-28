#include<fstream>
#include<iostream>
#include<math.h>
#include<string>
#include<cstdlib>
using namespace std;
 
int main(){
  int count= 0 ;
  float sum= 0 ,sumsum = 0;
  double mean ,sd ;
  string textline;
  ifstream source ("C:\\Users\\Admin\\Desktop\\c##\\git\\lab9-2562-2-nayrunner\\score.txt");
  while (getline(source,textline)){

      sum +=atof(textline.c_str());
      sumsum += (atof(textline.c_str())*atof(textline.c_str()));

      count++;
  }

  
  mean = sum/count;
  cout<<"Number of data = "<<count<<endl;
  cout<<"Mean = "<<mean<<endl;
  sd =(sumsum/count)-(mean*mean);
  cout<<"Standard deviation = "<<sqrt(sd);
  source.close();
  
  
  return 0;
}
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
