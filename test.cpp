// #include "iostream"
// using namespace std;
// 
// int main(int argc, char const *argv[]) {
//   int input;
//   cout << "請輸入最長邊" << '\n';
//   cin >> input;
//   for (size_t i = 0; i <= input; i++) {
//     for (size_t j = 0; j <= intut - i; j++) {
//       cout << " ";
//     }
//     for (size_t k = 0; k <= i*2; k++) {
//       cout << "#" ;
//     }
//     cout << endl;
//   }
// }

// #include "iostream"
// using namespace std;
// 
// int main(int argc, char const *argv[]) {
//   int input;
//   cout << "請輸入最長邊" << '\n';
//   cin >> input;
// 
//   for (size_t i = 0; i <= input; i++) {
//     if(i <= input * 2 - 1) {
//     for (size_t j = 0; j <= input - i; j++) {
//       cout << " ";
//     }
//     for (size_t k = 0; k <= i*2 - 1; k++) {
//       cout << "#" ;
//     }
//     cout << endl;
//   }else {
//     for (size_t j = input-1; j <= input - i; j--) {
//       cout << " ";
//     }
//     for (size_t k = input; k <= i*2 - 1; k--) {
//       cout << "#" ;
//     }
//     cout << endl;
//   }
//   }
// }
// 







// #include <stdio.h>
// int main(){
// for(int m=0;m<=4;m++){
// 		for(int n=0;n<=m;n++){
// 			printf(" ");
// 		}
// 		for(int a=0;a<9-m*2;a++){
// 		  printf("*");
// 		}
// 		printf("\n");
// }
// 
// 
// 	return 0;
// }



#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
  int input;
  cout << "請輸入最長邊" << '\n';
  cin >> input;

  for (size_t i = 0; i < input; i++) {
    for (size_t j = 0; j <= input - i; j++) {
      cout << " ";
    }
    for (size_t k = 0; k <= i*2 ; k++) {
      cout << "#" ;
    }
    cout << endl;
  }
}
