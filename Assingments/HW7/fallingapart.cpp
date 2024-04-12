#include <iostream>
#include <cmath>

using namespace std;


int number(){
    int numberCount;
    //cout << "enter how many numbers you would like" << endl;
    cin >> numberCount;
    return numberCount;
}


int main()
{
int temporary= 0;
int sum1 = 0;
int sum2 = 0;
int numberCount = number();
int nums[numberCount];
for(int i = 0; i<numberCount; i++)
{
   // cout << "enter a number" << endl;
    cin >> nums[i];
}

for(int j = 0; j<numberCount-1;j++)
{
    for(int i = 0; i < numberCount - 1; i++){
        if(nums[i]<nums[i+1])
        {
            temporary = nums[i];
            nums[i] = nums[i+1];
            nums[i+1] = temporary;

        }
    }
}


for (int i = 0; i < numberCount; i++)
	{
		if (i % 2 == 0)
		{   
			sum1 += nums[i];
		}
		else
		{
			sum2 += nums[i];
		}
	}
cout << sum1 << " " << sum2 << "\n";
}