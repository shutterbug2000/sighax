// Automatically generated by CreateModulusHeader.py.
#pragma once

// Public exponent.
const unsigned long s_publicExponent = 65537;

// Modulus.
const char s_modulus[] =
	"C0C6E3B52B1EBA2233CA36F0AA3FE3EF69AC8191CB71FA20798E15F88F8725AD"
	"92F200D9128B35BEE7A989448C794B929A76DA20B0EE4596C01F51C618F4DA71"
	"BB0209FE5577599C68AA6D9A8DF93A921B7F9B9F4B318917225F29EEE3A8A018"
	"B33B8822057A324F56037FC90FCC68D0C6E753BE48F5189464E0AC91CAFF9510"
	"1BA52A73AC196862DEA7701FD00C071EB176F3E6436531B5CFAC0594D40F3B9C"
	"BC0F10E30DA06484692A382F3B70135BFB9C37FEB3CB27AC291D4694442AD351"
	"E2C3CDE94C21CDE9BB0BB8850CA67F5F9DC930425CAB834471AEB418EAF9EE52"
	"EE86249270220AECDFBF3978F0FB024C89555E0EB66FA9A067B1DE847CE2200B";

// The 65537th root of s_multiplier.
const char s_root[] =
	"4D454F574D454F574D454F574D454F574D454F574D454F574D454F574D454F57"
	"4D454F574D454F574D454F574D454F574D454F574D454F574D454F574D454F57"
	"4D454F574D454F574D454F574D454F574D454F574D454F574D454F574D454F57"
	"4D454F574D454F574D454F574D454F574D454F574D454F574D454F574D454F57"
	"4D454F574D454F574D454F574D454F574D454F574D454F574D454F574D454F57"
	"4D454F574D454F574D454F574D454F574D454F574D454F574D454F574D454F57"
	"4D454F574D454F574D454F574D454F574D454F574D454F574D454F574D454F57"
	"4D454F574D454F574D454F574D454F574D454F574D454F574D454F574D454F57";

// s_root to the 65537th power.
const char s_multiplier[] =
	"67B68A6C2BF5485E6288C4038BA2C180876FAB0840A3AE8D8A2184AF7083A41D"
	"3D74399A0229AA2F9DA47DD0438F21F94ABA323FA26973D66CCDEFD490BA44AA"
	"B2BD4AA61572F4B960FE4E2A223FFE5FD1B6B81CA4FE6E60114124CC96EA6ADD"
	"2C1C584646A1BA9C77A0BAD74ACCFD2F15D392EEBC8B59164F49E2AD22A77581"
	"B818D50F6CFC9FF9F1A4395780F8C897454D47BE1D57E29058A7555CB06C2A04"
	"CADE42BC18EF7CFE0DD60253126B38FCDEAD817AFE4D7775035D6B0E5C8D039F"
	"2FC8676609387029D24E09968770830373D761630993F3519A82E85CC1E7CA56"
	"F8F13DB996CFD209E7D10DE300978FF902428ED8A783BFA45EA5F48EBDFBF301";

// s_multiplier in Montgomery form (i.e., times R).
const char s_multiplierMontgomery[] =
	"0CB981EFDF355DE1BA491B4B3DD1002791B48442294FFF111F505773831A6E65"
	"6187DC13F6F88B004637249512B4C015BC5425E495744F52A449C04BEFF00911"
	"DB038E02F336E297A4F7EB6DBD46C1C149B3E80324CB3935B6D9E6EA8AEBDE3F"
	"7891952C6A0D8190A5503185D8C387503BBD36BC4950EBA1CFE28B4C15D10422"
	"998FF1F05E2841FE680F2F2EB61BB19BFB8C97463CB5626D8A55398667EFC4B9"
	"B52BE9B9C1CB210F9E1FB3D72C97CBEA362E0F3925C37A1BB1B00E5C3712125B"
	"F552D22667C812AAE131CEDB2B676E1A58996A1E0A89F91066D4BBBFF3243EE7"
	"276D26C47307C22FF04C26410EDCA3C651CCD3F403AA23C966E4C6D6BFACD506";

