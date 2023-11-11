#include "FitnessDataStruct.h"

// Define any additional variables here

char line_buffer[100];
int count=0;
char my_date[11];
char my_time[6]; 
char my_steps[8];
char choice;
char filename;
int file_read = 0;
FITNESS_DATA fitness [1000] = {};
int mean;


// Complete the main function
int main()
{
    // Using an infinite while loop for the menu driven programme
    while (1)
    {
        // Printing out the menu
        printf("A: Specify the filename to be imported\n");
        printf("B: Display the total number of records in the file\n");
        printf("C: Find the date and time of the timeslot with the fewest steps\n");
        printf("D: Find the data and time of the timeslot with the largest number of steps\n");
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Exit\n");

        // Taking user's desired choice as input
        printf("Enter Choice: ");
        scanf("%s",&choice);


        // Using a switch to perform the task corresponding to user's input
        switch(choice)
        {
            case 'A':
            case 'a':
            {
                // user input for file
                printf("Input filename: ");
                scanf("%s",&filename);

                // opening file in read mode
                FILE *file = open_file(&filename, "r");

                // reading data from file and storing in struct

                while (fgets(line_buffer,100,file) != NULL)
                {
                    tokeniseRecord(line_buffer,",",my_date,my_time,my_steps);
                    strcpy(fitness[count].date, my_date);
                    strcpy(fitness[count].time, my_time);
                    fitness[count].steps = atoi(my_steps);
                    count++;
                }
                
                // Updating value of file_read to indicate file has been read

                file_read = 1;
                printf("File successfully loaded.\n");

                break;
            }

            case 'B':
            case 'b':
            {   
                // printing number of records
                printf("Total records: %d\n", count);

                break;
            }

            case 'C':
            case 'c':
            {
                // Checking whether the file has been read

                if (file_read == 1)
                {
                    // Initialising the first steps as minimum
                    // And Initialising index as 0

                    int min = fitness[0].steps;
                    int index = 0;

                    // Iterating through the struct to find fewest steps

                    for (int i = 0; i < count; i++)
                    {
                        // Comparing each element to the minimum

                        if (fitness[i].steps<min)
                        {
                            // Updating value of minimum if a new minimum found

                            min = fitness[i].steps;
                            
                            // Updating value of index corresponding to the new minimum

                            index = i;
                        }
                    }
                    
                    // Printing out the final output

                    printf("Fewest Steps: %s %s\n", fitness[index].date, fitness[index].time);
                }

                
                else
                {
                    // Error handling in case switch case C called before reading file
                    printf("File has not been read yet.\n");
                }
                break;
                
            }

            case 'D':
            case 'd':
            {
                // Checking whether the file has been read

                if (file_read == 1)
                {
                    // Initialising the first steps as maximum
                    // And Initialising index as 0

                    int max = fitness[0].steps;
                    int j = 0;

                    // Iterating through the struct to find fewest steps

                    for (int i = 0; i < count; i++)
                    {
                        // Comparing each element to the maximum

                        if (fitness[i].steps>max)
                        {
                            // Updating value of maximum if a new maximum found

                            max = fitness[i].steps;

                            // Updating value of index corresponding to the new maximum

                            j = i;
                        }
                    }

                    // Printing out the final output

                    printf("Largest Steps: %s %s\n", fitness[j].date, fitness[j].time);
                }
                else
                {
                    // Error handling in case switch case D called before reading file

                    printf("File has not been read yet.\n");
                }

                break;
                
            }

            case 'E':
            case 'e':
            {
                // Initialising sum as 0

                int sum = 0;

                // Iterating through the struct to calculate total steps

                for (int i = 0; i < count; i++)
                {
                    sum += fitness[i].steps;
                }
                
                // Applying formula for mean

                mean=sum/count;

                // Printing output

                printf("Mean step count: %d\n", mean);

                break;
                
            }

            case 'F':
            case 'f':
            {
                // Initialising a 2D array to store intervals where step count > 500

                int arr[1000][2];  

                // Initialising an invalid start value

                int start = -1;
                int end;

                // Initialising a placeholder variable to track length of array

                int place=0;

                // Iterating through the Struct to find the desired intervals

                for (int i = 0; i < count; i++)
                {
                    // Checking whether the element has >500 steps
                    if (fitness[i].steps>500)
                    {
                        // Updating start value to index of
                        // first element in a continous period
                        // where steps are >500
                        if (start == -1)
                        {
                            start=i;
                        }
                        
                    }

                    // If value of start is valid and
                    // the element does not have >500 steps

                    else if (start!=-1)
                    {
                        // Updating end value to the element just before
                        // the element that has <500 steps

                        end=i-1;

                        // Adding the updated values of start and end index to the array

                        arr[place][0]=start;
                        arr[place][1]=end;

                        place+=1;

                        // Updating value of start to invalid for next continous period

                        start = -1;
                        
                    }   
                }
                
                int diff=0;
                int max_start;
                int max_end;

                // Iterating through the array of indices to find longest period

                for (int i = 0; i < place; i++)
                {
                    // Finding max difference between start and end
                    // to determine longest period

                    if ((arr[i][1]-arr[i][0])>diff)
                    {
                        // Storing the Start and End index of longest period

                        max_start=arr[i][0];
                        max_end=arr[i][1];

                        // Updating value of difference to find if there's 
                        // a longer period

                        diff=arr[i][1]-arr[i][0];
                    }
                }

                // Printing Output

                printf("Longest period start: %s %s\n", fitness[max_start].date, fitness[max_start].time);
                printf("Longest period end: %s %s\n", fitness[max_end].date, fitness[max_end].time);
                
                break;
            }
            
            case 'Q':
            case 'q':
            {
                // Quit case

                return 0;
            }

            // Output in case user inputs invalid choice

            default: printf("Invalid choice. Try again.\n");
        }
    }
}