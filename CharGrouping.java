
/**
 *
 * @author nikhil
 */
public class CharGrouping {
//For an input string "2f-67kgfh-yn" and k=3
//the output is 2-F67-KGF-HYN

	//str is the input string.
	//k is the number of chars in each group in the string separated by -    
    public static String groupChars(String str, int k){
		int countChars = 0;
		StringBuffer newStr = new StringBuffer();
		for(int i=0; i<str.length();i++){
			if(str.charAt(i) != '-'){
				countChars++;
				newStr.append(str.charAt(i));
			}
		}

		int countHash = str.length() - countChars;
		int tempCount = k;

		StringBuffer s = new StringBuffer();

		for(int i = newStr.length()-1; i >= 0; i--){
                if(tempCount == 0){
                    s.append("-");
                    tempCount = k;
                }
                s.append(newStr.charAt(i));
                tempCount--;
		}
		s=s.reverse();
		
		return s.toString().toUpperCase();
	}
    
    public static void main(String a[]){
        System.out.println(groupChars("3f-67ggfh-yh", 3));
    }
    
}
