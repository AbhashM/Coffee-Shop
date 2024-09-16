//FA2023_RLCSaleCoffee_Mahto.cpp
#include <iostream> //required headers
#include<iomanip>
using namespace std;

void task1(int &Small_Num, int &Medium_Num , int &Large_Num ) {//User defined function with reference parameters
    int choice;
    int Small = 0, Medium = 0, Large = 0;
    do {//To re display menu
        int s=0, l=0, m=0;
        char currentDate[10];
        _strdate_s(currentDate);
        cout << "FA2023_RLCSALECOFFEE_MAHTO.cpp" << endl;
        cout << "SELECT CUP SIZE - ABHASH MAHTO" << endl;
        cout << left << setw(22) << "Today" << currentDate << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << "1.Small (8oz)   -  $1.59" << endl;
        cout << "2.Medium (12oz) -  $2.29" << endl;
        cout << "3.Large (16oz)  -  $3.79" << endl;
        cout << "0.Done" << endl;
        cout << "Please Select a Size or Press 0 if you are done" << endl;
        cin >> choice;//To select cup size
        switch (choice) {
        case 1:
            cout << "Enter number of Small Cups you want to purchase" << endl;
            cin >> s;//To enter number of cups
            Small = Small + s;//To store the value of how many cups user purchased
            break;
        case 2:
            cout << "Enter number of Medium Cups you want to purchase" << endl;
            cin >> m;
            Medium = Medium + m;
            break;
        case 3:
            cout << "Enter number of Large Cups you want to purchase" << endl;
            cin >> l;
            Large = Large + l;
            break;
        case 0:
            float Small_Amount, Medium_Amount, Large_Amount, Subtotal,Tax,Total;
            //Calculations for recepit
            Small_Amount = Small * 1.59;
            Medium_Amount = Medium * 2.29;
            Large_Amount = Large * 3.79;
            Subtotal = Small_Amount + Medium_Amount + Large_Amount;
            Tax = (8.25 / 100) * Subtotal;
            Total = Subtotal + Tax;
            //Sale Recepit
            cout << "FA2023_RLCSALECOFFEE_MAHTO.cpp" << endl;
            cout << "SALE RECEPIT - ABHASH MAHTO" << endl;
            cout << left << setw(19) << "Today" << currentDate << endl;
            cout << "--------------------------------------------" << endl;
            cout << left << setw(20) << "SIZE" << setw(17) << "NUMBER" << "MONEY" << endl;
            cout <<fixed<< setprecision(2);
            cout << left << setw(25) << "SMALL  ($1.59)" << setw(13) << Small << Small_Amount << endl;
            cout << left << setw(25) << "MEDIUM ($2.29)" << setw(13) << Medium << Medium_Amount << endl;
            cout << left << setw(25) << "LARGE  ($3.79)" << setw(13) << Large << Large_Amount << endl;
            cout << "----------------------------------------------" << endl;
            cout << setw(38) << "Subtotal:" << Subtotal << endl;
            cout << setw(38) << "Tax (8.25%):" << Tax << endl;
            cout << setw(37) << "Total:" << Total << endl;
            //To calulate number of cups sold in the whole day
            Small_Num = Small_Num + Small;
            Medium_Num = Medium_Num + Medium;
            Large_Num = Large_Num + Large;
            break;
        default:
            cout << "Invalid choice Please re-enter your choice" << endl;
        }
       
    } while (choice != 0);
}
void task2(int Small_Num, int Medium_Num, int Large_Num) {
    char currentDate[10];
    _strdate_s(currentDate);
    //To display number of cups sold
    cout << "FA2023_RLCSaleCoffee_Mahto.cpp" << endl;
    cout << "REPORT NUMBER OF CUPS - ABHASH MAHTO" << endl;
    cout << left << setw(28) << "Today" << currentDate << endl;
    cout << "---------------------------------------------" << endl;
    cout << setw(27) << "SMALL SIZE  ( 8oz)" << Small_Num << " cups"<<endl;
    cout << setw(27) << "MEDIUM SIZE (12oz)" << Medium_Num << " cups" << endl;
    cout << setw(27) << "LARGE SIZE  (16oz)" << Large_Num << " cups" << endl;
}
void task3(int Small_Num, int Medium_Num, int Large_Num) {
    char currentDate[10];
    _strdate_s(currentDate);
    int Small_OZ, Medium_OZ, Large_OZ, Total;
    //Calculations for how many OZ of coffee sold
    Small_OZ = 8* Small_Num;
    Medium_OZ = 12 * Medium_Num;
    Large_OZ = 16* Large_Num;
    Total = Small_OZ + Medium_OZ + Large_OZ;
    //Display Coffee sold in OZ
    cout << "FA2023_RLCSaleCoffee_Mahto.cpp" << endl;
    cout << "REPORT COFFEE SOLD IN OZ DURING THE DAY - ABHASH MAHTO" << endl;
    cout << left << setw(46) << "Today" << currentDate << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << setw(18) << "SIZE" << setw(17) << "NUMBER OF CUP" << "COFFEE AMOUNT" << endl;
    cout << setw(22) << "SMALL  ( 8oz):" << setw(17) << Small_Num << Small_OZ << endl;
    cout << setw(22) << "Medium (12oz):" << setw(17) << Medium_Num << Medium_OZ << endl;
    cout << setw(22) << "Large  (16oz):" << setw(17) << Large_Num << Large_OZ << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << setw(38) << "Total:" << Total << endl;

}
void task4(int Small_Num, int Medium_Num, int Large_Num) {
    char currentDate[10];
    _strdate_s(currentDate);
    float Small_Money, Medium_Money, Large_Money,Sum=0, Tax=0,Total=0;
    //Calculations for Money Report
    Small_Money = 1.59 * Small_Num;
    Medium_Money = 2.29 * Medium_Num;
    Large_Money = 3.79 * Large_Num;
    Sum = Small_Money + Medium_Money + Large_Money;
    Tax = (8.25 / 100) * Sum;
    Total = Tax+ Sum;
    //Display Money report
    cout << "FA2023_RLCSaleCoffee_Mahto.cpp" << endl;
    cout << "REPORT MONEY SOLD DURING THE DAY - ABHASH MAHTO" << endl;
    cout << left << setw(38) << "Today" << currentDate << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << setw(12) << "SIZE" << setw(16) << "UNIT PRICE" << setw(19) << "NUMBER OF CUP" << "AMOUNT MONEY" << endl;
    cout << fixed << setprecision(2);
    cout << setw(18) << "SMALL" << setw(20) << "1.59" << setw(15) << Small_Num <<Small_Money  << endl;
    cout << setw(18) << "MEDIUM" << setw(20) << "2.29" << setw(15) << Medium_Num << Medium_Money << endl;
    cout << setw(18) << "LARGE" << setw(20) << "3.79" << setw(14) << Large_Num << Large_Money << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << setw(52) << "SUM:" << Sum << endl;
    cout << setw(53) << "TAX:" << Tax << endl;
    cout << setw(52) << "TOTAL:" << Total<< endl;

}

