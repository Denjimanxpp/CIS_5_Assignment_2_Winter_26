#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string name, test_result,bmi_reaction;

    double height, weight;

    int test, age;

    cout <<" BMI Calculator "<<endl;

    cout<<" Enter your name: ";

    cin>>name;

    cout<<" Hi "<<name<<endl;

    cout<<" Enter your age: ";


    cin>>age;

      if (age <= 0){
        cout<<" I don't think you exist yet. "<<endl;
    }
    cout<<" Enter your height in meters: ";

    cin>>height;

    if(height <= 0){
        cout<<" Either the height is in Inches or its negative."<<endl;
        return 1;
    }

    cout<<" Enter your weight in kilograms: ";

    cin>>weight;

    if(weight < 0){
        cout<<" Either you're really light or you're oxygen"<< endl;
        return 1;
    }

    cout<<" Enter your test score: ";
 
    cin>> test; 

    if(test < 0){
        cout<<" Invalid test score. Please enter a score between 0 and 100."<<endl;
        return 1;
    }

    
    double bmi = (weight) / (height * height);

    if(bmi < 18.5){
    bmi_reaction = " You are underweight";
    }
    else if(bmi >= 18.5 && bmi <= 24.9){
        bmi_reaction = " You are normal weight";
    }
    else if(bmi >= 25 && bmi <= 29.9){
        bmi_reaction = " You are overweight";
    }
    else{
        bmi_reaction = " You are obese";
    }
    if(test >100 || test < 0){
        cout<<" I think he might got a very good score or a very bad score."<<endl;
        return 1;
    }
    if(test >=90 && test<= 100){
        test_result = " You got an A grade";
    }
    else if(test >=80 && test<= 89){
        test_result = " You got a B grade";
    }
    else if(test >=70 && test<= 79){
        test_result = " You got a C grade";
    }
    else if(test >=60 && test<= 69){
        test_result = " You got a D grade";
    }
    else{
        test_result = " You got an F grade";
    }

cout<<fixed<<setprecision(2)<<" So here's your results "<<name<< ". As a "<<age<<" year old, your BMI is: "<<bmi<< " which means, "<<bmi_reaction<< ", and you got a test score of "<<test<< ", which also means"<<test_result<<endl;
    return 0;
}