// The 32-bit parts of s_modulus, least-significant first.
#define MODULUS_WORD_00 "0x7CE2200BU"
#define MODULUS_WORD_01 "0x67B1DE84U"
#define MODULUS_WORD_02 "0xB66FA9A0U"
#define MODULUS_WORD_03 "0x89555E0EU"
#define MODULUS_WORD_04 "0xF0FB024CU"
#define MODULUS_WORD_05 "0xDFBF3978U"
#define MODULUS_WORD_06 "0x70220AECU"
#define MODULUS_WORD_07 "0xEE862492U"
#define MODULUS_WORD_08 "0xEAF9EE52U"
#define MODULUS_WORD_09 "0x71AEB418U"
#define MODULUS_WORD_10 "0x5CAB8344U"
#define MODULUS_WORD_11 "0x9DC93042U"
#define MODULUS_WORD_12 "0x0CA67F5FU"
#define MODULUS_WORD_13 "0xBB0BB885U"
#define MODULUS_WORD_14 "0x4C21CDE9U"
#define MODULUS_WORD_15 "0xE2C3CDE9U"
#define MODULUS_WORD_16 "0x442AD351U"
#define MODULUS_WORD_17 "0x291D4694U"
#define MODULUS_WORD_18 "0xB3CB27ACU"
#define MODULUS_WORD_19 "0xFB9C37FEU"
#define MODULUS_WORD_20 "0x3B70135BU"
#define MODULUS_WORD_21 "0x692A382FU"
#define MODULUS_WORD_22 "0x0DA06484U"
#define MODULUS_WORD_23 "0xBC0F10E3U"
#define MODULUS_WORD_24 "0xD40F3B9CU"
#define MODULUS_WORD_25 "0xCFAC0594U"
#define MODULUS_WORD_26 "0x436531B5U"
#define MODULUS_WORD_27 "0xB176F3E6U"
#define MODULUS_WORD_28 "0xD00C071EU"
#define MODULUS_WORD_29 "0xDEA7701FU"
#define MODULUS_WORD_30 "0xAC196862U"
#define MODULUS_WORD_31 "0x1BA52A73U"
#define MODULUS_WORD_32 "0xCAFF9510U"
#define MODULUS_WORD_33 "0x64E0AC91U"
#define MODULUS_WORD_34 "0x48F51894U"
#define MODULUS_WORD_35 "0xC6E753BEU"
#define MODULUS_WORD_36 "0x0FCC68D0U"
#define MODULUS_WORD_37 "0x56037FC9U"
#define MODULUS_WORD_38 "0x057A324FU"
#define MODULUS_WORD_39 "0xB33B8822U"
#define MODULUS_WORD_40 "0xE3A8A018U"
#define MODULUS_WORD_41 "0x225F29EEU"
#define MODULUS_WORD_42 "0x4B318917U"
#define MODULUS_WORD_43 "0x1B7F9B9FU"
#define MODULUS_WORD_44 "0x8DF93A92U"
#define MODULUS_WORD_45 "0x68AA6D9AU"
#define MODULUS_WORD_46 "0x5577599CU"
#define MODULUS_WORD_47 "0xBB0209FEU"
#define MODULUS_WORD_48 "0x18F4DA71U"
#define MODULUS_WORD_49 "0xC01F51C6U"
#define MODULUS_WORD_50 "0xB0EE4596U"
#define MODULUS_WORD_51 "0x9A76DA20U"
#define MODULUS_WORD_52 "0x8C794B92U"
#define MODULUS_WORD_53 "0xE7A98944U"
#define MODULUS_WORD_54 "0x128B35BEU"
#define MODULUS_WORD_55 "0x92F200D9U"
#define MODULUS_WORD_56 "0x8F8725ADU"
#define MODULUS_WORD_57 "0x798E15F8U"
#define MODULUS_WORD_58 "0xCB71FA20U"
#define MODULUS_WORD_59 "0x69AC8191U"
#define MODULUS_WORD_60 "0xAA3FE3EFU"
#define MODULUS_WORD_61 "0x33CA36F0U"
#define MODULUS_WORD_62 "0x2B1EBA22U"
#define MODULUS_WORD_63 "0xC0C6E3B5U"

// The low 32 bits of R - (modulus^-1) mod R.
#define MODULUS_INVERSE_LOW "0x667C945D"

