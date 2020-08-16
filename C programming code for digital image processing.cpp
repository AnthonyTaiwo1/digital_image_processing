#include <stdio.h>
#include <stdlib.h>


void 	show_image			(char singline[50][50]);	
int 	area				(char singline[50][50]);
int 	perimeter			(char singline[50][50]);
double  shape_factor		(char singline[50][50]);
void	minimum_rectangle	(char singline[50][50]);
void 	centroid			(char singline[50][50]);
void 	image_outline		(char singline[50][50]);
void	display				(char singline[50][50]);
void Exit();

int main() {
    char singline[50][50],filename[35];                                           //variables
    char image[50][50];                                                        //variables
    int number,j,k;                                                            //variables
    int xc= 0,yc= 0;                                                            //variables          
    double sfactor;                                                             //variables

        printf("welcome to my C program image loader\n\n\n");                                     //display message
        
        printf("1.rectangle.txt\n\n\n");                                            //display message

        printf("2.triangle.txt\n\n\n");                                              //display message

        printf("3.diamond.txt\n\n\n");                                               //display message

        printf("4.hexagon.txt\n\n\n");                                               //display message
        
        printf("To start the application please enter the number 1 and then enter name of the file that you would like to open and scan followed by.txt:\n\n\n\n\n\n");
                                 

 
        
 
                                                           
        
     
    

    while (1)                                                                           //loop

    {
       
      printf("please select one of the following options from the menu \n");

      printf("1: display an image\n");                                                //display message

      printf("2: find the image area\n");                                             //display message
 
      printf("3: find the perimeter\n");                                              //display message

      printf("4: find the shape factor\n");                                           //display message

      printf("5: find the minumum enclosing rectangle\n");                            //display message

      printf("6: find the centroid\n");                                               //display message

      printf("7: display the outline of the image\n");                                //display message
    
      printf("8: Quit\n");                                                            //display message
    

      scanf("%i", & number);                                                          // user input number 

     switch (number){
 	
case 1:  	show_image(singline);                                                    // function 1
			break;                                                                   //terminates the statement
			
case 2:		area(singline);                                                          // function 2
			break;                                                                   //terminates the statement
	
case 3:		perimeter(singline);                                                     // function 3
			break;                                                                   //terminates the statement
	
case 4:		shape_factor(singline);                                                  // function 4
			break;                                                                   //terminates the statement
	
case 5:		minimum_rectangle(singline);                                             // function 5
			break;                                                                   //terminates the statement
	
case 6:		centroid(singline);                                                      // function 6
			break;                                                                   //terminates the statement
	
case 7:		image_outline(singline);                                                 // function 7
			break;                                                                   // terminates the statement
 case 8:    Exit();
            break;	

						}
						
                                                          
} 
    return 0;                                                                        //closes code
}


    
//case 1:                                                                                  // function 1
         void 	show_image	(char singline[50][50])
 {
int j;                                                                                     //variables
int k;                                                                                    //variables
int count;                                                                               //variables
char filename [30];                                                                      //variables
FILE* f_ptr;
 printf("Please enter the name of the file that you would like to open and scan followed by .txt:\n");
  scanf("%s",filename);
  f_ptr = fopen(filename, "r");

  for (j = 0; j < 50; j++) {                                                 // when j is equal to zero or if j less than 50 all of the rows will be added              
        for (k = 0; k < 51; k++) {                                          // when k is equal to zero or if k less than 50 all of the columns will be added                   
 
//          fscanf(f_ptr, "%c", & singline[j][k]);                            // referencing the file
  
}
}
                                   
      for (j = 0; j < 50; j++) {                                              // when j is equal to zero or if j less than 50 all of the rows will be added
        for (k = 0; k < 50; k++) {                                           // when k is equal to zero or if k less than 50 all of the columns will be added   
 
                               
          printf("%c", singline[j][k]);                                     // displays the image       
        }
       printf("\n");}              
 
    }

          

            
            
//case 2:   
int area(char singline[50][50]){                                      // function 2
int j;                                                                //variables
int k;                                                                 //variables
int count;                                                            //variables
        
	for(j=0; j<50; j++) {                                           // when j is equal to zero or if j less than 50 all of the rows will be added
    for(k=0; k<50; k++) {                                          // when k is equal to zero or if k less than 50 all of the columns will be added
   
       
       if (singline[j][k]=='1')                                  
       count++ ;                                                   // if jk equals to 1 then the columns and rows would be added together
       
    }
        }
         
        printf("the area of the shape is %d\n",count);                   // this displays the area result
            count = 0;
        
                                                        
		  } 
                                                
        
//case 3: 

