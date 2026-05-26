class Solution {
  public:
    void fizzBuzz(int number) {
        // code here.
        if(number%3==0 && number%5==0)
        {
            cout<<"FizzBuzz\n";
        } else if(number%5==0)
        {
            cout<<"Buzz\n";
        } else if(number%3==0)
        {
            cout<<"Fizz\n";
        } else{
            cout<<number<<endl;
        }
    }
};