// The 32-bit parts of s_multiplierMontgomery, least-significant first.
#define MULTIPLIER_WORD_00 "0xBFACD506U"
#define MULTIPLIER_WORD_01 "0x66E4C6D6U"
#define MULTIPLIER_WORD_02 "0x03AA23C9U"
#define MULTIPLIER_WORD_03 "0x51CCD3F4U"
#define MULTIPLIER_WORD_04 "0x0EDCA3C6U"
#define MULTIPLIER_WORD_05 "0xF04C2641U"
#define MULTIPLIER_WORD_06 "0x7307C22FU"
#define MULTIPLIER_WORD_07 "0x276D26C4U"
#define MULTIPLIER_WORD_08 "0xF3243EE7U"
#define MULTIPLIER_WORD_09 "0x66D4BBBFU"
#define MULTIPLIER_WORD_10 "0x0A89F910U"
#define MULTIPLIER_WORD_11 "0x58996A1EU"
#define MULTIPLIER_WORD_12 "0x2B676E1AU"
#define MULTIPLIER_WORD_13 "0xE131CEDBU"
#define MULTIPLIER_WORD_14 "0x67C812AAU"
#define MULTIPLIER_WORD_15 "0xF552D226U"
#define MULTIPLIER_WORD_16 "0x3712125BU"
#define MULTIPLIER_WORD_17 "0xB1B00E5CU"
#define MULTIPLIER_WORD_18 "0x25C37A1BU"
#define MULTIPLIER_WORD_19 "0x362E0F39U"
#define MULTIPLIER_WORD_20 "0x2C97CBEAU"
#define MULTIPLIER_WORD_21 "0x9E1FB3D7U"
#define MULTIPLIER_WORD_22 "0xC1CB210FU"
#define MULTIPLIER_WORD_23 "0xB52BE9B9U"
#define MULTIPLIER_WORD_24 "0x67EFC4B9U"
#define MULTIPLIER_WORD_25 "0x8A553986U"
#define MULTIPLIER_WORD_26 "0x3CB5626DU"
#define MULTIPLIER_WORD_27 "0xFB8C9746U"
#define MULTIPLIER_WORD_28 "0xB61BB19BU"
#define MULTIPLIER_WORD_29 "0x680F2F2EU"
#define MULTIPLIER_WORD_30 "0x5E2841FEU"
#define MULTIPLIER_WORD_31 "0x998FF1F0U"
#define MULTIPLIER_WORD_32 "0x15D10422U"
#define MULTIPLIER_WORD_33 "0xCFE28B4CU"
#define MULTIPLIER_WORD_34 "0x4950EBA1U"
#define MULTIPLIER_WORD_35 "0x3BBD36BCU"
#define MULTIPLIER_WORD_36 "0xD8C38750U"
#define MULTIPLIER_WORD_37 "0xA5503185U"
#define MULTIPLIER_WORD_38 "0x6A0D8190U"
#define MULTIPLIER_WORD_39 "0x7891952CU"
#define MULTIPLIER_WORD_40 "0x8AEBDE3FU"
#define MULTIPLIER_WORD_41 "0xB6D9E6EAU"
#define MULTIPLIER_WORD_42 "0x24CB3935U"
#define MULTIPLIER_WORD_43 "0x49B3E803U"
#define MULTIPLIER_WORD_44 "0xBD46C1C1U"
#define MULTIPLIER_WORD_45 "0xA4F7EB6DU"
#define MULTIPLIER_WORD_46 "0xF336E297U"
#define MULTIPLIER_WORD_47 "0xDB038E02U"
#define MULTIPLIER_WORD_48 "0xEFF00911U"
#define MULTIPLIER_WORD_49 "0xA449C04BU"
#define MULTIPLIER_WORD_50 "0x95744F52U"
#define MULTIPLIER_WORD_51 "0xBC5425E4U"
#define MULTIPLIER_WORD_52 "0x12B4C015U"
#define MULTIPLIER_WORD_53 "0x46372495U"
#define MULTIPLIER_WORD_54 "0xF6F88B00U"
#define MULTIPLIER_WORD_55 "0x6187DC13U"
#define MULTIPLIER_WORD_56 "0x831A6E65U"
#define MULTIPLIER_WORD_57 "0x1F505773U"
#define MULTIPLIER_WORD_58 "0x294FFF11U"
#define MULTIPLIER_WORD_59 "0x91B48442U"
#define MULTIPLIER_WORD_60 "0x3DD10027U"
#define MULTIPLIER_WORD_61 "0xBA491B4BU"
#define MULTIPLIER_WORD_62 "0xDF355DE1U"
#define MULTIPLIER_WORD_63 "0x0CB981EFU"
