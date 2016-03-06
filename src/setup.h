
typedef struct {
	char name[256];
	char help[512];
} PARA_GROUP;

typedef struct {
	char name[256];
	char group[256];
	char arg[128];
	int type;
	int vint;
	float vfloat;
	double vdouble;
	char vstr[PATH_MAX];
	double min;
	double step;
	double max;
	char unit[16];
	int show;
	int inpreset;
	char help[512];
	int readonly;
	int l1;
	int l2;
} PARA;

enum {
	T_INT,
	T_BOOL,
	T_FLOAT,
	T_DOUBLE,
	T_STRING,
	T_SELECT,
	T_FILE
};

enum {
	G_VIEW,
	G_TOOL,
	G_MILLING,
	G_POCKETS,
	G_TABS,
	G_OBJECTS,
	G_TEXT,
	G_ROTARY,
	G_TANGENCIAL,
	G_MACHINE,
	G_MATERIAL,
	G_MISC,
	G_LAST
};

enum {
	// View
	P_V_ZOOM,
	P_V_HELPLINES,
	P_V_GRID,
	P_V_HELPDIA,
	P_V_TEXTURES,
	P_V_ROTX,
	P_V_ROTY,
	P_V_ROTZ,
	P_V_TRANSX,
	P_V_TRANSY,
	P_V_HELP_GRID,
	P_V_HELP_ARROW,
	// Tool
	P_TOOL_SELECT,
	P_TOOL_NUM,
	P_TOOL_DIAMETER,
	P_TOOL_SPEED,
	P_M_COOLANT,
	P_TOOL_KEEPSPIN,
	// Milling
	P_M_FEEDRATE,
	P_M_PLUNGE_SPEED,
	P_M_DEPTH,
	P_M_Z_STEP,
	P_CUT_SAVE,
	P_M_OVERCUT,
	P_M_LASERMODE,
	P_M_CLIMB,
	P_M_NOOFFSET,
	P_M_HELIX,
	P_M_VELOCITYMODE,
	P_M_BLENDINGTOLERANCE,
	P_V_DXF,
	P_MFILE,
	// Pockets
	P_M_POCKET,
	P_M_POCKETSTEP,
	// Holding-Tabs
	P_T_USE,
	P_T_GRID,
	P_T_DEPTH,
	P_T_LEN,
	P_T_TYPE,
	P_T_OPEN,
	P_T_INSIDE,
	P_T_OUTSIDE,
	P_T_XGRID,
	P_T_YGRID,
	// Text
	P_M_TEXT,
	P_M_TEXT_MILL_DEPTH,
	P_M_TEXT_FIXED_WIDTH,
	P_M_TEXT_SCALE_WIDTH,
	P_M_TEXT_SCALE_HEIGHT,
	P_M_TEXT_FONT,
	P_M_TEXT_OVERWRITE,
	P_M_TEXT_TOOL_NUM,
	P_M_TEXT_TOOL_DIAMETER,
	P_M_TEXT_TOOL_SPEED,
	// Machine
	P_H_FEEDRATE_FAST,
	P_TOOL_DELAY,
	P_M_FAST_Z,
	P_H_POST,
	P_POST_CMD,
	// Material
	P_TOOL_W,
	P_MAT_SELECT,
	P_MAT_CUTSPEED,
	P_MAT_FEEDFLUTE4,
	P_MAT_FEEDFLUTE8,
	P_MAT_FEEDFLUTE12,
	P_TOOL_SPEED_MAX,
	P_M_FEEDRATE_MAX,
	// Objects
	P_O_SELECT,
	P_O_USE,
	P_O_FORCE,
	P_O_CLIMB,
	P_O_OFFSET,
	P_O_OVERCUT,
	P_O_POCKET,
	P_O_HELIX,
	P_O_LASER,
	P_O_DEPTH,
	P_O_TABS,
	P_O_ORDER,
	P_O_TOOL_NUM,
	P_O_TOOL_DIAMETER,
	P_O_TOOL_SPEED,
	// Rotary
	P_M_ROTARYMODE,
	P_H_ROTARYAXIS,
	P_MAT_DIAMETER,
	// Tangencial
	P_M_KNIFEMODE,
	P_H_KNIFEAXIS,
	P_H_KNIFEMAXANGLE,
	// Window
	P_W_POSX,
	P_W_POSY,
	P_W_POSW,
	P_W_POSH,
	P_W_MAX,
	// Misc
	P_O_UNIT,
	P_O_TOLERANCE,
	P_TOOL_TABLE,
	P_O_PARAVIEW,
	P_O_AUTOSAVE,
	P_O_BATCHMODE,
	P_M_LOADPATH,
	P_M_SAVEPATH,
	P_M_PRESETPATH,
	P_M_DELETE_DOUBLE,
	P_M_ZERO,
	P_M_ZERO_X,
	P_M_ZERO_Y,
	P_M_APPEND_CONFIG,
	P_MAT_TEXTURE,
	P_M_NCDEBUG,
#ifdef USE_VNC
	P_O_VNCSERVER,
	P_O_VNCPORT,
#endif
	P_LAST
};

extern PARA PARAMETER[];
extern PARA_GROUP GROUPS[];

void SetupShow (void);
void SetupShowGcode (FILE *out);
void SetupShowHelp (void);
void SetupSave (void);
void SetupLoad (void);
int SetupArgCheck (char *arg, char *arg2);
void SetupSavePreset (char *cfgfile);
void SetupLoadPreset (char *cfgfile);


