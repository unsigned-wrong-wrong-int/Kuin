#include "../../common.h"

const U8* GetObjOutlinePsBin(size_t* size)
{
	static const U8 obj_outline_ps_bin[0x00000268] =
	{
		0x44, 0x58, 0x42, 0x43, 0x2E, 0x5B, 0xC6, 0xA3, 0x4A, 0x65, 0x3D, 0xB4, 0x38, 0xED, 0x48, 0x00, 0x27, 0x30, 0x86, 0xCC, 0x01, 0x00, 0x00, 0x00, 0x68, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
		0x34, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x3C, 0x01, 0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0xEC, 0x01, 0x00, 0x00, 0x52, 0x44, 0x45, 0x46, 0xCC, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
		0x48, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x04, 0xFF, 0xFF, 0x00, 0x01, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x43, 0x6F, 0x6E, 0x73, 0x74, 0x42, 0x75, 0x66,
		0x00, 0xAB, 0xAB, 0xAB, 0x3C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x75, 0x74, 0x6C, 0x69, 0x6E, 0x65, 0x43, 0x6F, 0x6C, 0x6F, 0x72,
		0x00, 0xAB, 0xAB, 0xAB, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4D, 0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0x20, 0x28, 0x52,
		0x29, 0x20, 0x48, 0x4C, 0x53, 0x4C, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6F, 0x6D, 0x70, 0x69, 0x6C, 0x65, 0x72, 0x20, 0x36, 0x2E, 0x33, 0x2E, 0x39, 0x36, 0x30, 0x30, 0x2E,
		0x31, 0x36, 0x33, 0x38, 0x34, 0x00, 0xAB, 0xAB, 0x49, 0x53, 0x47, 0x4E, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x50, 0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 0x00, 0x4F, 0x53, 0x47, 0x4E,
		0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0F, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xAB, 0xAB, 0x53, 0x48, 0x44, 0x52, 0x74, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x00, 0x00,
		0x59, 0x00, 0x00, 0x04, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02,
		0x01, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x0A, 0xD7, 0xA3, 0x3C, 0x3A, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x04, 0x03, 0x0A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x01, 0x53, 0x54, 0x41, 0x54, 0x74, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	};

	*size = 0x00000268;
	return obj_outline_ps_bin;
}
