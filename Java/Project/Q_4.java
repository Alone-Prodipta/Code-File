import java.util.Scanner;

class Q_4 
{
    public static char encryptChar(char ch, int key) 
    {
        if (Character.isUpperCase(ch)) 
        {
            return (char) ('A' + (ch - 'A' + key) % 26);
        } 
        else if (Character.isLowerCase(ch)) 
        {
            return (char) ('a' + (ch - 'a' + key) % 26);
        } 
        else 
        {
            return ch;
        }
    }

    public static char decryptChar(char ch, int key) 
    {
        if (Character.isUpperCase(ch)) 
        {
            return (char) ('A' + (ch - 'A' - key + 26) % 26);
        } 
        else if (Character.isLowerCase(ch)) 
        {
            return (char) ('a' + (ch - 'a' - key + 26) % 26);
        } 
        else 
        {
            return ch;
        }
    }

    public static void main(String[] args) 
    {
        Scanner my = new Scanner(System.in);

        System.out.println("Enter a character: ");
        char ch = my.next().charAt(0);

        int key = 3;
        char encrypted = encryptChar(ch, key);
        char decrypted = decryptChar(encrypted, key);

        System.out.println("Encrypted character: " + encrypted);
        System.out.println("Decrypted character: " + decrypted);
    }
}

