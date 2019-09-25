#include <iostream>

using namespace std;
int cont = 0;
bool temSaida(int lab[100][100],int i,int j,int limite){
  if(lab[i][j]==2){
    return false;
  }
  if(lab[i][j]==1){
  //  cout<<"Falso"<<endl;
    return false;
  }
  if((lab[i][j]==0||lab[i][j]==2||lab[i][j]==3) && ((i==(limite-1)||j==(limite-1))||(i==0||j==0))){
    //  cout<<"Verdadeiro"<<endl;
      return true;
  }
  if((i>=limite||j>=limite)||(i<0||j<0)){
    return false;
  }
  lab[i][j] = 2;
  return temSaida(lab,i-1,j,limite) || temSaida(lab,i+1,j,limite) || temSaida(lab,i,j+1,limite)||temSaida(lab,i,j-1,limite);
}
int main(int argc, char const *argv[]) {
  int matriz[100][100] = {
                            {1,1,1,1,1,1},
                            {1,1,1,0,1,1},
                            {1,1,3,1,1,1},
                            {1,1,0,0,1,1},
                            {1,1,0,0,1,1},
                            {1,1,1,1,1,1}
                          };
  cout<<temSaida(matriz,2,2,6)<<endl;
  cout<<"fim"<<endl;
  return 0;
}
