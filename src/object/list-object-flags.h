/*
 * File: src/object/list-object-flags.h
 * Purpose: object flags for all objects
 *
 * Changing flag order will break savefiles. There is a hard-coded limit of
 * 256 flags, due to 32 bytes of storage for item flags in the savefile. Flags
 * below start from 0 on line 21, so a flag's sequence number is its line
 * number minus 21.
 * 
 * index: the flag number
 * pval: is it a quantitative flag? FALSE means it's just on/off
 * timed: what is the corresponding TMD_ flag
 * id: when the flag is IDd
 * type: what type of flag is it?
 * power: base power rating for the flag (0 means it is unused or derived)
 * pval_mult: weight of this flag relative to other pval flags
 * wpn/bow/ring/amu/light/body/cloak/shield/hat/gloves/boots: power multiplier for this slot
 * message: what is printed when the flag is IDd (but see also identify.c and list-slays.h)
 */
/* index       	pval	timed			id			type		power	p_m	wpn	bow	ring	amu	light	body	cloak	shield	hat	gloves	boots	message */
OF(NONE,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"")
OF(STR,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	9,		13,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"")
OF(INT,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	5,		10,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"")
OF(WIS,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	5,		10,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"")
OF(DEX,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	8,		10,	1,	1,	1,		1,	1,		1,		1,		1,		1,	2,		1,		"")
OF(CON,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	12,		15,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"")
OF(CHR,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	2,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"")
OF(XXX1,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"")
OF(XXX2,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"")
OF(STEALTH,     TRUE,	0,				OFID_WIELD,	OFT_PVAL,	8,		12,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(SEARCH,      TRUE,	0,				OFID_WIELD,	OFT_PVAL,	2,		5,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(INFRA,       TRUE,	TMD_SINFRA,		OFID_WIELD,	OFT_PVAL,	4,		8,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"")
OF(TUNNEL,      TRUE,	0,				OFID_WIELD,	OFT_PVAL,	3,		8,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"")
OF(SPEED,       TRUE,	TMD_FAST,		OFID_WIELD,	OFT_PVAL,	20,		6,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"")
OF(BLOWS,       TRUE,	0,				OFID_WIELD,	OFT_PVAL,	0,		50,	1,	0,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(SHOTS,       TRUE,	0,				OFID_WIELD,	OFT_PVAL,	0,		50,	0,	1,	4,		4,	4,		4,		4,		4,		4,	4,		4,		"")
OF(MIGHT,       TRUE,	0,				OFID_WIELD,	OFT_PVAL,	0,		30,	0,	1,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"")
OF(SLAY_ANIMAL, FALSE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(SLAY_EVIL,   FALSE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(SLAY_UNDEAD, FALSE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(SLAY_DEMON,  FALSE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(SLAY_ORC,    FALSE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(SLAY_TROLL,  FALSE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(SLAY_GIANT,  FALSE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(SLAY_DRAGON, FALSE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(KILL_DRAGON, FALSE,	0,				OFID_NORMAL,OFT_KILL,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(KILL_DEMON,  FALSE,	0,				OFID_NORMAL,OFT_KILL,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(KILL_UNDEAD, FALSE,	0,				OFID_NORMAL,OFT_KILL,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(BRAND_POIS,  FALSE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(BRAND_ACID,  FALSE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(BRAND_ELEC,  FALSE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(BRAND_FIRE,  FALSE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(BRAND_COLD,  FALSE,	0,				OFID_WIELD, OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(SUST_STR,    FALSE,	0,				OFID_NORMAL,OFT_SUST,	9,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(SUST_INT,    FALSE,	0,				OFID_NORMAL,OFT_SUST,	4,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(SUST_WIS,    FALSE,	0,				OFID_NORMAL,OFT_SUST,	4,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(SUST_DEX,    FALSE,	0,				OFID_NORMAL,OFT_SUST,	7,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(SUST_CON,    FALSE, 	0,				OFID_NORMAL,OFT_SUST,	8,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(SUST_CHR,    FALSE,	0,				OFID_NORMAL,OFT_SUST,	1,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(VULN_ACID,   FALSE, 	0,				OFID_NORMAL,OFT_VULN,	-6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(VULN_ELEC,   FALSE,	0,				OFID_NORMAL,OFT_VULN,	-6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(VULN_FIRE,   FALSE,	0,				OFID_NORMAL,OFT_VULN,	-6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(VULN_COLD,   FALSE,	0,				OFID_NORMAL,OFT_VULN,	-6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(XXX3,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"Your %s glows.")
OF(XXX4,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"Your %s glows.")
OF(IM_ACID,     FALSE, 	0,				OFID_NORMAL,OFT_IMM,	38,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(IM_ELEC,     FALSE,	0,				OFID_NORMAL,OFT_IMM,	35,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(IM_FIRE,     FALSE,	0,				OFID_NORMAL,OFT_IMM,	40,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(IM_COLD,     FALSE,	0,				OFID_NORMAL,OFT_IMM,	37,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(RES_ACID,    FALSE,	TMD_OPP_ACID,	OFID_NORMAL,OFT_LRES,	5,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(RES_ELEC,    FALSE,	TMD_OPP_ELEC,	OFID_NORMAL,OFT_LRES,	6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(RES_FIRE,    FALSE,	TMD_OPP_FIRE,	OFID_NORMAL,OFT_LRES,	6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(RES_COLD,    FALSE,	TMD_OPP_COLD,	OFID_NORMAL,OFT_LRES,	6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"Your %s glows.")
OF(RES_POIS,    FALSE,	TMD_OPP_POIS,	OFID_NORMAL,OFT_HRES,	28,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_FEAR,    FALSE,	TMD_BOLD,		OFID_NORMAL,OFT_PROT,	6,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_LIGHT,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	6,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_DARK,    FALSE,	0,				OFID_NORMAL,OFT_HRES,	16,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_BLIND,   FALSE,	0,				OFID_NORMAL,OFT_PROT,	16,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_CONFU,   FALSE,	TMD_OPP_CONF,	OFID_NORMAL,OFT_PROT,	24,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_SOUND,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	14,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_SHARD,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	8,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_NEXUS,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	15,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_NETHR,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	20,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_CHAOS,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	20,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(RES_DISEN,   FALSE, 	0,				OFID_NORMAL,OFT_HRES,	20,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(SLOW_DIGEST, FALSE,	0,				OFID_TIMED,	OFT_MISC,	2,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"You feel your %s slow your metabolism.")
OF(FEATHER,     FALSE,	0,				OFID_NORMAL,OFT_MISC,	1,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s slows your fall.")
OF(LIGHT,       TRUE,	0,				OFID_WIELD,	OFT_PVAL,	3,		0,	1,  1,  1,      1,  10,     1,      1,      1,      1,  1,      1,		"")
OF(REGEN,       FALSE,	0,				OFID_TIMED,	OFT_MISC,	5,		0,	1,  1,  2,      2,  2,      2,      2,      2,      2,  2,      2,		"You feel your %s speed up your recovery.")
OF(TELEPATHY,   FALSE,	TMD_TELEPATHY,	OFID_WIELD,	OFT_MISC,	35,		0,	1,	1,	2,		2,	2,		2,		2,		2,		2,	2,		2,		"")
OF(SEE_INVIS,   FALSE,	TMD_SINVIS,		OFID_WIELD,	OFT_MISC,	6,		0,	1,  1,  2,      2,  2,      2,      2,      2,      2,  2,      2,		"")
OF(FREE_ACT,    FALSE,	0,				OFID_NORMAL,OFT_MISC,	8,		0,	1,  1,  2,      2,  2,      2,      2,      2,      2,  5,      2,		"Your %s glows.")
OF(HOLD_LIFE,   FALSE,	0,				OFID_NORMAL,OFT_MISC,	5,		0,	1,  1,  2,      2,  2,      2,      2,      2,      2,  2,      2,		"Your %s glows.")
OF(NO_FUEL,     FALSE,	0,				OFID_WIELD,	OFT_LIGHT,	5,		0,	0,	0,	0,		0,	1,		0,		0,		0,		0,	0,		0,		"")
OF(IMPAIR_HP,   FALSE,	0,				OFID_TIMED,	OFT_BAD,	-9,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"You feel your %s slow your recovery.")
OF(IMPAIR_MANA, FALSE,	0,				OFID_TIMED,	OFT_BAD,	-9,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"You feel your %s slow your mana recovery.")
OF(AFRAID,      FALSE,	TMD_AFRAID,		OFID_WIELD,	OFT_BAD,	-20,	0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"")
OF(IMPACT,      FALSE,	0,				OFID_NORMAL,OFT_MELEE,	10,		0,	1,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"Your %s causes an earthquake!")
OF(TELEPORT,    FALSE,	0,				OFID_NORMAL,OFT_BAD,	-20,	0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s teleports you.")
OF(AGGRAVATE,   FALSE,	0,				OFID_TIMED,	OFT_BAD,	-20,	0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"You feel your %s aggravate things around you.")
OF(DRAIN_EXP,   FALSE,	0,				OFID_TIMED,	OFT_BAD,	-5,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"You feel your %s drain your life.")
OF(IGNORE_ACID, FALSE,	0,				OFID_NORMAL,OFT_IGNORE,	3,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"")
OF(IGNORE_ELEC, FALSE,	0,				OFID_NORMAL,OFT_IGNORE,	1,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"")
OF(IGNORE_FIRE, FALSE,	0,				OFID_NORMAL,OFT_IGNORE,	3,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"")
OF(IGNORE_COLD, FALSE,	0,				OFID_NORMAL,OFT_IGNORE,	1,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"")
OF(RES_STUN,    FALSE,	0,				OFID_NORMAL,OFT_PROT,	12,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"Your %s glows.")
OF(XXX5,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"")
OF(BLESSED,     FALSE,	0,				OFID_WIELD,	OFT_MELEE,	1,		0,	1,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"")
OF(XXX6,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"")
OF(INSTA_ART,   FALSE,	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(EASY_KNOW,   FALSE,	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(XXX7,   		FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(SHOW_MODS,   FALSE,	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(XXX8,        FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(LIGHT_CURSE, FALSE,	0,				OFID_WIELD,	OFT_CURSE,	-5,     0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"")
OF(HEAVY_CURSE, FALSE,	0,				OFID_WIELD,	OFT_CURSE,	-15,    0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"")
OF(PERMA_CURSE, FALSE,	0,				OFID_WIELD,	OFT_CURSE,	-25,    0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"")
OF(HATES_ACID,  FALSE,	0,				OFID_NONE,	OFT_HATES,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(HATES_ELEC,  FALSE,	0,				OFID_NONE,	OFT_HATES,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(HATES_FIRE,  FALSE,	0,				OFID_NONE,	OFT_HATES,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(HATES_COLD,  FALSE,	0,				OFID_NONE,	OFT_HATES,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(SPELLS_OK,   FALSE, 	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(SHOW_DICE,   FALSE,	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(SHOW_MULT,	FALSE,	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
OF(BRAND_ICKY,  FALSE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(BRAND_FIZZ,  FALSE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(BRAND_BUZZ,  FALSE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(BRAND_WARM,  FALSE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(BRAND_COOL,  FALSE,	0,				OFID_WIELD, OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"")
OF(MAX,			FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"")
