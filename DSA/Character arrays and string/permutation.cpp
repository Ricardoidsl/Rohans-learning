bool arePermutation(string A, string B)
{
    for(int i = 0; A[i] != '\0'; i++)
    {
        for(int j = 0; B[j] != '\0'; j++)
        {
            if(A[i] != B[j])
            {
                return false;
            }
        }
        
    }return true;
}

bool palindrome(string a)
{
    
}