#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n[9];
    int tim[9];
    int i=2;
    int j=0;
    int start=0;
    int end=0;
    int tim0=0;
    int tim1=0;
    n[0]=0;
    
    //-------------------------------------------------(RANDOM ARRAY)---------------------------------------------
    
    // INPUT SIZE 0 ----------------------------------------------------------------------------------------------
    int rand0[0];
    for(j=0;j<0;j++)
    {
        rand0[j]=rand()%10;
    }
        
    tim0=gettimeoftheday(rand0, 0); 
    printf("%d\n",tim0);
        
    // INPUT SIZE 8000  -------------------------------------------------------------------------------------------
    n[1]=8000;
    int rand1[n[1]];
    for(j=0;j<8000;j++)
    {
        rand1[j]=rand()%10;
    }
        
    tim1=gettimeoftheday(rand1, 8000);
    printf("%d\n",tim1);
        
    // INPUT SIZE BEYOND 8000..... TILL 36000 ---------------------------------------------------------------------   
    for(i=2;i<9;i++)
    {
        n[i]=n[i-1] + 4000;
        
        int randarray[n[i]];
        
        for(j=0;j<n[i];j++)
        {
            randarray[j]=rand()%10;
        }
            
        tim[i]=gettimeoftheday(randarray, n[i]);
        printf("%d\n",tim[i]);
    }
    
    //--------------------------------------------(ARRAY IN INCREASING ORDER)---------------------------------------
    
    // INPUT SIZE 0 ----------------------------------------------------------------------------------------------
    
    int ninc[9];
    int randinc0[0];
    int h=1;
    for(j=0;j<0;j++)
    {
        randinc0[j]=h;
        h++;
    }
        
    tim0=gettimeoftheday(randinc0, 0);
    printf("%d\n",tim0);
    
        
    // INPUT SIZE 8000  -------------------------------------------------------------------------------------------
    ninc[1]=8000;
    int randinc1[ninc[1]];
    h=1;
    for(j=0;j<8000;j++)
    {
        randinc1[j]=h;
        h++;
    }
        
    tim1=gettimeoftheday(randinc1, 8000);
    printf("%d\n",tim1);
        
        
        
    // INPUT SIZE BEYOND 8000..... TILL 36000 ---------------------------------------------------------------------   
    for(i=2;i<9;i++)
    {
        ninc[i]=ninc[i-1] + 4000;
        
        int randarrayinc[ninc[i]];
        h=1;
        
        for(j=0;j<n[i];j++)
        {
            randarrayinc[j]=h;
            h++;
        }
            
        tim[i]=gettimeoftheday(randarrayinc, ninc[i]);
        printf("%d\n",tim[i]);
    }
    
    
    //--------------------------------------------(ARRAY IN DECRESING ORDER)---------------------------------------

    // INPUT SIZE 0 ----------------------------------------------------------------------------------------------
    int ndec[9];
    int randdec0[0];
    h=1;
    
    for(j=0;j<0;j++)
    {
        randdec0[j]=h;
        h--;
    }
        
    tim0=gettimeoftheday(randdec0, 0);
    printf("%d\n",tim0);
        
        
    // INPUT SIZE 8000  -------------------------------------------------------------------------------------------
    ndec[1]=8000;
    int randdec1[ndec[1]];
    h=8000;
    
    for(j=0;j<8000;j++)
    {
        randdec1[j]=h;
        h--;
    }
        
    tim1=gettimeoftheday(randdec1, 8000);
    printf("%d\n",tim1);
        
         
    // INPUT SIZE BEYOND 8000..... TILL 36000 ---------------------------------------------------------------------   
    for(i=2;i<9;i++)
    {
        ndec[i]=ndec[i-1] + 4000;
        
        int randarraydec[ndec[i]];
        h=ndec[i];
        
        for(j=0;j<ndec[i];j++)
        {
            randarraydec[j]=h;
            h--;
        }
            
        tim[i]=gettimeoftheday(randarraydec, ndec[i]);
        printf("%d\n",tim[i]);
    }
    
    return 0;
}

// Calculating time
int gettimeoftheday(int a[], int n)
{
    int start=0;
    int end=0;
    
    start=clock();
    
    selectionSort(a, n);
    
    end=clock();
    
    return (end-start);
}


// Selection sort
void selectionSort(int arr[], int n)
{
    int i, j, midx;
  
    for (i = 0; i < n - 1; i++) {
  
        // Find the minimum element in unsorted array
        midx = i;
  
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[midx])
                midx = j;
  
        // Swap the found minimum element
        // with the first element
        swap(&arr[midx], &arr[i]);
    }
}

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