int perimeter(char singline[50][50]){                                     // function 3
  
int j;                                                                       //variables
int k;                                                                     //variables
int countup;                                                              //variables

for(j=0; j<50; j++) {                                                       // when j is equal to zero or if j less than 50 all of the rows will be added
    for(k=0; k<51; k++) {                                                   // when k is equal to zero or if k less than 50 all of the columns will be added
       
    }
    }
    for(j=0; j<50; j++) {                                                   // when j is equal to zero or if j less than 50 all of the rows will be added
    for(k=0; k<50; k++) {                                                  // when k is equal to zero or if k less than 50 all of the columns will be added
    
   if (singline[j][k + 1] == '0' & singline[j][k] == '1')         
            countup++;                                                       // if jk equals to 1 and if row & the column on the right is equal to 0,a sum will take place  
          else if (singline[j][k] == '1' & singline[j][k - 1] == '0')  
            countup++;                                                      // if jk equals to 1 and if row & the column left is equal to 0,a sum will take place 
          else if (singline[j + 1][k] == '0' & singline[j][k] == '1')    
            countup++;                                                     // if jk equals to 1 and if column & the row below is equal to 0,a sum will take place 
          else if (singline[j][k] == '1' & singline[j - 1][k] == '0')   
            countup++;                                                    // if jk equals to 1 and if column & the row above is equal to 0,a sum will take place 
                                                     
    }
    }
    printf("the perimeter of the shape is %d\n",countup);                // this displays the perimeter result
    
	
		} 

       
            
//case 4: 
    double shape_factor(char singline[50][50]){                            // function 4
    int shape_factor;											           //variables
	int j;                                                                 //variables
	int k;                                                                 //variables
	int count=0;		                                                       //variables
	int countup=0;                                                           //variables
 
	double sfactor;
    for(j=0; j<50; j++) {                                                       // when j is equal to zero or if j less than 50 all of the rows will be added
    for(k=0; k<51; k++) {                                                   // when k is equal to zero or if k less than 50 all of the columns will be added
       
    }
    }
    for(j=0; j<50; j++) {                                                   // when j is equal to zero or if j less than 50 all of the rows will be added
    for(k=0; k<50; k++) {                                                  // when k is equal to zero or if k less than 50 all of the columns will be added
    
   if (singline[j][k + 1] == '0' & singline[j][k] == '1')         
            countup++;                                                       // if jk equals to 1 and if row & the column on the right is equal to 0,a sum will take place  
          else if (singline[j][k] == '1' & singline[j][k - 1] == '0')  
            countup++;                                                      // if jk equals to 1 and if row & the column left is equal to 0,a sum will take place 
          else if (singline[j + 1][k] == '0' & singline[j][k] == '1')    
            countup++;                                                     // if jk equals to 1 and if column & the row below is equal to 0,a sum will take place 
          else if (singline[j][k] == '1' & singline[j - 1][k] == '0')   
            countup++;                                                    // if jk equals to 1 and if column & the row above is equal to 0,a sum will take place 
                                                     
    }
    }
for(j=0; j<50; j++) {                                           // when j is equal to zero or if j less than 50 all of the rows will be added
    for(k=0; k<50; k++) {                                          // when k is equal to zero or if k less than 50 all of the columns will be added
   
       
       if (singline[j][k]=='1')                                  
       count++ ;                                                   // if jk equals to 1 then the columns and rows would be added together
       
    }
        }
    shape_factor=(countup*countup)/count;                  // formula used to calculate the shape factor
    printf("the shape factor is %d \n",shape_factor);                   // this displays the shape factor result
    
    
   }

   
