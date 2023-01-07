# include <iostream>
using namespace std;
float taxCalculator(char typeOfVehicle, float priceOfVehicle , float taxRate);
main()
{
    char typeOfVehicle;
    float priceOfVehicle;
    float taxRate;
    float taxOnM;
    float finalPrice;
    float taxOnE;
    float taxOnS;
    float taxOnV;
    float taxOnT;
    cout<<"entre price of vehicle...";
    cin>>priceOfVehicle;
    cout<<"entre type of vehicle...";
    cin>>typeOfVehicle;
    if(typeOfVehicle =='M' )
     {
         taxRate = 6;
         taxOnM =  taxCalculator( typeOfVehicle, priceOfVehicle , taxRate);
         finalPrice = priceOfVehicle + taxOnM;
         cout<<"The final price on a vehicle of type"<<typeOfVehicle<<" after adding the tax is "<<taxOnM
            <<"with "<<typeOfVehicle<<"replaced by the vehicle type and "<< finalPrice<<" with the final price.";
     }
     if(typeOfVehicle =='E' )
     {
         taxRate = 8;
         taxOnE =  taxCalculator( typeOfVehicle, priceOfVehicle , taxRate);
         finalPrice = priceOfVehicle + taxOnE;
         cout<<"The final price on a vehicle of type"<<typeOfVehicle<<" after adding the tax is "<<taxOnE
            <<"with "<<typeOfVehicle<<"replaced by the vehicle type and "<< finalPrice<<" with the final price.";
     }
      if(typeOfVehicle =='S' )
     {
         taxRate = 10;
         taxOnS =  taxCalculator( typeOfVehicle, priceOfVehicle , taxRate);
         finalPrice = priceOfVehicle + taxOnS;
         cout<<"The final price on a vehicle of type"<<typeOfVehicle<<" after adding the tax is "<<taxOnS
            <<"with "<<typeOfVehicle<<"replaced by the vehicle type and "<< finalPrice<<" with the final price.";
     }
       if(typeOfVehicle =='V' )
     {
         taxRate = 12;
         taxOnV =  taxCalculator( typeOfVehicle, priceOfVehicle , taxRate);
         finalPrice = priceOfVehicle + taxOnV;
         cout<<"The final price on a vehicle of type"<<typeOfVehicle<<" after adding the tax is "<<taxOnV
            <<"with "<<typeOfVehicle<<"replaced by the vehicle type and "<< finalPrice<<" with the final price.";
     }
      if(typeOfVehicle =='T' )
     {
         taxRate = 15;
         taxOnT =  taxCalculator( typeOfVehicle, priceOfVehicle , taxRate);
         finalPrice = priceOfVehicle + taxOnT;
         cout<<"The final price on a vehicle of type"<<typeOfVehicle<<" after adding the tax is "<<taxOnT
            <<"with "<<typeOfVehicle<<"replaced by the vehicle type and "<< finalPrice<<" with the final price.";
     }
    
}
 float taxCalculator(char typeOfVehicle, float priceOfVehicle , float taxRate)
 {
    float taxAmount;
    taxAmount = priceOfVehicle *(taxRate/100);
    return taxAmount;
}
 