int main()
{
   
    int task;  
    int Small_Num = 0, Medium_Num = 0, Large_Num = 0;
    do {//To keep re displaying the menu
    
        char currentDate[10];
        _strdate_s(currentDate);//For current date
        //Main Menu
        cout << "FA2023_RLCSaleCoffee_Mahto.cpp" << endl;
        cout << "SALE COFFEE - ABHASH MAHTO" << endl;
        cout << left << setw(18) << "Today" << currentDate << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "1.Sale Coffee" << endl;
        cout << "2.Report total number of cups sold in the day" << endl;
        cout << "3.Report total amount of coffee in OZ sold in the day" << endl;
        cout << "4.Report total money sold in the day" << endl;
        cout << "0.Exit" << endl;
        cout << "Enter Your Task" << endl;
        cin >> task;//Ask user input to decide which function to run
        switch (task) {//Switch statement to run program as desired by the user
        case 1:
            task1(Small_Num,  Medium_Num,  Large_Num);//To perform task 1
            break;
        case 2:
            task2(Small_Num, Medium_Num, Large_Num);//To perform task 2
            break;
        case 3:
            task3(Small_Num, Medium_Num, Large_Num);//To perform task 3
            break;
        case 4:
            task4(Small_Num, Medium_Num, Large_Num);//To perdorm  task 4
            break;
        case 0://Case in which loops stops
            break;
        default:
            cout << "Invalid Task Please re-enter your task" << endl;

        }


    } while (task != 0);
    
        system("Pause"); //This will pause the output to read
    return 0;
}
