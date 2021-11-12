
### **String and Character Array**           

•**String is a sequence of characters that are treated as a single data item and terminated by a null character '\0'.                
Remember that the C language does not support strings as a data type. A string is actually a one-dimensional array of                         
characters in C language. These are often used to create meaningful and readable programs.**                    

•**For example: The string "home" contains 5 characters including the '\0' character which is automatically added by                      
the compiler at the end of the string.**                                                        

![image](https://user-images.githubusercontent.com/85113970/141423603-508ba25d-fce8-41b0-bc3d-8966cec7805d.png)

**Declaring and Initializing a string variables:**       

                                                            // valid                      
                                                             char name[13] = "StudyTonight";                                   
                                                             char name[10] = {'c','o','d','e','\0'};                                  
                                                           // Illegal                         
                                                             char ch[3] = "hello";                     
                                                             char str[4];                  
                                                             str = "hello";                               
                                                             
**String Input and Output:**                                          
 •**%s format specifier to read a string input from the terminal.**                                          
 •**But scanf() function, terminates its input on the first white space it encounters.**                                
 •**edit set conversion code %[..] that can be used to read a line containing a variety of characters, including white spaces.**                        
 •**The gets() function can also be used to read character string with white spaces**                                             
