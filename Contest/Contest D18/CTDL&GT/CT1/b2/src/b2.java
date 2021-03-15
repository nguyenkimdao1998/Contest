

import java.util.Scanner;

public class b2 {
    private int t, n, k;
    private int a[] = new int[100];
    Scanner in = new Scanner(System.in);

    public void solve() {
        t = Integer.parseInt(in.nextLine());
        if (t < 1 || t > 100) {
            return;
        } else {
            for (int i = 1; i <= t; i++) {
                n = Integer.parseInt(in.nextLine());
                k = Integer.parseInt(in.nextLine());
                if (k < 1 || k > n || n > 1000) {
                    return;
                } else {
                    for (int j = 0; j < k; j++) {
                        a[j] = Integer.parseInt(in.nextLine());
                    }

                    int dem = 0;
                    for (int j = k - 1; j >= 0; j--) {
                        if (n - k + j >= a[j]) {
                            dem++;
                            for (int l = 0; l < k; l++) {
                                if (l == j) {
                                    a[l] += 1;
                                    System.out.print(a[l] + " ");
                                } else if (l > j && l < k) {
                                    a[l] = a[l - 1] + 1;
                                    System.out.print(a[l] + " ");
                                } else {
                                    System.out.print(a[l] + " ");
                                }
                            }
                            break;
                        }
                    }
                    if (dem == 0) {
                        for (int j = 0; j < k; j++) {
                            System.out.print(j + 1 + " ");
                        }
                    }
                }
                System.out.println(" ");
            }
        }
    }
    public static void main(String[] args) {
        b2 main = new b2();
        main.solve();
    }
}
