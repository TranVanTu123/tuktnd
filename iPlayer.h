// dieu khien
void DieuKhien (Xe &xe)
{
	if (_kbhit())
	{
		int key = _getch();

		if (key == 'A' || key == 'a' && xe.td.x > 2)
			xe.td.x--;
		else if (key == 'D' || key == 'd' && xe.td.x < roadWidth - 2)
			xe.td.x++;
	}
}

// tra ve 0 neu khong co gi
// tra ve -1 tuc la va cham
int XuLy (Xe &xe, VatCan &vc, int &ThoiGianSleep)
{
	// tao cam giac xe di chuyen -->vat can di xuong duoi
	vc.td.y++;


	// neu vat can di xuong duoi nghia la xe vuot qua vat can
	// thi tang diem
	if (vc.td.y > consoleHeight)
	{
		xe.diem++;
		vc.td.x = 2 + rand() % (roadWidth - 4);
		vc.td.y = -2;
		
		if (ThoiGianSleep > 39)
			ThoiGianSleep -= 20;
	}

	// xu li tinh huong va cham
	int dX = abs (xe.td.x - vc.td.x);
	int dY = abs (xe.td.y - vc.td.y);

	if (dX < 3 && dY < 3)
	{
		return -1;
	}


	return 0;
}

