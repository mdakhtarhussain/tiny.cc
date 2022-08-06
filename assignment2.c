#include<stdio.h>
#include<conio.h>
 //LOOP line no 718                                 
								  
								  
								   //ARRAY
                         // Input array and print array element.
/*int main()
{
	int n, i, arr[n];
	printf("Enter the size of array: ");
	scanf("%d",&n);
	//int arr[n];
	printf("Enter the array element: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}*/

                                     
                                     
                                      // sum of array element.
/* int main()
{                                                 
	int n, i, arr[n];
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array element: ");  
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int sum = 0;
		for(i=0;i<n;i++){
			
			sum += arr[i];
		}
		printf("sum of the array = %d",sum);
}*/


                                     // Maximum and Minimum element in the array.

/*int main()  
{
   int a[10],i,n,max,min;
   printf("enter the size of array: ");
   scanf("%d",&n);
   printf("enter the elements into array: ");
   for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
     max=a[0];
    for(i=0;i<n;i++)
      {
         if(a[i]>max)
      {
      max=a[i];
      }
      } 
    min=a[0];
    for(i=0;i<n;i++)
      {
        if(a[i]<min){
        min=a[i];
      }
     }
    printf("the maximum element is %d: \n",max);
    printf("the minimum element is %d: ",min);
}*/


 
                                    // Copy element one array to another array.
/*int main()    
{        
    int arr1[] = {1, 2, 3, 4, 5}, i;    
    int length = sizeof(arr1)/sizeof(arr1[0]);    
    int arr2[length];    
    for (i = 0; i < length; i++) {     
        arr2[i] = arr1[i];     
    }      
    printf("Elements of original array: \n");    
    for (i = 0; i < length; i++) {     
        printf("%d ", arr1[i]);    
    }    
    printf("\n");    
    printf("Elements of new array: \n");    
    for (i = 0; i < length; i++) {     
        printf("%d ", arr2[i]);    
    }    
    return 0;    
}*/    


                             // Insert an element in the array.
/*int main()
{
   int arr[40],pos,i,size,value;
   printf("enter no of elements in array: ");
   scanf("%d",&size);
   printf("enter %d elements are:\n",size);
   for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
   printf("enter the position where you want to insert the element: ");
   scanf("%d",&pos);
   printf("enter the value into that poition: ");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
      arr[i+1]=arr[i];
   arr[pos-1]= value;
   printf("final array after inserting the value is\n");
   for(i=0;i<=size;i++)
      printf("%d\n",arr[i]);
   return 0;
}*/


                             // Delete an element from an array.
/*int main ()  
{   
    int arr[50];  
    int pos, i, num;  
    printf (" \n Enter the number of elements in an array: \n ");  
    scanf (" %d", &num);  
    printf (" \n Enter %d elements in array: \n ", num);  
    for (i = 0; i < num; i++ )  
    {   printf (" arr[%d] = ", i);  
        scanf (" %c", &arr[i]);  
    }  
    printf( " Define the position of the array element where you want to delete: \n ");  
    scanf (" %d", &pos);  
    if (pos >= num+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        for (i = pos - 1; i < num -1; i++)  
        {  
            arr[i] = arr[i+1];   
        }  
        printf (" \n The resultant array is: \n");  
        for (i = 0; i< num - 1; i++)  
        {  
            printf (" arr[%d] = ", i);  
            printf (" %c \n", arr[i]);  
        }  
    }  
    return 0;  
}*/


                                  // frequency of the element in the array.
/*int main()    
{    
    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};     
    int length = sizeof(arr)/sizeof(arr[0]);    
    int fr[length];    
    int visited = -1, i,j;    
    for(i = 0; i < length; i++){    
        int count = 1;    
        for(j = i+1; j < length; j++){    
            if(arr[i] == arr[j]){    
                count++;    
            fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }    
    printf(" Element | Frequency\n");    
    for(i = 0; i < length; i++){    
        if(fr[i] != visited){    
            printf("    %d", arr[i]);    
            printf("    |  ");    
            printf("  %d\n", fr[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}*/


                                     // Print uniq element in a array.
