
struct MotO	
{
    char kitu;
	int mau;
};


MotO buffer[consoleHeight][roadWidth+1];

void VeMotO (int dong, int cot, int kitu, int mau=7)
{
	buffer[dong][cot].kitu = kitu;
	buffer[dong][cot].mau = mau;
}

//-----------------------------------------------------


struct ToaDo
{
	int y, x;	// y la tung do,x la hoanh do
};


struct HinhDang
{
	char a[3][3];
};


struct Xe
{
	ToaDo td;	// toa do tai vi tri hd.a[1][1]
	HinhDang hd;
	int diem;
};


struct VatCan
{
	ToaDo td;
	HinhDang hd;
};


void KhoiTao (Xe &xe, VatCan &vc)
{
	//------ Xe
#define pHD xe.hd.a

	xe.diem = 0;
	xe.td.y = consoleHeight - 2;
	xe.td.x = roadWidth / 2;

	pHD[0][0] = pHD[0][2] = pHD[2][0] = pHD[2][2] = 'o';	// banh xe
	pHD[0][1] = '^';	// dau xe
	pHD[1][0] = pHD[1][2] = '|';	// than xe
	pHD[2][1] = '-';
	pHD[1][1] = ' ';


	//---------vat can

	vc.td.x = 2 + rand() % (roadWidth - 4);
	vc.td.y = -2;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			vc.hd.a[i][j] = 173;


	//---------- buffer
	for (int i = 0; i < consoleHeight; i++)
		for (int j = 0; j < roadWidth; j++)
			{
				
				buffer[i][j].kitu=' ';
				buffer[i][j].mau=7;
			}
}




