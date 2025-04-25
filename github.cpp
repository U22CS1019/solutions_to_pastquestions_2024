#include <iostream>
using namespace std;

class PrimeChecker{
    public:
    PrimeChecker(int num): number(num){}

    bool isPrime(){
        if (number<=1){
            return false; //0 and 1 are not prime numbers
        }
        for (int i=2; i*i<= number; i++){
            if(number%i==0){
                return false; //If the number is divisible by any number between 2 and sqrt(num), it's not prime
            }
        }
        return true;//If the number is not divisible by any of the above, it's prime
    }
    void printResult(){
        if (isPrime()){
            cout<<number<<"is a prime number";
        }else{
            cout << number << "is not a prime number";
        }
    }
    private:
    int number;
    };
    int main(){
        int num=13;
        cout << "Input a number: " << num << endl;

        PrimeChecker checker(num);
        checker.printResult();

        return 0;
    }

    class ArrayProcessor{
        public:
        void run() {
            int n;
            cout << "Input the number of elements to be stored in the array:";
            cin>>n;

            int arr[n];
            cout << "Input" <<n<<"elements in the array:"<<endl;
            for (int i=0; i<n; i++){
                cout << "Element"<<i<<":";
                cin>>arr[i];
            }

            int sum = calculateSum(arr,n);
            cout<< "Input" <<n<<"elements in the array:"<<endl;
        }

        int sum= calculateSum(arr,n);
        cout<< "Sum of all elements stored in the array is:" <<sum<<endl;
    }

      int calculateSum(int arr[], int n){
        int sum=0;
        for (int i=0; i<n; i++){
            int sum=0;
            for (int i=0; i<n;i++){
                sum+=arr[i];
            }
            return sum;
        }
      };

      int main(){
        ArrayProcessor processor;
        processor.run();

        return 0;
      }

      class PrimeCheck {
        public:
        void run() {
            int numbers[10]={2,5,7,3,1,9,8,4,2};

            calculateSumandAverage(int numbers[]){
                int sum=0;
                for (int i=0; i<10; i++){
                    sum+= numbers[i];
                }

                double average= (double)sum/10;

                cout << "The sum of the 10 numbers is " <<sum<< endl;
                cout << "The average is:" << average << endl;
            }
        };

        int main() {
            PrimeCheck check;
            check.run();

            return 0;
        }
        int numElements=5;
        int arr[]= {15,26,42,82,35};
        cout << "Input the number of elements to e stored in the array:" <<numElements<< endl;
        cout << "Input" <<numElements<< "elements in the array:" <endl;
        cout << "Element 0: 15"<< endl;
        cout << "Element 1: 26"<< endl;
        cout << "Element 2: 42"<< endl;
        cout << "Element 3: 82"<< endl;
        cout << "Element 4: 35"<< endl;
        bubbleSort(arr, numElements);
        printArray(arr, numElements);
      }

      void bubbleSort(int arr[], int n){
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(arr[j]> arr[j+i]){
                    int temp=arr[j];
                    arr[j]=arr[j+1]= temp;
                }
            }
        }
      }

      void printArray(int arr[], int n){
        cout<< "After sorting the array are:";
        for (int i=0; i<n; i++){
            cout << arr[i] <<"";
        }
        cout << endl;
      };

      int main(){
        PrimeCheck check;
        check.run();

        return 0;
      }

      class PrimeCheck{
        public:
        void run(){
            string str= "Learn c++ programming";
            cout << "The length of the string\"" << str << "\" is " << computeLength(str) << endl;
        }

        int computeLength(string str){
            return str.length();
        }
      };

      int main() {
        PrimeCheck check;
        check.run();

        return 0;
      }

      class PrimeCheck{
        public:
        void run() {
            int arr[]= {23,60,90,50,20,55,100,10};
            int key=50;
            int n= sizeof(arr)/ sizeof(arr[0]);
            int result= linearSearch(arr,n,key);
            if (result==-1){
                cout<<"Element not found in the array"<<endl;
            }else{
                cout<< "Element found at position"<< result << endl;
            }
        }
        int linearSearch(int arr[], int n, int key) {
            for(int i=0; i<n; i++){
                if (arr[i]== key){
                    return i;
                }
            }
            return -1;
        }
      };

      int main() {
        PrimeCheck check;
        check.run();

        return 0;
      }

      class PrimeCheck{
        public:
        int addNumbers() {
            int num1, num2, sum;
            cout << "Input the first number:";
            cin >> num1;
            cout << "Input the second number: ";
            cin >> num2;

            int* ptr1 = &num1;
            int* ptr2 = &num2;
            int* ptrSum = &sum;

            *ptrSum =  *ptr1 + *ptr2;

            cout << "The sum of the entered numbers is: " << *ptrSum << endl;
            return *ptrSum;
        }
      };

      int main() {
        PrimeCheck check;
        check.addNumbers()

        return 0; 
      }

      class PrimeCheck{
        public:
        string checkPalindrome(){
            int num;
            cout<< "Input a number:";
            cin>>num;

            int reversedNum=0;
            int originalNum=num;

            while (num!=0){
                int remainder= num%10;
                reversedNum= reversedNum*10 + remainder;
                num/=10;
            }

            if(originalNum==reversedNum){
                return to_string(originalNum)+ "is a palindrome number";
            }else{
                return to_string(originalNum)+ "is not a palindrome number";
            }
        }
      };

      int main(){
        PrimeCheck check;
        cout << check.checkPalindrome() << endl;

        return 0;
      }

      struct Student{
        string name;
        int age;
        int totalMarks;
      };

      class PrimeCheck{
        public:
        void run(){
            Student student1 ={"John",20,90};
            Student student={"Jane",21,85};

            cout << "Data for First student:" <<endl;
            cout << "Name:" << student1.name<<endl;
            cout<< "Age:" << student1.age<<endl;
            cout<< "Total marks:"<<student1.totalMarks<<endl;

            cout<<"Data for second student:"<<endl;
            cout<<"Name:"<<student2.name<<endl;
            cout<<"Age:"<<student2.age<<endl;
            cout<<"Total marks:"<<student2.totalMarks<<endl;

            int averageMarks=(student1.totalMarks+student2.totalMarks)/2;
            cout<<"The average of the total marks is:"<<averageMarks<<endl;
        }
      };

      int main(){
        PrimeCheck check;
        check.run();

        return 0;
      }

      class PrimeCheck{
        public:
        void run() {
            int num;
            cout<<"Input a number(integer):";
            cin>>num;

            if(num==0){
                cout<<"zero"<<endl;
            }else if(num>0){
                if(num%2==0){
                    cout<<"Number is positive even."<<endl;
                }else{
                    cout<<"Number is positive odd."<<endl;
                }
            }else{
                if(num%2==0){
                    cout<<"Number is negative even."<<endl;
                }else{
                    cout<<"Number is negative odd."<<endl;
                }
            }
        }
      };

      int main(){
        PrimeCheck check;
        check.run();

        return 0;
      }

      class PrimeCheck{
        public:
        void run(){
            int num=5;
            cout<<"Input the number:"<<num<<endl;
            long long factorial=calculateFactorial(num);
            cout<<"The factorial of"<<num<<"is:"<<factorial<<endl;
        }

        long long
        calculateFactorial(int num){
            if(num==0||num==1){
                return 1;
            }else{
                return 1;
            }else{
                return num*calculateFactorial(num-1);
            }
        }
      };
      int main(){
        PrimeCheck check;
        check.run()

        return 0;
      }

      class PrimeCheck{
        public:
        void printPersonalInfo(){
            string name= "Alexandra Abramov";
            string dob= "July 14, 1975";
            string mobile= "99-9999999999";

            cout<<"Name: "<<name<<endl;
            cout << "DOB:"<<dob<<endl;
            cout<<"Moblie:"<<mobile<<endl;
        }
      };

      int main(){
        PrimeCheck check;
        check.printPersonalInfo();

        return 0;
      }