/*int main()
{
    int a[20],b[20],i,j,n,c=0 ;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        c=1;
        if(a[i]!=-1)
		{
		    for(j=i+1; j<n; j++)
             {
        	   if(a[i]==a[j])
        	    {
			       c++;
			       a[j]=-1;
		       }
	       }
	       b[i]=c;
		}
    }
        printf("unique numbers in the  array :\n");
     for(i=0; i<n; i++)
    {
         if(a[i]!=-1)
        {
        	if(b[i]==1)
        	printf("%d\n",a[i]);
 
		} 
    }    
    return 0;
} */


                                         // Duplicate element in the array.
/*int main()
{
    int arr[20];
    int i, j, size, count = 0;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);
    return 0;
}*/


                                          // Dlete the all duplicate no.
/*int main ()  
{  
    int arr[20], i, j, k, size;  
    printf (" Define the number of elements in an array: ");  
    scanf (" %d", &size);  
    printf (" \n Enter %d elements of an array: \n ", size);  
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            if ( arr[i] == arr[j])  
            {  
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                size--;  
                j--;      
            }  
        }  
    }  
    printf (" \n Array elements after deletion of the duplicate elements: ");  
    for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", arr[i]);  
    }  
    return 0;  
}*/



                          // Write a program  to print negative elements in array.
                          
/*int main()
{
    int a[10],i,n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nAll negative elements in array are : ");
    for(i=0; i<n; i++)
    {
         
        if(a[i] < 0)
        {
            printf("%d  ", a[i]);
        }
    }
    return 0;
}*/                          
                          


                         // Write a program to count even and odd elements in array.
				
/*int main()
{
    int a[20],i,n,even=0,odd=0;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
          if(a[i]%2==0)
          even++;
          else
          odd++;
	}
     printf("even numbers in array: %d",even);
     printf("\n odd numbers in array: %d",odd);
    return 0;
}*/						 



                         // Write a program  to count negative elements in array.
						 
/*int main()
{
    int a[1000],i,n,c=0;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i] < 0)
         c++;
    }
         printf("  count  of negative numbers  in array: %d",c);
    return 0;
}*/


                        // Write a program  to print array in reverse.

/*int main()  
{  
    int a[5], i;  
    printf("Enter 5 integer numbers\n");  
    for(i = 0; i < 5; i++)  
        scanf("%d", &a[i]);  
    printf("Array elements are:\n");  
    for(i = 4; i >= 0; i--)  
        printf("%d\n", a[i]);  
    return 0;  
}*/                          



                        // Write a program to separate even and odd array elements.
						
/*int main()
{
    int arr[20],i,num;
    printf("Enter size of the array\n");
    scanf("%d",&num);
    printf("Enter the elements of the array\n");
    for(i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEven numbers of the array are \n");
     for(i=0; i<num; i++){
        if(arr[i]%2==0){
            printf("%d \t",arr[i]);
        }
    }
    printf("\nOdd numbers of the array are \n");
     for(i=0; i<=num; i++){
        if (arr[i]%2==1){
            printf("%d \t",arr[i]);
        }
    }
    return 0;
}*/



                        // Write a program to search element in array.
						
/*int main()
{
    int a[20],i,n,key;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key : ");
    scanf("%d", &key);
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
			printf("element found ");
            return 0;		 
        }
    }
    printf("element  not  found");
}*/




                            // Write a program to add two matrices.
							
/*int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("\nENTER VALUES FOR MATRIX A:\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("\nENTER VALUES FOR MATRIX B:\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("\nTHE VALUES OF MATRIX C ARE:\n");
	for(i=0;i<2;i++)
        {
		for(j=0;j<3;j++)
			printf("%5d",c[i][j]);
		printf("\n");
	}
	return 0;
}*/



                            // Write a program to multiply two matrices.
							
