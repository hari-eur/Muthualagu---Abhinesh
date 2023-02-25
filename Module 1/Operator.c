//Detailed writeup about how different expressions are handled in c language//

Example:
	int a=((b*c/d)+e%f)-g 
	//To find the value stored in a//
	
	Using arthimetic operator precedence, the order (Highest to Lowest) as follows
	
	1)() 
	2)*,/,%
	3)+,-
	....continues
	
	Now assume values for the variables in the given expression as
     b=1 , c=6 , d=3 , e=4 ,f=2 ,g=1;
     
     Step 1 : a=((1*6/3)+e%f)-g
         Step 1.1 : Both *,/ have same order ,so according to associativity the execution order goes from left to right 
                  ie:(1*6/3)
         Step 1.2 : (6/3)
         Step 1.3 : 2
         now Step 1 becomes as,
         a=(2+e%f)-g
                  
     Step 2 :
     	  Step 2.1 : In (2+e%f), % operator has highest order and hence it becomes //e=4 , f=2//
     	             ie :(2+4%2)//since 4%2==0
          Step 2.2 : 2+0
     	  a=(2+0)-g
     	         
     Step 3 :
     	     In the above expression a=(2+0)-g ,(2+0) is executed first by associativity2-g   //g=1//
          Step 3.1 : 2-1
          Step 3.2 : 1
					  
					  Hence the final value stored in a=1  
            ==================================================================================================================
					  
	Example No 2 :
		            int a= b*c+d*e
		             
		             Assume the values , b=3 ; c=4 ; d=5 ; e=6 
		             
		            Step 1 :a= 3*4+5*6 //* has higher order of precedence
		                     =12+30
		                     
		            Step 2 : a=12+30
		                     a=42
		                     
		             Hence the final value stored in a=42
		            
		            	
		            	
					  
    
     
