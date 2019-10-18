/* 
 * File:   main.cpp
 * Author: Akshita Gandra
 * Created on July 25th, 2018, 11:23 AM
 * Purpose:  Project 2
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <fstream> 
#include <vector>
#include <math.h>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
 void ran(int A, int D, int *s) {

    *s = A + D;
}
 
  int disp(int);
  float disp(float);
 
void arra(string cards[]) {
    const int size = 11; 
    for (int count = 0; count < size; count++) { 
        cout << cards[count] << " ";
    }
    cout << endl;
    }


int lin(const int[], int, int);
//void some(vector<string>& v) 
//{   v.push_back(v);
    //cout << v;
//};



void sel(int[], int);
void swap(int &, int &); 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    //all variables listed below, string float and char
    
    bool loop = true; 
    while (loop == true) {
    
        
        
    float ten = 10;
    string name, action, action2, swap1, choice, choice2, pick1, diff;
    char input;
    const string S = "S";
    const string E = "E";
    const string P = "P";
    const string Y = "Y"; 
    const string N = "N";
    //const string Yes = "Yes"; 
    //const string No = "No";
    
    srand(time(NULL));
    //Initial Variables
    int A = (rand() % 10) + 1;
    int B = (rand() % 10) + 1;
    int C = (rand() % 10) + 1;
    int D = (rand() % 10) + 1;
    
    int F = (rand() % 10) + 1;
    int G = (rand() % 10) + 1;
    int H = (rand() % 10) + 1;
    int I = (rand() % 10) + 1;
    
    int J = (rand() % 10);
    int K = (rand() % 10);
    static int sum, sum2, sum3, sum4, sum5, sum6;
    static int sum7, sum8, sum9, sum10;
    int s;
    int z = 0;
    //Map/Process Inputs to Outputs
    
    //introduction and rules for the game
    
    
    
    cout << "Welcome to Rat-a-Tat Cat, a card game!" << endl; 
    
   
    cout << "You will be dealt cards, each with a number between "; 
    cout << disp(z) << " and " << disp(ten) <<", which will add up to a sum for the score." << endl;
    cout << "You will be able to draw one card to swap with any of your four cards." << endl; 
    cout << "But only the first and fourth cards are visible. The second and third are hidden until the end." << endl;
    cout << "\nIf you receive a 10 card, this counts as a Draw One Extra card." << endl;
    cout << "You will be able to draw one new card and choose to swap or not with all four visible cards." << endl;
    cout << "The player (either you as Player 1 or the computer, Player 2) will win with the lowest score." << endl << endl;
    cout << "Here are the cards you could get: " << endl;
    const int size = 11;
    string cards[size] = {
        "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10."    
    };
    arra(cards);
    
   
    
    cout << "\nPlease enter your name: " << endl; 
        cin  >> name; 
        
        vector <string> v; 
        v.push_back(name); 
        v[0]=name; 
        cout << "Your name is " << v[0] << endl;
        
        //some(ra);
   
        
    cout << "\nCards will be distributed now." << endl;
    cout << "Please type S to start or E to end game." << endl; 
    
    //option to start or exit
    
    
    do{
        cin >> action;
    if(action == "S"){
        cout << "Starting game." << endl << endl;
        break;
    }
    if(action == "E") {
        cout << "You are exiting the game." << endl;
        exit(0);
    }
   else {
        cout << "Please enter S or E." << endl << endl;  
   }} while(action != "S" && action != "E");
   
   //cards displayed below, only first and fourth
   
   cout << "Here are your first and fourth cards. The second and third are face down." << endl; 
   
   cout << A << endl;
   //cout << B << endl;
   //cout << C << endl;
   cout << D << endl;
   //sum = A + B + C + D;
   //cout << "\nAnd here is your sum: " << sum << endl;
   
   int add(int A, int D);
    cout << "The sum of cards A and D is: " << add(A, D) << endl;
    
    cout << "Double checking with pass by reference." << endl;
    ran(A, D, &s);
    cout << "Confirmed the sum of cards A and D is: " << s << endl;
   
   //option to swap a card, gives options for all cards
   
   cout << "\nThe card on the deck is " << J <<". Would you like to swap one of your four cards?" << endl; 
   cout << "Please type Y for yes or N for no." << endl;
   cout << "Even though you only know cards A and D you can swap any of the four cards." << endl;
  
   do{
        cin >> swap1;
if(swap1 == "Y"){
cout << "\nWhich card (first number is A, second is B, third is C, fourth is D) would you like to swap?" << endl;
        
            do{
            cin  >> choice;
                if(choice == "A"){
                cout << "\nDisplaying new cards." << endl;
                cout << J << endl;
                cout << B << endl;
                cout << C << endl;
                cout << D << endl;
                sum3 = J + B + C + D; 
                cout << "\nAnd here is your new sum: " << sum3 << endl;
                
                cout << "Here are the cards in order: ";
                int big = 4;
                int array[big] = {J, B, C, D};
      
                for(int i=0; i<big; i++)
                {
            
                 }  
                cout<<endl; 
     
                int temp;
                for(int i2=0; i2<=3; i2++)
                {
                for(int j=0; j<3; j++)
                {
                if(array[j]>array[j+1])
                {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;        
                }
                }         
                } 
   
                for(int i3=0; i3<4; i3++)
                {
                cout<<"\t\t\tValue at "<<i3+1<<" Index: "<<array[i3]<<endl;  
                }   
   
                cout << endl;
                
                
                
                
                if(A == ten || B == ten || C == ten || D == ten) {
                    goto Draw;
                }
                
                
                cout << "\nPress P to continue to see Player 2's cards, or E to exit game." << endl;
                do{
                cin >> action2;
                if(action2 == "P"){
                cout << "\nDisplaying Player 2's cards." << endl;
                break;
                }
                if(action2 == "E") {
                cout << "You are exiting the game." << endl;
                exit(0);
                }
                else {
                cout << "Please enter P or E." << endl << endl;  
                }} while(action2 != "P" && action2 != "E");
    
                cout << F << endl;
                cout << G << endl;
                cout << H << endl;
                cout << I << endl;
                sum2 = F + G + H + I;
                cout << "\nAnd here is their sum: " << sum2 << endl << endl;
   
                
                
                int sarray[big] = {F, G, H, I};
      
                sel(sarray, big);
                cout << "The sorted values: " << endl;
                for(auto element : sarray)
                    cout << element << " " << endl;
                cout<<endl; 
     
                
                
                
                if(sum2 < sum3){
                cout << "Player 2 Wins. Better luck next time!" << endl;
                break;
                }
                if(sum3 < sum2) {
                cout << name << " Wins. Yay!" << endl;
                break;
                }
                if(sum3 == sum2) {
                cout << name << "and Player 2 have tied." << endl;
                break;
                }}
            
            
            
            
                if(choice == "B"){
                cout << "\nDisplaying new cards." << endl;
                cout << A << endl;
                cout << J << endl;
                cout << C << endl;
                cout << D << endl;
                sum4 = A + J + C + D; 
                cout << "\nAnd here is your new sum: " << sum4 << endl;
                
                cout << "Here are the cards in order: ";
                
                int big = 4;
                int array2[big] = {A, J, C, D};
      
                for(int i=0; i<big; i++)
                {
            
                 }  
                cout<<endl; 
     
                int temp2;
                for(int i2=0; i2<=3; i2++)
                {
                for(int j=0; j<3; j++)
                {
                if(array2[j]>array2[j+1])
                {
                temp2=array2[j];
                array2[j]=array2[j+1];
                array2[j+1]=temp2;        
                }
                }         
                } 
   
                for(int i3=0; i3<4; i3++)
                {
                cout<<"\t\t\tValue at "<<i3+1<<" Index: "<<array2[i3]<<endl;  
                }   
   
                cout << endl;
                
                
                
                if(A == ten || B == ten || C == ten || D == ten) {
                    goto Draw;
                }
                
                cout << "\nPress P to continue to see Player 2's cards, or E to exit game." << endl;
                do{
                cin >> action2;
                if(action2 == "P"){
                cout << "\nDisplaying Player 2's cards." << endl;
                break;
                }
                if(action2 == "E") {
                cout << "You are exiting the game." << endl;
                exit(0);
                }
                else {
                cout << "Please enter P or E." << endl << endl;  
                }} while(action2 != "P" && action2 != "E");
    
                cout << F << endl;
                cout << G << endl;
                cout << H << endl;
                cout << I << endl;
                sum2 = F + G + H + I;
                cout << "\nAnd here is their sum: " << sum2 << endl << endl;
   
                if(sum2 < sum4){
                cout << "Player 2 Wins. Better luck next time!" << endl;
                break;
                }
                if(sum4 < sum2) {
                cout << name << " Wins. Yay!" << endl;
                break;
                }
                if(sum4 == sum2) {
                cout << name << "and Player 2 have tied." << endl;
                break;
                }}
                
            
            
                 
                if(choice == "C"){
                cout << "\nDisplaying new cards." << endl;
                cout << A << endl;
                cout << B << endl;
                cout << J << endl;
                cout << D << endl;
                sum5 = A + B + J + D; 
                cout << "\nAnd here is your new sum: " << sum5 << endl;
                
                
                cout << "Here are the cards in order: ";
                
                int big = 4;
                int array3[big] = {A, B, J, D};
      
                for(int i=0; i<big; i++)
                {
            
                 }  
                cout<<endl; 
     
                int temp3;
                for(int i2=0; i2<=3; i2++)
                {
                for(int j=0; j<3; j++)
                {
                if(array3[j]>array3[j+1])
                {
                temp3=array3[j];
                array3[j]=array3[j+1];
                array3[j+1]=temp3;        
                }
                }         
                } 
   
                for(int i3=0; i3<4; i3++)
                {
                cout<<"\t\t\tValue at "<<i3+1<<" Index: "<<array3[i3]<<endl;  
                }   
   
                cout << endl;
                
                
                if(A == ten || B == ten || C == ten || D == ten) {
                    goto Draw;
                }
                
                cout << "\nPress P to continue to see Player 2's cards, or E to exit game." << endl;
                do{
                cin >> action2;
                if(action2 == "P"){
                cout << "\nDisplaying Player 2's cards." << endl;
                break;
                }
                if(action2 == "E") {
                cout << "You are exiting the game." << endl;
                exit(0);
                }
                else {
                cout << "Please enter P or E." << endl << endl;  
                }} while(action2 != "P" && action2 != "E");
    
                cout << F << endl;
                cout << G << endl;
                cout << H << endl;
                cout << I << endl;
                sum2 = F + G + H + I;
                cout << "\nAnd here is their sum: " << sum2 << endl << endl;
   
                if(sum2 < sum5){
                cout << "Player 2 Wins. Better luck next time!" << endl;
                break;
                }
                if(sum5 < sum2) {
                cout << name << " Wins. Yay!" << endl;
                break;
                }
                if(sum5 == sum2) {
                cout << name << "and Player 2 have tied." << endl;
                break;
                }}
                
                
            
            
                if(choice == "D"){
                cout << "\nDisplaying new cards." << endl;
                cout << A << endl;
                cout << B << endl;
                cout << C << endl;
                cout << J << endl;
                sum6 = A + B + C + J; 
                cout << "\nAnd here is your new sum: " << sum6 << endl;
                
                
                cout << "Here are the cards in order: ";
                
                int big = 4;
                int array4[big] = {A, B, C, J};
      
                for(int i=0; i<big; i++)
                {
            
                 }  
                cout<<endl; 
     
                int temp4;
                for(int i2=0; i2<=3; i2++)
                {
                for(int j=0; j<3; j++)
                {
                if(array4[j]>array4[j+1])
                {
                temp4=array4[j];
                array4[j]=array4[j+1];
                array4[j+1]=temp4;        
                }
                }         
                } 
   
                for(int i3=0; i3<4; i3++)
                {
                cout<<"\t\t\tValue at "<<i3+1<<" Index: "<<array4[i3]<<endl;  
                }   
   
                cout << endl;
                
                
                if(A == ten || B == ten || C == ten || D == ten) {
                    goto Draw;
                }
                
                cout << "\nPress P to continue to see Player 2's cards, or E to exit game." << endl;
                do{
                cin >> action2;
                if(action2 == "P"){
                cout << "\nDisplaying Player 2's cards." << endl;
                break;
                }
                if(action2 == "E") {
                cout << "You are exiting the game." << endl;
                exit(0);
                }
                else {
                cout << "Please enter P or E." << endl << endl;  
                }} while(action2 != "P" && action2 != "E");
    
                cout << F << endl;
                cout << G << endl;
                cout << H << endl;
                cout << I << endl;
                sum2 = F + G + H + I;
                cout << "\nAnd here is their sum: " << sum2 << endl << endl;
   
                if(sum2 < sum6){
                cout << "Player 2 Wins. Better luck next time!" << endl;
                break;
                }
                if(sum6 < sum2) {
                cout << name << " Wins. Yay!" << endl;
                break;
                }
                if(sum6 == sum2) {
                cout << name << "and Player 2 have tied." << endl;
                break;
                }}
               
                
                
                else {
                cout << "Please enter A, B, C, or D." << endl << endl;  
                }} while(choice != "A" && choice != "B" && choice != "C" && choice != "D");
                
}} while(swap1 != "Y" && swap1 != "N"); 
    
    if(swap1 == "N") {
        cout << "You are not swapping." << endl << endl;
        
                cout << "Here are all your cards. " << endl; 
                
                cout << A << endl;
                cout << B << endl;
                cout << C << endl;
                cout << D << endl;
                sum = A + B + C + D;
                cout << "\nAnd here is your sum: " << sum << endl;
                
                
                
                
                
                
                if(A == ten || B == ten || C == ten || D == ten) {
                    goto Draw;
                }
                
                
                
                
                cout << "\nPress P to continue to see Player 2's cards, or E to exit game." << endl;
                do{
                cin >> action2;
                if(action2 == "P"){
                cout << "\nDisplaying Player 2's cards." << endl;
                break;
                }
                if(action2 == "E") {
                cout << "You are exiting the game." << endl;
                exit(0);
                }
                else {
                cout << "Please enter P or E." << endl << endl;  
                }} while(action2 != "P" && action2 != "E");
    
                cout << F << endl;
                cout << G << endl;
                cout << H << endl;
                cout << I << endl;
                sum2 = F + G + H + I;
                cout << "\nAnd here is their sum: " << sum2 << endl << endl;
   
                
                
                
                
                if(sum2 < sum){
                cout << "Player 2 Wins. Better luck next time!" << endl;
                //break;
                }
                if(sum < sum2) {
                cout << name << " Wins. Yay!" << endl;
                //break;
                }
                if(sum == sum2) {
                cout << name << " and Player 2 have tied." << endl;
                //break;
                }
                
                //this displays options for the Draw One card, or the 10 card
                
                if(A == ten || B == ten || C == ten || D == ten) { 
                    Draw:
                    cout << "\nYou get to Draw One!" << endl; 
                    cout << "The next card in the deck is " << K << endl;
                    cout << "Would you like to pick this card to swap? Type Y or N." << endl; 
                    cin  >> pick1; 
                }
                   
                
                
                
                if(pick1 == "Y"){
cout << "\nWhich card (first number is A, second is B, third is C, fourth is D) would you like to swap?" << endl;
        
            do{
            cin  >> choice2;
                if(choice2 == "A"){
                cout << "\nDisplaying new cards." << endl;
                cout << K << endl;
                cout << B << endl;
                cout << C << endl;
                cout << D << endl;
                sum7 = K + B + C + D; 
                cout << "\nAnd here is your new sum: " << sum7 << endl;
                
                cout << "\nPress P to continue to see Player 2's cards, or E to exit game." << endl;
                do{
                cin >> action2;
                if(action2 == "P"){
                cout << "\nDisplaying Player 2's cards." << endl;
                break;
                }
                if(action2 == "E") {
                cout << "You are exiting the game." << endl;
                exit(0);
                }
                else {
                cout << "Please enter P or E." << endl << endl;  
                }} while(action2 != "P" && action2 != "E");
    
                cout << F << endl;
                cout << G << endl;
                cout << H << endl;
                cout << I << endl;
                sum2 = F + G + H + I;
                cout << "\nAnd here is their sum: " << sum2 << endl << endl;
   
                if(sum2 < sum7){
                cout << "Player 2 Wins. Better luck next time!" << endl;
                break;
                }
                if(sum7 < sum2) {
                cout << name << " Wins. Yay!" << endl;
                break;
                }
                if(sum7 == sum2) {
                cout << name << "and Player 2 have tied." << endl;
                break;
                }}
            
            
            
            
                if(choice2 == "B"){
                cout << "\nDisplaying new cards." << endl;
                cout << A << endl;
                cout << K << endl;
                cout << C << endl;
                cout << D << endl;
                sum8 = A + K + C + D; 
                cout << "\nAnd here is your new sum: " << sum8 << endl;
                
                cout << "\nPress P to continue to see Player 2's cards, or E to exit game." << endl;
                do{
                cin >> action2;
                if(action2 == "P"){
                cout << "\nDisplaying Player 2's cards." << endl;
                break;
                }
                if(action2 == "E") {
                cout << "You are exiting the game." << endl;
                exit(0);
                }
                else {
                cout << "Please enter P or E." << endl << endl;  
                }} while(action2 != "P" && action2 != "E");
    
                cout << F << endl;
                cout << G << endl;
                cout << H << endl;
                cout << I << endl;
                sum2 = F + G + H + I;
                cout << "\nAnd here is their sum: " << sum2 << endl << endl;
   
                if(sum2 < sum8){
                cout << "Player 2 Wins. Better luck next time!" << endl;
                break;
                }
                if(sum8 < sum2) {
                cout << name << " Wins. Yay!" << endl;
                break;
                }
                if(sum8 == sum2) {
                cout << name << "and Player 2 have tied." << endl;
                break;
                }}
                
            
            
                 
                if(choice2 == "C"){
                cout << "\nDisplaying new cards." << endl;
                cout << A << endl;
                cout << B << endl;
                cout << K << endl;
                cout << D << endl;
                sum9 = A + B + K + D; 
                cout << "\nAnd here is your new sum: " << sum9 << endl;
                
                cout << "\nPress P to continue to see Player 2's cards, or E to exit game." << endl;
                do{
                cin >> action2;
                if(action2 == "P"){
                cout << "\nDisplaying Player 2's cards." << endl;
                break;
                }
                if(action2 == "E") {
                cout << "You are exiting the game." << endl;
                exit(0);
                }
                else {
                cout << "Please enter P or E." << endl << endl;  
                }} while(action2 != "P" && action2 != "E");
    
                cout << F << endl;
                cout << G << endl;
                cout << H << endl;
                cout << I << endl;
                sum2 = F + G + H + I;
                cout << "\nAnd here is their sum: " << sum2 << endl << endl;
   
                if(sum2 < sum9){
                cout << "Player 2 Wins. Better luck next time!" << endl;
                break;
                }
                if(sum9 < sum2) {
                cout << name << " Wins. Yay!" << endl;
                break;
                }
                if(sum9 == sum2) {
                cout << name << "and Player 2 have tied." << endl;
                break;
                }}
                
                
            
            
                if(choice2 == "D"){
                cout << "\nDisplaying new cards." << endl;
                cout << A << endl;
                cout << B << endl;
                cout << C << endl;
                cout << K << endl;
                sum10 = A + B + C + K; 
                cout << "\nAnd here is your new sum: " << sum10 << endl;
                
                cout << "\nPress P to continue to see Player 2's cards, or E to exit game." << endl;
                do{
                cin >> action2;
                if(action2 == "P"){
                cout << "\nDisplaying Player 2's cards." << endl;
                break;
                }
                if(action2 == "E") {
                cout << "You are exiting the game." << endl;
                exit(0);
                }
                else {
                cout << "Please enter P or E." << endl << endl;  
                }} while(action2 != "P" && action2 != "E");
    
                cout << F << endl;
                cout << G << endl;
                cout << H << endl;
                cout << I << endl;
                sum2 = F + G + H + I;
                cout << "\nAnd here is their sum: " << sum2 << endl << endl;
   
                if(sum2 < sum10){
                cout << "Player 2 Wins. Better luck next time!" << endl;
                break;
                }
                if(sum10 < sum2) {
                cout << name << " Wins. Yay!" << endl;
                break;
                }
                if(sum10 == sum2) {
                cout << name << "and Player 2 have tied." << endl;
                break;
                }}
               
                
                
                else {
                cout << "Please enter A, B, C, or D." << endl << endl;  
                }} while(choice2 != "A" && choice2 != "B" && choice2 != "C" && choice2 != "D");
                
}} while(swap1 != "Y" && swap1 != "N"); 
    
    if(pick1 == "N") {
        cout << "You are not swapping." << endl << endl;
                
                
                
                cout << "\nPress P to continue to see Player 2's cards, or E to exit game." << endl;
                do{
                cin >> action2;
                if(action2 == "P"){
                cout << "\nDisplaying Player 2's cards." << endl;
                break;
                }
                if(action2 == "E") {
                cout << "You are exiting the game." << endl;
                exit(0);
                }
                else {
                cout << "Please enter P or E." << endl << endl;  
                }} while(action2 != "P" && action2 != "E");
    
                cout << F << endl;
                cout << G << endl;
                cout << H << endl;
                cout << I << endl;
                sum2 = F + G + H + I;
                cout << "\nAnd here is their sum: " << sum2 << endl << endl;
                
               
                
                if(sum2 < sum){
                cout << "Player 2 Wins. Better luck next time!" << endl;
                //break;
                }
                if(sum < sum2) {
                cout << name << " Wins. Yay!" << endl;
                //break;
                }
                if(sum == sum2) {
                cout << name << " and Player 2 have tied." << endl;
                //break;
                }}
   
  
   
  
   
    cout << "Please enter assessment of game on a scale of 1-10, with 10 being excellent game." << endl;
            cin >> diff;
            ofstream file;
            file.open ("File.txt"); 
            cout << "Writing this to file."; 
            file << diff; 
            file.close(); 
            
            ifstream file2; 
            string difficulty; 
            file2.open("File.txt");
            cout << "\n\nThis is what you entered: " << endl; 
            file2 >> difficulty; 
            cout << difficulty << endl;
   
   
            const int ze = 4; 
            int somearr[ze]= {A, B, C, D}; 
            int results;
            results = lin(somearr, ze, 0);
            if (results == -1)
                cout << "\nSorry about not getting any 0 cards!" << endl;
            else { cout << "\nCongrats on a 0 card this game!"; 
            cout << (results + 1) << endl;
            }
            
   
   //requests whether or not you would like to play another round
    
    cout << "Would you like to play again? Type Y or N." << endl; 
                cin >> input;
                switch(input){
                
                    case 'Y' :
                cout << "Restarting game." << endl << endl;
                break;
                    case 'N' :
                
                cout << "You are exiting the game." << endl;
                for (int i = 0; i < 3; i++) { 
                    cout << "Goodbye!" << endl;
                }
                //exit(0);
                loop = false;
                
                break;
              
    
    }
                
              
                
                
}
        
    //Exit program!
    return 0;
}

  int add(int A, int D)
{
    return A + D;
}
  
  int disp(int z) {
      return z;
  }
  
  float disp(float ten) { 
      
      return ten;
  }
  
  void sel(int array[], int big) {
      
      int minin, minval;
      for (int start = 0; start < (big-1); start++)
      {
          minin=start;
          minval=array[start];
          for (int index = start + 1; index < big; index++) 
          { if (array[index] < minval)
          {minval = array[index];
          minin = index; 
          }
      }
          swap(array[minin], array[start]);
  }
  }
  
  void swap(int &y, int &u)
  {int temp = y; 
  y=u;
  u=temp; 
  }
  
  int lin(const int arr[], int siz, int val)
  {int ind = 0; 
  int pos = -1; 
  bool found = false; 
  while (ind < siz && !found)
  { if (arr[ind] == val) 
  {found = true; 
  pos = ind; 
  } 
  ind++; 
  } 
  return pos; 
  }