import java.util.Scanner;/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Admin
 */
public class Bai2 {

    private int t, n, k, i;
    private int a[] = new int[1000];
    Scanner in = new Scanner(System.in);
    boolean check = false;
    public void solve() {
        t = Integer.parseInt(in.nextLine());
        if (t < 1 || t > 100) {
            return;
        } 
        else {
            for (int i = 1; i <= t; i++) {
                n = Integer.parseInt(in.nextLine());
                k = Integer.parseInt(in.nextLine());
                if (k < 1 || k > n || n > 1000) {
                    return;
                } else {
                    for (int j = 1; j <= k; j++) {
                        a[j] = Integer.parseInt(in.nextLine());
                    }
                    check = false;
                    i = k;
                    while(i>0 && a[i]==n-k+i) i--;
                    if(i>0){
                        a[i]++;
                        for(int j=i+1; j<=k; j++){
                            a[j] = a[i]+j-i;
                        }
                        check = true;
                    }
                    if(check == true){
                        for (int m=1; m<=k; m++){
                            System.out.print(a[m] + " ");
                        }
                    }
                    else{
                        for (int m=1; m<=k; m++){
                            System.out.print(m + " ");
                        }
                    }
                }
                System.out.println(" ");
            }
        }
    }
    public static void main(String[] args) {
        Bai2 main = new Bai2();
        main.solve();
    }
}
