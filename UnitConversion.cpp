#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main ()
{
    int Value;
    double Result;
    string Fromunit="Meter",Tounit;
    cout<< "The Calculator to convert from Meter to any unit"<<endl;
    cout<< "The value =";
    cin>>Value;
    cout<< " choose the To unit ( Meter , Kilometer , Centimeter, Millimeter , Micrometer , Nanometer ,Mile ,Yard ,Foot ,Inch ,Light Year ) = "<<endl;
    cin>>Tounit;

 if (Fromunit == "Meter") {
        if (Tounit == "Meter") {
            Result = Value * 1;
        } else if (Tounit == "Kilometer"||Tounit == "Km"||Tounit == "kilometer"||Tounit == "km") {
            Result = Value * 0.001;
        } else if (Tounit == "Centimeter"||Tounit == "Cm"||Tounit == "centimeter"||Tounit == "cm") {
            Result = Value * 100;
        } else if (Tounit == "Millimeter"||Tounit == "Mm"||Tounit == "millimeter"||Tounit == "mm") {
            Result = Value * 1000;
        } else if (Tounit == "Micrometer"||Tounit == "Mic"||Tounit == "micrometer"||Tounit == "mic") {
            Result = Value * 1000000;
        } else if (Tounit == "Nanometer"||Tounit == "Nan"||Tounit == "nanometer"||Tounit == "nan" ){
            Result = Value * 1000000000;
        } else if (Tounit == "Mile"||Tounit == "mile") {
            Result = Value * 0.0006213689;
        } else if (Tounit == "Yard"||Tounit == "yard") {
            Result = Value * 1.0936132983;
        } else if (Tounit == "Foot"||Tounit == "foot") {
            Result = Value * 3.280839895;
        } else if (Tounit == "Inch"||Tounit == "in"||Tounit == "inch") {
            Result = Value * 39.37007874;
        } else if (Tounit == "Light Year"||Tounit == "lightyear"||Tounit == "light year" ||Tounit == "ly"||Tounit == "LY"||Tounit == "l y"||Tounit == "L Y") {
            Result = Value * 1.057008707E-16;
        } else {
            cout << "Invalid To unit." << endl;
            return 1; 
        }
    } else {
        cout << "Invalid From unit." << endl;
        return 1; 
    }
    cout << fixed << setprecision(6);
    cout << "The result of value (" << Value << ") converted from " << Fromunit << " to " << Tounit << " is " << Result << endl;

    return 0;
}
