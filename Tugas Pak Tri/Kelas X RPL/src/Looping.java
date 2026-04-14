public class Looping {
    
public static void main(String[] args) {
    for(int a=1; a<=5; a++) {
        System.out.println("Vanno Ke-" +a);
    }
    
        System.out.println("");
        
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            System.out.print("* ");
        }
    }

        System.out.println("");
        
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            System.out.print("* ");
        }
    }
        
        System.out.println();
        
    }
}