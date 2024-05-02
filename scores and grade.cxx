#include <iostream>
#include <string>
#include <map>

using namespace std;
int main(){
   int scores;
      printf("       How to know your grading with scores attached\n"); 
      printf("       Please enter a score to know your grading\n     ");
      scanf("%d",&scores);
if (scores>=70){
    puts("     A");
    puts("     Excellent ");
}
else if (scores>=60){
    puts("     B");
    puts("     Very Good");
}
else if (scores>=50){
    puts("     C");
    puts("     Good ");
}
else if (scores>=45){
    puts("     D");
    puts("     Passed");
}
else if (scores>=40){
    puts("     E");
    puts("     Fair");
}
else if (scores<=39){
    puts("     F");
    puts("     Failed ");
}

}