/*int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], sum=0, i, j, k;
    printf("Enter first 3*3 matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter second 3*3 matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat2[i][j]);
    }
    printf("\nMultiplying two matrices...");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum = sum + mat1[i][k] * mat2[k][j];
            mat3[i][j] = sum;
        }
    }
    printf("\nMultiplication result of the two given Matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t", mat3[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}*/



                            //  Write a program  to find sum of main diagonal elements of a matrix.
							
/*int main()
{
    int mat[12][12];
    int i,j,row,col,sum=0;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
	printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}*/


       
	                    // Write a program to find sum of opposite diagonal elements of a matrix.
						
/* int main ()
    {
        static int array[10][10];
        int i, j, m, n, a = 0, sum = 0;
        printf("Enetr the order of the matix \n");
        scanf("%d %d", &m, &n);
        if (m == n ) 
        {
            printf("Enter the co-efficients of the matrix\n");
            for (i = 0; i < m; ++i)
            {
                for (j = 0; j < n; ++j)
                {
                    scanf("%d", &array[i][j]);
                }
            }
            printf("The given matrix is \n");
            for (i = 0; i < m; ++i) 
            {
                for (j = 0; j < n; ++j)
                {
                    printf(" %d", array[i][j]);
                }
                printf("\n");
            }
            for (i = 0; i < m; ++i) 
            {
                sum = sum + array[i][i];
                a = a + array[i][m - i - 1];
            }
            printf("\nThe sum of the main diagonal elements is = %d\n", sum);
            printf("The sum of the off diagonal elements is   = %d\n", a);
        }
 
        else
            printf("The given order is not square matrix\n");
 
    }*/
	
	

                                // Write a program to find sum of rows and columns of matrix.
								
/*int main ()
{
    static int array[10][10];
    int i, j, m, n, sum = 0;
    printf("Enter the order of the matrix\n");
    scanf("%d %d", &m, &n);
	printf("Enter the co-efficients of the matrix\n");
    for (i = 0; i < m; ++i)
      {
        for (j = 0; j < n; ++j) 
         {
            scanf("%d", &array[i][j]);
         } 
      }
    for (i = 0; i < m; ++i) 
      {
        for (j = 0; j < n; ++j) 
         {
            sum = sum + array[i][j] ;
         }
        printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
      }
        sum = 0;
        for (j = 0; j < n; ++j) 
        {
            for (i = 0; i < m; ++i)
            {
                sum = sum + array[i][j];
            }
        printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
     }
}*/




                            // Write a program  to find transpose of a matrix.
							
/*int main(){
 
   int m, n, i, j, matrix[10][10], transpose[10][10];
   printf("Enter rows and columns :\n");
   scanf("%d%d", &m, &n);
   printf("Enter elements of the matrix\n");
   for (i= 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matrix[i][j]);
   for (i = 0;i < m;i++)
      for (j = 0; j < n; j++)
         transpose[j][i] = matrix[i][j];
   printf("Transpose of the matrix:\n");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", transpose[i][j]);
      printf("\n");
   }
   return 0;
}*/



                            //  Write a C program to left rotate an array.
							
/*int main()
{
    int a[10],i,n,j,k,temp;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("how many times left rotate : ");
    scanf("%d", &k);
    for(i=0; i<k; i++)
    {
        temp=a[0];
        for(j=0; j<n-1; j++)
        {
           a[j]=a[j+1];
		}
        a[n-1]=temp;
    }
    printf("\narray elements after left rotate  : ");
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
}*/




                            // Write a C program to right rotate an array.

/*int main()
{
    int a[10],i,n,j,k,temp;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("how many times right rotate : ");
    scanf("%d", &k);
    for(i=0; i<k; i++)
    {
        temp=a[n-1];
        for(j=n-1; j>0; j--)
        {
           a[j]=a[j-1];
		}
        a[j]=temp;
    }
    printf("\narray elements after right rotate  : ");
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
 }*/
 
 
                                        // LOOP
						//  Write a C program to print all natural numbers from 1 to n using loop.
						
