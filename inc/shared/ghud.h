
#ifndef MAX_GHUDS
#define MAX_GHUDS	64

#define GHT_IMG		0
#define GHT_FILL	1
#define GHT_TEXT	2
#define GHT_NUM		3

#define GHF_INUSE	0x0001
#define GHF_LERP	0x0002	// reserved, not added yet
#define GHF_BLINK	0x0004
#define GHF_3DPOS	0x0008
#define GHF_HIDE	0x0010

#define GHU_TYPE	0x0001
#define GHU_FLAGS	0x0002
#define GHU_TEXT	0x0004
#define GHU_INT		0x0008
#define GHU_POS		0x0010
#define GHU_COLOR	0x0020
#define GHU_SIZE	0x0040
#define GHU_FORCE	0x1000

typedef struct
{
	byte	type;

	short	flags;
	char	text[MAX_QPATH];
	int		val;
	short	pos[3];
	float	anchor[2];
	short	size[2];
	byte	color[4];
} ghud_element_t;


typedef struct ghud_3delement_s
{
	ghud_element_t *element;
	float			distance;
	struct ghud_3delement_s *next;
} ghud_3delement_t;
#endif


