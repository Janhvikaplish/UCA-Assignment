class SquareRootSol{

public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int number=sc.nextInt();
        int precision=sc.nextInt();
        System.out.println(squareRoot(number, precision));
 
        
    }

static float squareRoot(int number, int precision)
    {
        int low = 0, high = number;
        int mid;
        double res = 0.0;
        
        while (low <= high) {
            mid = (low + high) / 2;
            if (mid * mid == number) {
                res = mid;
                break;
            }
            if (mid * mid < number) {
                low = mid + 1;
                res = mid;
            }
            else {
                high = mid - 1;
            }
        }
        
        double decimal = 0.1;
        for (int i = 0; i < precision; i++) {
            while (res * res<= number) {
                res += decimal;
            }
            res = res - decimal;
            decimal = decimal / 10;
        }
        return (float)res;
    }
 
}
 
    
    