/*int main(){
    int i = 1, num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    printf("Natural numbers from 1 to %d are: \n");
    while (i <= num){
        printf("%d \n", i);
        i++;
    }
    return 0;
}*/



                        // Write a C program to print all alphabets from a to z. - using  loop.
						
/*int main() {
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
        printf("%c\t ", c);
    return 0;
}*/



                        // Write a C program to print all even numbers between 1 to 100. - using  loop.
						
/*int main() {  
    int counter; 
    printf("Even numbers between 1 to 100\n");  
    counter = 2;
    while (counter <= 100) {  
        printf("%d ", counter);
    counter = counter + 2;  
    }  
    return 0;  
}*/


                        // Write a C program to find sum of all natural numbers between 1 to n.
                        
/*int main ()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d", n, sum);
    return 0;	
}*/

                       //Write a C program to find sum of all even numbers between 1 to n.
  
/*int main(){
    int i, num, sum = 0;
    printf("Enter the maximum value: ");
    scanf("%d", &num);
    printf("Even Numbers Between 0 and %d are: \n", num);
    for (i = 1; i <= num; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    printf("The Sum of Even Numbers from 0 to %d is %d.", num, sum);
    return 0;
}*/

                          // Write a C program to print multiplication table of any number.                        
                        
/*int main() {
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}*/

                        //Write a C program to count number of digits in a number.
						
/*int main() {
  long long n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%lld", &n);
  do {
    n /= 10;
    ++count;
  } while (n != 0);
  printf("Number of digits: %d", count);
}*/

                        // Write a C program to calculate sum of digits of a number.						                        
                        
/*int main()
{
   int n, t, sum = 0, remainder;
   printf("Enter an integer\n");
   scanf("%d", &n);
   t = n;
   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
   printf("Sum of digits of %d = %d\n", n, sum);
   return 0;
}*/                        
                        
                        //Write a C program to enter a number and print its reverse.
						
/*int main() {
  int n, reverse = 0, remainder;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  printf("Reversed number = %d", reverse);
  return 0;
}*/

                        //Write a C program to check whether a number is palindrome or not.
						
/*int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    return 0;
}*/

                            //Write a C program to calculate factorial of a number.
							
/*int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
    return 0;
}*/

                        //Write a C program to check whether a number is Armstrong number or not.
						
/*int main(){
   int number,remainder,total=0,temp;
   printf("enter the number=");
   scanf("%d",&number);
   temp=number;
   while(number>0){
      remainder=number%10;
      total=total+(remainder*remainder*remainder);
      number=number/10;
   }
   if(temp==total)
      printf("This number is Armstrong number");
   else
      printf("This number is not Armstrong number");
   return 0;
}*/

                            // Write a C program to find HCF (GCD) of two numbers.
							
/*int main()
{
    int n1, n2, i, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
    return 0;
}*/

                            //Write a C program to find LCM of two numbers.
							
/*int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}*/

                            //Write a C program to check whether a number is Prime number or not.
							
/*int main() {
  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if (n == 0 || n == 1)
    flag = 1;
  for (i = 2; i <= n / 2; ++i) {
  if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
  return 0;
}*/

                        //Write a C program to print all Prime numbers between 1 to n.
                        
/*int main(){
   int i, num, n, count;
   printf("Enter the range: \n");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d:",n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
}*/

                            //Write a C program to find sum of all prime numbers between 1 to n.
							
/*int main() {
    int num, i, upto, sum = 0;
    printf("Find sum of prime numbers upto : ");
    scanf("%d", &upto);
    for(num = 2; num <= upto; num++) {
        for(i = 2; i <= (num / 2); i++) {
            if(num % i == 0) {
                i = num;
                break;
            }
        }
        if(i != num) {
            sum += num;            
        }
    }
    printf("\nSum of all prime numbers upto %d : %d", upto, sum);
    return 0;
}*/

							                        
																																		        																		 																																																																																									 						                           
