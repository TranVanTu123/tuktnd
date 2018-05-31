
void handlGameOver(int diem)
{
	clrscr();
	printf("Ban thua roi nhe!!!\n");
	printf("Diem cua ban gianh duoc trong tro choi nay: %d\n", diem);
	ifstream file("maxScore.txt");
        int maxScore;
        file >> maxScore;
        file.close();
        if(maxScore < diem)
        {
            ofstream file("maxScore.txt");
            file << diem;
            maxScore = diem;
            file.close();
        }
	printf("Diem cao nhat ma ban da gianh duoc: %d", maxScore);
	return;



}
