public class StringManipulation {

    public static boolean IsNullOrWhitespace(String str){
        if(str == null) return true;
        int length = str.length();
        if (length > 0) {
            for (int i = 0; i < length; i++) {
                if (!Character.isWhitespace(str.charAt(i))) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
}
