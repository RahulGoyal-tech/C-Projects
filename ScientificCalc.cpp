/* Make a scientific calculator with following Functions:
    1) Addition, Subtraction, Division, Multiplication
    2) Power, Square root and all
    3) Factorial
    4) Compound and simple interest
    5) Log and antilog
    6) Fraction multiplication, division, addition, subtraction
    7) sin, cos, tan, inverses
    8) Compound formulas (+,-)
*/
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stack>
#include<string>
#include<vector>
using namespace std;
void compound(){
    vector<double> numbers;
    vector<char> operators;
    string input;
    int i;
    cout<<setw(54);
    cout<<"**Only Addition, subtraction and multiplication**\n";
    cout<<setw(48);
    cout<<"**Write in proper precedence order**\n";
    cout<<"Enter the Compound formula for calculation: ";
    cin>>input;
    input.push_back('.');
    stringstream form(input);
    for(i=0; i<(input.size()/2); i++ )
    {
        int a;
        char ch;
        form>>a>>ch;
        numbers.push_back(a);
        operators.push_back(ch);
    }
    operators.pop_back();
    for(int j=i-1; j>=1; j--){
        double x1 = numbers[j];
        double x2 = numbers[j-1];
        numbers.pop_back();
        numbers.pop_back();
        
        if(operators[j-1]=='+'){
            numbers.push_back(x1+x2);
        }
        else if(operators[j-1]=='-'){
            numbers.push_back(x2-x1);
        }
        else if(operators[j-1]=='*'){
            numbers.push_back(x2*x1);
        }
    }
    cout<<"Result is: "<<numbers[0]<<"\n";
};
void add(){
    double num,res=0,no;
    cout<<"Enter how many numbers to add: ";
    cin>>num;
    for(int i=0; i<num; i++)
    {
        cin>>no;
        res = res+no;
    }
    cout<<"Addition result: "<<res<<"\n\n\n";
};
void subtract(){
    double num1,num2,res;
    cout<<"Enter Numbers: ";
    cin>>num1;
    cin>>num2;
    cout<<"Subtraction result: "<<num1-num2<<"\n\n\n";
};
void divide(){
    double num1,num2,res;
    cout<<"Enter Numbers: ";
    cin>>num1;
    cin>>num2;
    cout<<"Division result: "<<num1/num2<<"\n\n\n";
};
void multiply(){
    double num1,num2,res;
    cout<<"Enter Numbers: ";
    cin>>num1;
    cin>>num2;
    cout<<"Multiplication result: "<<num1*num2<<"\n\n\n";
};
void power(){
    double num1,res=1;
    int pow;
    cout<<"Enter Number: ";
    cin>>num1;
    cout<<"Enter Power: ";
    cin>>pow;
    for(int i=0; i<pow; i++){
        res = res*num1;
    }
    cout<<"Result: "<<res<<"\n\n\n";
};
void square(){
    double num1;
    cout<<"Enter number: ";
    cin>>num1;
    cout<<"Square is: "<<num1*num1<<"\n\n\n";
};
void cube(){
    double num1;
    cout<<"Enter number: ";
    cin>>num1;
    cout<<"Cube is: "<<num1*num1*num1<<"\n\n\n";
};
void root(){
    double num1;
    double power;
    cout<<"Enter Number: ";
    cin>>num1;
    cout<<"Enter Root Power: ";
    cin>>power;
    power = 1/power;
    cout<<"Root is: "<<pow(num1,power)<<"\n\n\n";
};
void sroot(){
    double num1;
    cout<<"Enter Number: ";
    cin>>num1;
    cout<<"Root is: "<<pow(num1,0.5)<<"\n\n\n";
};
void croot(){
    double num1;
    cout<<"Enter Number: ";
    cin>>num1;
    cout<<"Root is: "<<pow(num1,1/3)<<"\n\n\n";
};
void fact(){
    int num1,res=1;
    cout<<"Enter number: ";
    cin>>num1;
    if(num1<=1){
        cout<<"Factorial is: "<<res<<"\n\n\n";
    }
    else{
    for(int i = num1; i>=1; i=i-1)
    {
        res = res*i;
    }
    cout<<"Factorial is: "<<res<<"\n\n\n";
    }
};
void CI(){
    double principleamt, interestrate, year;
    cout<<"Enter Principal Amount: ";
    cin>>principleamt;
    cout<<"Enter Interest Rate Anually: ";
    cin>>interestrate;
    cout<<"Enter Years of Loan: ";
    cin>>year;
    double inter = principleamt*(pow(1+(0.01*interestrate),year)-1);
    cout<<"Interest Amount is: "<<inter<<"\n";
    cout<<"Total Amount is: "<<inter+principleamt<<"\n";
    cout<<"Monthly Amount is: "<<(inter+principleamt)/(year*12)<<"\n\n\n";

};
void SI(){
    double principleamt, interestrate, year;
    cout<<"Enter Principal Amount: ";
    cin>>principleamt;
    cout<<"Enter Interest Rate Anually: ";
    cin>>interestrate;
    cout<<"Enter Years of Loan: ";
    cin>>year;
    double inter = principleamt*interestrate*year*0.01;
    cout<<"Interest Amount is: "<<inter<<"\n";
    cout<<"Total Amount is: "<<inter+principleamt<<"\n";
    cout<<"Monthly Amount is: "<<(inter+principleamt)/(year*12)<<"\n\n\n";
};
void log(){
    double num;
    cout<<"Enter number to find log: ";
    cin>>num;
    cout<<"Log is: "<<log10(num)<<"\n\n\n";
};
void antilog(){
    double num;
    cout<<"Enter number to find Antilog: ";
    cin>>num;
    cout<<"AntiLog is: "<<pow(10,num)<<"\n\n\n";
};
void ln(){
    double num;
    cout<<"Enter number to find Natural log(ln): ";
    cin>>num;
    cout<<"Ln is: "<<log(num)<<"\n\n\n";
};
void antiln(){
    double num;
    cout<<"Enter number to find Antilog of Ln: ";
    cin>>num;
    cout<<"AntiLog of Ln is: "<<exp(num)<<"\n\n\n";
};
void fadd(){
    double num1[2],num2[2],res[2];
    cout<<"Enter Numerator 1: ";
    cin>>num1[0];
    cout<<"Enter Denominator 1: ";
    cin>>num1[1];
    cout<<"Enter Numerator 2: ";
    cin>>num2[0];
    cout<<"Enter Denominator 2: ";
    cin>>num2[1];
    res[0] = num1[0]*num2[1] + num2[0]*num1[1];
    res[1] = num1[1]*num2[1];
    cout<<"Answer is: "<<"\n";
    cout<<res[0]<<"\n";
    cout<<"-------\n";
    cout<<res[1]<<"\n\n\n";


};
void fsub(){
    double num1[2],num2[2],res[2];
    cout<<"Enter Numerator 1: ";
    cin>>num1[0];
    cout<<"Enter Denominator 1: ";
    cin>>num1[1];
    cout<<"Enter Numerator 2: ";
    cin>>num2[0];
    cout<<"Enter Denominator 2: ";
    cin>>num2[1];
    res[0] = num1[0]*num2[1] - num2[0]*num1[1];
    res[1] = num1[1]*num2[1];
    cout<<"Answer is: "<<"\n";
    cout<<res[0]<<"\n";
    cout<<"-------\n";
    cout<<res[1]<<"\n\n\n";
};
void fdiv(){
    double num1[2],num2[2],res[2];
    cout<<"Enter Numerator 1: ";
    cin>>num1[0];
    cout<<"Enter Denominator 1: ";
    cin>>num1[1];
    cout<<"Enter Numerator 2: ";
    cin>>num2[0];
    cout<<"Enter Denominator 2: ";
    cin>>num2[1];
    res[0] = num1[0]*num2[1];
    res[1] = num1[1]*num2[0];
    cout<<"Answer is: "<<"\n";
    cout<<res[0]<<"\n";
    cout<<"-------\n";
    cout<<res[1]<<"\n\n\n";
};
void fmult(){
    double num1[2],num2[2],res[2];
    cout<<"Enter Numerator 1: ";
    cin>>num1[0];
    cout<<"Enter Denominator 1: ";
    cin>>num1[1];
    cout<<"Enter Numerator 2: ";
    cin>>num2[0];
    cout<<"Enter Denominator 2: ";
    cin>>num2[1];
    res[0] = num1[0]*num2[0];
    res[1] = num1[1]*num2[1];
    cout<<"Answer is: "<<"\n";
    cout<<res[0]<<"\n";
    cout<<"-------\n";
    cout<<res[1]<<"\n\n\n";
};
void sin(){
    double ang;
    cout<<"Enter angle in radians: ";
    cin>>ang;
    cout<<"Sine of given angle is: "<<sin(ang)<<"\n\n\n";
};
void cos(){
    double ang;
    cout<<"Enter angle in radians: ";
    cin>>ang;
    cout<<"Cosine of given angle is: "<<cos(ang)<<"\n\n\n";
};
void tan(){
    double ang;
    cout<<"Enter angle in radians: ";
    cin>>ang;
    cout<<"Tangent of given angle is: "<<tan(ang)<<"\n\n\n";
};
void isin(){
    double ang;
    cout<<"Enter Value: ";
    cin>>ang;
    if(ang>1||ang<-1)
    {
        cout<<"Out of permissible range";
    }
    else{
        cout<<"Inverse Sine of Value is(in radians): "<<asin(ang)<<"\n\n\n";
        cout<<"Inverse Sine of Value is(in degrees): "<<asin(ang)*(180/M_PI)<<"\n\n\n";
    }
};
void icos(){
    double ang;
    cout<<"Enter Value: ";
    cin>>ang;
    if(ang>1||ang<-1)
    {
        cout<<"Out of permissible range";
    }
    else{
        cout<<"Inverse Cosine of Value is(in radians): "<<acos(ang)<<"\n\n\n";
        cout<<"Inverse Cosine of Value is(in degrees): "<<acos(ang)*(180/M_PI)<<"\n\n\n";
    }
};
void itan(){
    double ang;
    cout<<"Enter Value: ";
    cin>>ang;
    cout<<"Inverse Tangent of Value is(in radians): "<<atan(ang)<<"\n\n\n";
    cout<<"Inverse Tangent of Value is(in degrees): "<<atan(ang)*(180/M_PI)<<"\n\n\n";
};
int main()
{
    int mainmenuinp=0;
    int algebrainp, powerinp, interinp, loginp, fracinp, triginp;
    while(mainmenuinp!=9){
    cout<<"============================================================\n";
    cout<<setw(46);
    cout<<"WELCOME TO SCIENTIFIC CALCULATOR"<<"\n";
    cout<<"============================================================\n";
    cout<<"1. Algebra\n2. Power and roots\n3. Factorial\n4. Compound interest and Simple interest\n5. Log and Antilog\n6. Fraction Algebra\n7. Trignometric Operations\n8. Compound Formula\n9. Exit\n";
    cout<<"ENTER THE DESIRED OPERATION CATEGORY NUMBER: ";
    cin>>mainmenuinp;
    cout<<"\n";
        switch(mainmenuinp){
            case 1: 
                cout<<"============================================================\n";
                cout<<setw(36);
                cout<<"ALGEBRA MENU\n";
                cout<<"============================================================\n";
                cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Previous Menu\n";
                cout<<"ENTER THE DESIRED OPERATION NUMBER: ";
                cin>>algebrainp;
                switch(algebrainp){
                    case 1: 
                        add();
                        break;
                    case 2: 
                        subtract();
                        break;
                    case 3:
                        divide();
                        break;
                    case 4: 
                        multiply();
                        break;
                    case 5:
                        break;
                    default : 
                        cout<<"Wrong Selection!!";
                        break;
                }
                //system("Color C1");
                break;
            case 2:
                cout<<"============================================================\n";
                cout<<setw(40);
                cout<<"POWER AND ROOTS MENU\n";
                cout<<"============================================================\n";
                cout<<"1. Square\n2. Cube\n3. Power\n4. Square root\n5. Cube root\n6. Root\n7. Previous Menu\n";
                cout<<"ENTER THE DESIRED OPERATION NUMBER: ";
                cin>>powerinp;
                switch(powerinp){
                    case 1: 
                        square();
                        break;
                    case 2: 
                        cube();
                        break;
                    case 3:
                        power();
                        break;
                    case 4: 
                        sroot();
                        break;
                    case 5:
                        croot();
                        break;
                    case 6:
                        root();
                        break;
                    case 7:
                        break;
                    default : 
                        cout<<"Wrong Selection!!";
                        break;
                }
                //system("Color C2");
                break;
            case 3:
                cout<<"============================================================\n";
                cout<<setw(35);
                cout<<"FACTORIAL\n";
                cout<<"============================================================\n";
                fact();
                //system("Color C3");
                break;
            case 4:
                cout<<"============================================================\n";
                cout<<setw(51);
                cout<<"COMPOUND INTEREST AND SIMPLE INTEREST MENU\n";
                cout<<"============================================================\n";
                cout<<"1. Compound Interest\n2. Simple Interest\n3. Previous Menu\n";
                cout<<"ENTER THE DESIRED OPERATION NUMBER: ";
                cin>>interinp;
                switch(interinp){
                    case 1: 
                        CI();
                        break;
                    case 2: 
                        SI();
                        break;
                    case 3:
                        break;
                    default : 
                        cout<<"Wrong Selection!!";
                        break;
                }
                //system("Color C4");
                break;    
            case 5:
                cout<<"============================================================\n";
                cout<<setw(40);
                cout<<"LOG AND ANTILOG MENU\n";
                cout<<"============================================================\n";
                cout<<"1. Log\n2. AntiLog\n3. Natural Log (ln)\n4. Anti Natural Log\n5. Previous Menu\n";
                cout<<"ENTER THE DESIRED OPERATION NUMBER: ";
                cin>>loginp;
                switch(loginp){
                    case 1: 
                        log();
                        break;
                    case 2: 
                        antilog();
                        break;
                    case 3:
                        ln();
                        break;
                    case 4: 
                        antiln();
                        break;
                    case 5:
                        break;
                    default : 
                        cout<<"Wrong Selection!!";
                        break;
                }
                //system("Color C5");
                break;
            case 6:
                cout<<"============================================================\n";
                cout<<setw(41);
                cout<<"FRACTION ALGEBRA MENU\n";
                cout<<"============================================================\n";
                cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Previous Menu\n";
                cout<<"ENTER THE DESIRED OPERATION NUMBER: ";
                cin>>fracinp;
                switch(fracinp){
                    case 1: 
                        fadd();
                        break;
                    case 2: 
                        fsub();
                        break;
                    case 3:
                        fmult();
                        break;
                    case 4: 
                        fdiv();
                        break;
                    case 5:
                        break;
                    default : 
                        cout<<"Wrong Selection!!";
                        break;
                }
                //system("Color C7");
                break;
            case 7:
                cout<<"============================================================\n";
                cout<<setw(44);
                cout<<"TRIGNOMETRIC OPERATIONS MENU\n";
                cout<<"============================================================\n";
                cout<<"1. Sin\n2. Cos\n3. Tan\n4. Inverse Sin\n5. Inverse Cos\n6. Inverse Tan\n7. Previous Menu\n";
                cout<<"ENTER THE DESIRED OPERATION NUMBER: ";
                cin>>triginp;
                switch(triginp){
                    case 1: 
                        sin();
                        break;
                    case 2: 
                        cos();
                        break;
                    case 3:
                        tan();
                        break;
                    case 4: 
                        isin();
                        break;
                    case 5:
                        icos();
                        break;
                    case 6:
                        itan();
                        break;
                    case 7:
                        break;
                    default : 
                        cout<<"Wrong Selection!!";
                        break;
                }
                //system("Color C8");
                break;
            case 8:
                cout<<"============================================================\n";
                cout<<setw(41);
                cout<<"COMPOUND FORMULA MENU\n";
                cout<<"============================================================\n";
                compound();
                break;
            case 9:
                break;
            default:
                cout<<"Wrong Selection!!"<<"\n\n\n";
                break;
        }
    }
    system("Color C6");
    cout<<"============================================================\n";
    cout<<setw(48);
    cout<<"THANK YOU FOR USING MY CALCULATOR!!"<<"\n";
    cout<<"============================================================\n";
}