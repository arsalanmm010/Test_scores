#include <iostream>

using namespace std;

int main()
{
    int len;
    cout << "enter size of array: " << endl;
    cin >> len;
    int arr[len];
     int no_of_students_scores_0_24 = 0, no_of_students_scores_25_49 = 0,
    no_of_students_scores_50_74 = 0, no_of_students_scores_75_99 = 0,
    no_of_students_scores_100_124 = 0, no_of_students_scores_124_149 = 0,
    no_of_students_scores_150_174 = 0, no_of_students_scores_175_200 = 0;

    for(int i=0; i<len; i++)
    {
        cout << "Enter score of students between 0 to 200" << endl;
        cin >> arr[i];
        if(arr[i] >=0 && arr[i] <= 200)
        {
            if(arr[i] >= 0 && arr[i] < 25)
                no_of_students_scores_0_24++;
            if(arr[i] >= 25 && arr[i] < 50)
                no_of_students_scores_25_49++;
            if(arr[i] >= 50 && arr[i] < 75)
                no_of_students_scores_50_74++;
            if(arr[i] >= 75 && arr[i] < 100)
                no_of_students_scores_75_99++;
            if(arr[i] >= 100 && arr[i] < 125)
                no_of_students_scores_100_124++;
            if(arr[i] >= 125 && arr[i] < 150)
                no_of_students_scores_124_149++;
            if(arr[i] >= 150 && arr[i] < 175)
                no_of_students_scores_150_174++;
            if(arr[i] >= 175 && arr[i] <= 200)
                no_of_students_scores_175_200++;
        }
        else
            cout << "invalid number" << endl;
    }

    cout << "no of students having marks between  0-24   are: " << no_of_students_scores_0_24 << endl;
    cout << "no of students having marks between  25-49  are: " << no_of_students_scores_25_49 << endl;
    cout << "no of students having marks between  50-74  are: " << no_of_students_scores_50_74 << endl;
    cout << "no of students having marks between  75-99  are: " << no_of_students_scores_75_99 << endl;
    cout << "no of students having marks between 100-124 are: " << no_of_students_scores_100_124 << endl;
    cout << "no of students having marks between 125-149 are: " << no_of_students_scores_124_149 << endl;
    cout << "no of students having marks between 150-174 are: " << no_of_students_scores_150_174 << endl;
    cout << "no of students having marks between 175-200 are: " << no_of_students_scores_175_200 << endl;

    return 0;
}
