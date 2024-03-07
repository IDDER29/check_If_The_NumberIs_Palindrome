int main() {
   int inputNum;

    printf("Enter your number to check if it is not a Palindrome : ");

    scanf("%d", &inputNum);
    int inputNumChange = inputNum;
    int reverseNum = 0;
    int reminder ;


    while(inputNumChange != 0){
        reminder = inputNumChange % 10;
        reverseNum = (reverseNum * 10) + reminder;


        inputNumChange = inputNumChange / 10;

         if (inputNumChange < 0) {
            break;
        }
    }

    if(reverseNum == inputNum){
        printf("true the number is a Palindrome");
    }else{
        printf("false the number is not a Palindrome");
    }
    return 1;
}
