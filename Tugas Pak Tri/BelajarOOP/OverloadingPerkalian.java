package com.mycompany.belajarjavaoop;

public class OverloadingPerkalian {
    
    static class Contoh {
    
        // method  1
        void Perkalian (int a, int b) {
            System.out.println(a*b);
        }    
        
        //method 2
        void Perkalian (int a, int b, double c) {
            System.out.println(a*b);
        }    
        
        //method 3
        void Perkalian (double a, double b) {
            System.out.println(a*b);
        }    
        
        
    }
    
    public static void main(String[] args) {
      
        Contoh c = new Contoh();
            
        c.Perkalian(2,3);
        c.Perkalian(4,5,2.7);
        c.Perkalian(2.2,4.3);
        
    }
    
}
