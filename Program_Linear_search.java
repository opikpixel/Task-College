import java.util.Random;

public class Program_Linear_search {
    public static void main(String[] args) {
        int jumlahData = 1000000;
        int[] data = new int[jumlahData];

        Random random = new Random();

        for (int i = 0; i < jumlahData; i++) {
            data[i] = random.nextInt(10000000) + 1;
        }

        int target = 765432;

        long startTime = System.currentTimeMillis();

        int indexDitemukan = -1;
        for (int i = 0; i < data.length; i++) {
            if (data[i] == target) {
                indexDitemukan = i;
                break;
            }
        }

        long endTime = System.currentTimeMillis();

        if (indexDitemukan != -1) {
            System.out.println("Data ditemukan pada indeks ke-" + indexDitemukan);
        } else {
            System.out.println("Data tidak ditemukan.");
        }

        System.out.println("Waktu pencarian: " +
                (endTime - startTime) + " milidetik");
    }
}
