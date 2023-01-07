# include<iostream>
using namespace std;

main()
{
    int neededHours;
    int daysFirmHas;
    int noOfWorkers;
    float noOfWorkingHours;
    float workingHours;
    float timeOfEachWorker;
    float workHours;
    float totalTime;
    float totalTime2;
    cout<<"entre hours needed for the task";
    cin>>neededHours;
    cout<<"entre days firm has...";
    cin>>daysFirmHas;
    cout<<"entre number of workers...";
    cin>>noOfWorkers;
    workingHours = 10.0;
    noOfWorkingHours = workingHours -  (workingHours * 0.1);
    timeOfEachWorker = noOfWorkingHours * noOfWorkers;
    workHours = timeOfEachWorker * daysFirmHas ;
    totalTime = workHours- neededHours ;
    if(neededHours < workHours)
     {
        cout<<"Yes!"<<totalTime<<"hours left."<<endl;
     }
     if(neededHours > workHours)
     {
        totalTime2 = neededHours - workHours;
        cout<<"Not enough time!"<<totalTime2<<" hours needed."<<endl;
     }
}
