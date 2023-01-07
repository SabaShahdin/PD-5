# include<iostream>
using namespace std;

float  cubicCm  (float volume);
float  cubicKm  (float volume);  
float  cubicMm  (float volume);
float volumeOfPyramid (float length , float width , float height);

main()
{
    float length;
    float width;
    float height;
    string unit;
    float volume;
    float unitCm;
    float unitKm;
    float unitMm;
    cout<<"entre length of pyramid ...";
    cin>>length;
    cout<<"entre width of pyramid ...";
    cin>>width;
    cout<<"entre height of pyramid ...";
    cin>>height;
    cout<<"entre unit ...";
    cin>>unit;
    volume =  volumeOfPyramid ( length , width , height);
    cout<<"volume of pyramid is..."<<volume ;
    if(unit == "centimeter" )
    {
       unitCm = cubicCm (volume);
       cout <<"volume of pyramid in cm .."<<unitCm;
    }
    if(unit == "kilometer")
    {
      unitKm = cubicKm(volume);
      cout<<"volume of pyramid in km..."<<unitKm;
    }
     if(unit == "milimeter")
     {
      unitMm = cubicMm(volume);
      cout<<"volume of pyramid in mm ..."<<unitMm;
     }
}
   float volumeOfPyramid (float length , float width , float height)
 {
    float volume;
    volume =  (length * width * height) / 3;
    return volume;
 }
  float  cubicCm (float volume )
  {
    float centimeter;
    centimeter = volume *100 * 100 * 100;
    return centimeter;
 }
  float cubicKm (float volume)
  {
     float kilometer;
     kilometer = volume * 0.01 * 0.01 * 0.01;
     return kilometer;
  }
   float cubicMm (float volume)
   {
    float milimeter;
    milimeter = volume * 1000 * 1000 * 1000;
    return milimeter;
   }