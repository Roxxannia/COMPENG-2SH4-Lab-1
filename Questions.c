
#include "Questions.h"

// need t omake flow chart to all the quesitons

int Q1_for(int num){
	int sum;
	
	// calculate your sum below..this has to use for loop
	sum = 0;
	int i;
	int tar = 1000;
	int cnt;
	cnt = (tar-(tar%num))/num;
	for(i = 1; i<=cnt; i++ )
	{
		sum += num * i;
	}

	// here, we return the calcualted sum:
	return sum;
}
int Q1_while(int num){
	int sum;

	// calculate your sum below..this has to use while loop
	sum = 0;
	int multi = 0;
	int tar = 1000;

	while(multi <= tar)
	{        
		sum +=multi;
        multi += num;
	}
	
	// here, we return the calcualted sum:
	return sum;
}
int Q1_dowhile(int num){
	int sum;
	
	// calculate your sum below..this has to use do-while loop
	sum = 0;
	int multi = 0;
	int tar = 1000;

	do{
		sum +=multi;
        multi += num;
	}
	while(multi <= tar);

	// here, we return the calcualted sum:
	return sum;
}

//===============================================================================================
int Q2_FPN(float Q2_input, float Q2_threshold){
	
	int result;
	// Determine which range does Q2_input fall into.  Keep in mind the floating point number range.
	// Assign the correct output to the result.

	if (Q2_input >= (-2)*Q2_threshold && Q2_input < (-1)*Q2_threshold)
	{
		result = 0;
	}
	else if (Q2_input >= (-1)*Q2_threshold && Q2_input < 0)
	{
		result = 1;
	}          
	else if (Q2_input >= 0 && Q2_input < 1*Q2_threshold)
	{
		result = 2;
	} 
	else if (Q2_input >= 1*Q2_threshold && Q2_input < 2*Q2_threshold)
	{
		result = 3;
	}
	else 
	{
		result = -999;
	}
	
	// Finally, return the result.
	return result;
}
//===============================================================================================
int Q3(int Q3_input, int perfect[]){
	
	
	
		//counts is the variable that should hold the total number of found perfect numbers
		//you should update it within your code and return it at the end
	    int counts=0;

		int i, j;
		int temp_sum = 0;
		int ind = 0;
		//knowing 1 is not  perfect number for sure since 1 is the only int factor of 1
		
		for(i=2; i<Q3_input; i++)
		{
			for (j=1; j< i; j++)
			{
				if (i % j == 0)
				{
					temp_sum += j;
				}
			}

			if (temp_sum == i)
			{
				perfect[ind] = i;
				temp_sum = 0;
				ind++;
			}
			else 
			{
				temp_sum = 0;
			}
			
		}

	counts = ind;
		// counts = sizeof(perfect)/sizeof(perfect[0]);

		/*
		*
		*perfect is an array that you need to add into it any perfect number you find
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will 
		*autmoatically reflect in the main calling function.*/

	return counts;

}
//===============================================================================================
int Q4_Bubble(int array[], int size){
	
	// This variable tracks the number of passes done on the array to sort the array.
	int passes = 0;

	// Pseudocode
	// 	1. Given an array and its size, visit every single element in the array up to size-2 (i.e. up to the second last element, omit the last element)
	//  2. For every visited element (current element), check its subsequent element (next element).  
	//     If the next element is larger, swap the current element and the next element. 
	//  3. Continue until reaching size-2 element.  This is considered One Pass => increment pass count by one.
	//  4. Repeat 1-3 until encountering a pass in which no swapping was done.
	//   -> Sorting Completed.
	int i, j;
	int currTerm=0;
    int nextTerm =0;
    int swap_flg = 0;

    for(j = 0; j < size - 1; j++)
    {
        swap_flg = 0;
        for (i = 0; i <= (size - 2); i++)
	    {
            if (array[i] >  array[i+1])
            {
                currTerm= array[i+1];
                nextTerm = array[i];

                array[i] = currTerm;
                array[i+1] = nextTerm;

                swap_flg = 1;
            }
	    }
        passes++;

        if(swap_flg == 0)
        {
            break;
        }
    }

	// Finally, return the number of passes used to complete the Bubble Sort
	return passes;	
}