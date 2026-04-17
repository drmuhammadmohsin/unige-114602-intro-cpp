#include<iostream>
using namespace std;

// Function to find the most occurred number(s) in the array
void most_occurred_number(int nums[], int size)
{
    if (size == 0) {
        cout << "\nArray is empty!" << endl;
        return;
    }
    
    int max_count = 0;
    
    // First pass: find maximum occurrence count
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        
        // Count occurrences of nums[i]
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
        
        if (count > max_count)
            max_count = count;
    }
    
    // Second pass: output numbers with max_count occurrences (without duplicates)
    cout << "\nMost occurred number";
    
    // Check if there are multiple numbers with max_count
    int multiple_count = 0;
    for (int i = 0; i < size; i++)
    {
        // Check if this number should be printed (first occurrence only)
        bool already_printed = false;
        for (int k = 0; k < i; k++)
        {
            if (nums[k] == nums[i])
            {
                already_printed = true;
                break;
            }
        }
        
        if (!already_printed)
        {
            int count = 1;
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] == nums[j])
                    count++;
            }
            
            if (count == max_count)
                multiple_count++;
        }
    }
    
    if (multiple_count > 1) cout << "s";
    cout << ": ";
    
    // Actually print the numbers
    bool first = true;
    for (int i = 0; i < size; i++)
    {
        // Check if this number should be printed (first occurrence only)
        bool already_printed = false;
        for (int k = 0; k < i; k++)
        {
            if (nums[k] == nums[i])
            {
                already_printed = true;
                break;
            }
        }
        
        if (!already_printed)
        {
            int count = 1;
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] == nums[j])
                    count++;
            }
            
            if (count == max_count)
            {
                if (!first) cout << ", ";
                cout << nums[i];
                first = false;
            }
        }
    }
    
    cout << " (appears " << max_count << " time";
    if (max_count > 1) cout << "s";
    cout << ")" << endl;
}

int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
        cout << nums[i] << " ";
    
    most_occurred_number(nums, n);
    
    return 0;
}