### Structures  .......................        

**Structure is a user-defined datatype in C language which allows us to combine data of different types together.                       
Structure helps to construct a complex data type which is more meaningful. It is somewhat similar to an Array, but                   
an array holds data of similar type only. But structure on the other hand, can store data of any type, which is                  
practical more useful.**

**For example: If I have to write a program to store Student information, which will have Student's name,                    
age, branch, permanent address, father's name etc, which included string values, integer values etc, how can                        
I use arrays for this problem, I will require something which can hold data of different types together.**                 

**Example of Structure**                                      
                                               struct Student
                                               {
                                                    char name[25];
                                                    int age;
                                                    char branch[10];
                                                    // F for female and M for male
                                                     char gender;
                                                };                       
                                                
