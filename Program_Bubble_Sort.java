import java.util.Random;

public class Program_Bubble_Sort {

    public static void main(String[] args) {

        int jumlahData = 2000000;
        int[] data = new int[jumlahData];

        Random random = new Random();

        for (int i = 0; i < jumlahData; i++) {
            data[i] = random.nextInt(1000000) + 1;
        }

        long startTime = System.currentTimeMillis();

        for (int i = 0; i < data.length - 1; i++) {

            boolean swapped = false;

            for (int j = 0; j < data.length - i - 1; j++) {

                if (data[j] > data[j + 1]) {

                    int temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;

                    swapped = true;
                }
            }

            if (!swapped) {
                break;
            }
        }

        long endTime = System.currentTimeMillis();

        System.out.println("Data berhasil diurutkan");
        System.out.println("Waktu sorting: "
                + (endTime - startTime)
                + " milidetik");
    }
}
