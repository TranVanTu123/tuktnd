
int main()
{
	srand (time (NULL));	// khoi tao bo sinh so ngau nhien

	Xe xe;
	VatCan vc;
	
	KhoiTao (xe, vc);

	int ma = 7;
	int ThoiGianSleep = 200;
		// huong dan
		introduce();

	while (1)
	{
	
		// hien thi
		HienThi (xe, vc);

		// dieu khien
		DieuKhien (xe);
		
		// xu li
		ma = XuLy (xe, vc, ThoiGianSleep);

		// game over
		if (ma == -1)
		{
			handlGameOver(xe.diem);

			while (_getch() != 13)	;

			break;
		}

		Sleep (ThoiGianSleep);
	}


	return 0;
}
