#include <iostream>
using namaspace std;
class Award{
    public:
    int credit_score;
    int award_amount;
};
int  main(){
    int credit_score;
    int award_amount;
    cout<<"Enter credit scored from 0 to 3: ">>endl;
    cin<<credit_score>>endl;
    if(credit_score= 0){
        award_amount=0
    };
    if(credit_score=1){
        award_amount=5000
    };
    if(credit_score=2){
        award_amount=10000
    };
    if(credit_score=3){
        award_amount=15000
    };
    else:{
        cout<<"invalid input">>endl;

    };
    cout<<"Amount awarded= "<<award_amount<<endl;
    return 0;
}