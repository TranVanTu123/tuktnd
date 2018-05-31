
void HienThi (Xe xe, VatCan vc)
{
    
	// hien thi bien
	
	
	
	
	for (int i = 0; i < consoleHeight; i++)
	{
	VeMotO(i , 0,179);
	VeMotO(i, roadWidth,179);
	}
	// hien thi xe
	
    TextColor(ColorCode_Cyan);
	for (int kDong = -1; kDong <= 1; kDong++)
		for (int kCot = -1; kCot <= 1; kCot++)
		{
			int x = kCot + xe.td.x;
			int y = kDong + xe.td.y;
             
		//	gotoXY(x,y);
		//putchar (xe.hd.a[kDong+1][kCot+1];   // a[0][0] -->a[2][2]
		VeMotO(y,x,xe.hd.a[kDong+1][kCot+1]);
		}


	// hien thi vat can
	 
		
	for (int kDong = -1; kDong <= 1; kDong++)
	
		for (int kCot = -1; kCot <= 1; kCot++)
		{
			
			int x = kCot + vc.td.x;
			int y = kDong + vc.td.y;

			if (y >= 0 && y < consoleHeight)
			{
				
				//gotoXY(x,y);
				//putchar (vc.hd.a[kDong+1][kCot+1]);     //a[0][0]-->a[2][2]
				VeMotO(y,x,vc.hd.a[kDong+1][kCot+1]);
				
			}
		}
// hien thi trang thai game
gotoXY(roadWidth+2,10);
printf("Diem=%d", xe.diem);

gotoXY(0,0);
//tu to giay nhap in ra man hinh
for(int i=0;i < consoleHeight;i++)
{
	for(int j=0;j<=roadWidth;j++)
	{
		//TextColor (buffer[i][j].mau);
		putchar  (buffer[i][j].kitu);
		buffer[i][j].kitu=' ';
		// reset lai to giay nhap.
	}
	if(i<consoleHeight-1)
	putchar('\n');
}
//hien thi trang thai game
gotoXY(roadWidth+2,10);
printf("Diem=%d", xe.diem);

}
	
