
int main(int argc, char **argv)

{
	byte bVar1;
	uint uVar2;
	byte *pbVar3;
	byte bVar4;
	byte local_78[100];
	uint local_14;

	bVar4 = 0;
	local_14 = 0;
	fgets((char *)local_78, 100, stdin);
	local_14 = 0;
	do
	{
		uVar2 = 0xffffffff;
		pbVar3 = local_78;
		do
		{
			if (uVar2 == 0)
				break;
			uVar2 = uVar2 - 1;
			bVar1 = *pbVar3;
			pbVar3 = pbVar3 + (uint)bVar4 * -2 + 1;
		} while (bVar1 != 0);
		if (~uVar2 - 1 <= local_14)
		{
			printf((char *)local_78);
			/* WARNING: Subroutine does not return */
			exit(0);
		}
		if (('@' < (char)local_78[local_14]) && ((char)local_78[local_14] < '['))
		{
			local_78[local_14] = local_78[local_14] ^ 0x20;
		}
		local_14 = local_14 + 1;
	} while (true);
}