//case 5:
void minimum_rectangle(char singline[50][50]){                         // function 5
int j;                                                                 //variables
int k;                                                                //variables

for(j=0; j<50; j++) {                                               // when j is equal to zero or if j less than 50 all of the rows will be added, and the body of the loop is executed.
    for(k=0; k<50; k++){                                           // when k is equal to zero or if k less than 50 all of the columns will be added, and the body of the loop is executed.
   
    }
    }
    
for(j=0; j<50; j++) {                                               // when j is equal to zero or if j less than 50 all of the rows will be added, and the body of the loop is executed.
    for(k=0; k<50; k++) {                                           // when k is equal to zero or if k less than 50 all of the columns will be added, and the body of the loop is executed.
       if (singline[j][k]=='1'){
       printf("min x: %i\n", j);
       break;}                                                     // this terminates the loop statement
   if (singline[j][k]=='1')
       break;                                                      // if jk is equal to 1 this terminates the loop statement
    }
if (singline[j][k]=='1')
       break;                                                      // this terminates the loop statement
    }
    

    for(k=0; k<50; k++) {                                           // when k is equal to zero or if k less than 50 all of the rows will be added, and the body of the loop is executed.
    for(j=0; j<50; j++) {                                           // when j is equal to zero or if j less than 50 all of the columns will be added, and the body of the loop is executed.
       if (singline[j][k]=='1'){
       printf("min y: %d\n", k);                                    // this displays the result
       break;}                                                      // this terminates the loop statement
   if (singline[j][k]=='1')
       break;                                                       // this terminates the loop statement
    }
    if (singline[j][k]=='1')
       break;                                                       // this terminates the loop statement
    }
    

for(j=50; j>=0; j--) {                                             // when j is equal to zero or if j less than 50 or equal to 0 all of the rows will be subtracted, and the body of the loop is executed.
    for(k=50; k>=0; k--) {                                         // when k is equal to zero or if k less than 50 or equal to 0 all of the columns will be subtracted, and the body of the loop is executed.
       if (singline[j][k]=='1'){
       printf("max x: %i\n", j);                                   // this displays the result
       break;}if (singline[j][k]=='1')
       break;                                                      // this terminates the loop statement
    }
    if (singline[j][k]=='1')
       break;                                                      // this terminates the loop statement
    }
    
    
for(k=50; k>=0; k--) {                                             // when j is equal to zero or if j less than 50 or equal to 0 all of the rows will be subtracted, and the body of the loop is executed. 
for(j=50; j>=0; j--) {                                            // when k is equal to zero or if k less than 50 or equal to 0 all of the columns will be subtracted, and the body of the loop is executed.
       if (singline[j][k]=='1'){
       printf("max y: %d\n", k);                                   // this displays the result
       break;}                                                    // this terminates the loop statement
   if (singline[j][k]=='1')
       break;                                                    // if jk equals to 1 this terminates the loop statement  
    }
    if (singline[j][k]=='1')
       break;                                                    // if jk equals to 1 this terminates the loop statement
    }
         printf("\n\n");  
                                                          
		 }                                   
		                                
                                                 
//case 6:
void 	centroid(char singline[50][50]){                          // function 6
int j;                                                               //variables
int k;                                                             //variables
int xc=0;                                                           //variables
int yc=0;                                                           //variables
int count=0;                                                        //variables

for(j=0; j<50; j++) {                                    // when j is equal to zero or if j less than 50 all of the rows will be added, and the body of the loop is executed.
for(k=0; k<50; k++) {                                    // when k is equal to zero or if k less than 50 all of the columns will be added, and the body of the loop is executed.
   
if (singline[j][k]=='1'){
       count++ ;
       xc= xc+j;
       yc= yc+k;
       }                                                
    }
    }
xc= xc/ count;
yc= yc/ count;
printf("xc is: %d\n, yc is: %d\n",xc,yc);                     // this displays the centroid result
      count = 0;                                                     
      xc=0;
      yc=0;                   
   }



//case 7:
void image_outline(char singline[50][50]){                              // function 7
int j;                                                                 //variables
int k;                                                                 //variables

 for(j=0; j<50; j++) {                                              // when j is equal to zero or if j less than 50 all of the rows will be added, and the body of the loop is executed.
for(k=0; k<51; k++) {                                              // when k is equal to zero or if k less than 50 all of the columns will be added, and the body of the loop is executed. 
      
    }
    }
    for(j=0; j<50; j++) {                                          // when j is equal to zero or if j less than 50 all of the rows will be added, and the body of the loop is executed.
    for(k=0; k<50; k++) {                                          // when k is equal to zero or if k less than 50 all of the columns will be added, and the body of the loop is executed. 
       
    	if(singline[j][k-1]=='0' & singline[j][k]=='1')
    printf("%c",singline[j][k]);                                        // if jk equals to 1 and if row & the column right is equal to 0,a column would be displayed
       else if(singline[j][k]=='1' & singline[j][k+1]=='0')
      printf("%c",singline[j][k]);                                       // if jk equals to 1 and if row & the column left is equal to 0, a row would be displayed 
       else if (singline[j-1][k]=='0'& singline[j][k]=='1')            
      printf("%c",singline[j][k]);                                      // if jk equals to 1 and if column & the row below is equal to 0, a column would be displayed
       else if (singline[j][k]=='1'& singline [j+1][k]=='0')            
      printf("%c",singline[j][k]);                                       // if jk equals to 1 and if column & the row above is equal to 0,a column would be displayed
      else 
      printf(" ");
    }
     printf("\n");                                                      // display final image
    }
    

     }
 // Case 8
	void Exit(){
 
  
            
            printf("This program has now ended\n");                      //display message
           
            exit(0);
}
 
