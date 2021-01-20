# include <string>
std::string disemvowel(std::string str)
{
      //modified_String will store the string without the vowels
      std::string modified_String = "" ; //Declearing an empty string

      //the for loop will run till, it doesnot get a null '\0'
      for(int i = 0; str[i] != '\0'; i++){
        //Cheching the index for vowels
        if(str[i] != 'a' && str[i] != 'e' &&str[i] != 'i' && str[i] != 'o' && str[i] != 'u' 
        && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
            //index i contains a consonent.
            //The consonent at index i is being copied to modified_String
            modified_String = modified_String + str[i];
        }
      }
      return modified_String; 
}
