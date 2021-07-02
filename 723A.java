import java.util.Arrays;
import java.util.Scanner;
public class theNewYearMeetingFriends
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] house = new int[3];
        house[0] = sc.nextInt();
        house[1] = sc.nextInt();
        house[2] = sc.nextInt(); 
        Arrays.sort(house);
        int midHouse = house[1];
        int distance = Math.abs(house[0]-midHouse) + Math.abs(house[2]-midHouse);
        System.out.println(distance);
    }
}
        