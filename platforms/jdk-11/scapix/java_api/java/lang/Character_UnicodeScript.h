// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODESCRIPT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODESCRIPT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Character_UnicodeScript; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Character_UnicodeScript>
{
	static constexpr fixed_string class_name = "java/lang/Character$UnicodeScript";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODESCRIPT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODESCRIPT)
#define SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODESCRIPT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Character_UnicodeScript : public jni::object_base<"java/lang/Character$UnicodeScript",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::Character_UnicodeScript> COMMON() { return get_static_field<"COMMON", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> LATIN() { return get_static_field<"LATIN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> GREEK() { return get_static_field<"GREEK", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> CYRILLIC() { return get_static_field<"CYRILLIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> ARMENIAN() { return get_static_field<"ARMENIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> HEBREW() { return get_static_field<"HEBREW", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> ARABIC() { return get_static_field<"ARABIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SYRIAC() { return get_static_field<"SYRIAC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> THAANA() { return get_static_field<"THAANA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> DEVANAGARI() { return get_static_field<"DEVANAGARI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BENGALI() { return get_static_field<"BENGALI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> GURMUKHI() { return get_static_field<"GURMUKHI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> GUJARATI() { return get_static_field<"GUJARATI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> ORIYA() { return get_static_field<"ORIYA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TAMIL() { return get_static_field<"TAMIL", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TELUGU() { return get_static_field<"TELUGU", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> KANNADA() { return get_static_field<"KANNADA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MALAYALAM() { return get_static_field<"MALAYALAM", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SINHALA() { return get_static_field<"SINHALA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> THAI() { return get_static_field<"THAI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> LAO() { return get_static_field<"LAO", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TIBETAN() { return get_static_field<"TIBETAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MYANMAR() { return get_static_field<"MYANMAR", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> GEORGIAN() { return get_static_field<"GEORGIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> HANGUL() { return get_static_field<"HANGUL", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> ETHIOPIC() { return get_static_field<"ETHIOPIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> CHEROKEE() { return get_static_field<"CHEROKEE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> CANADIAN_ABORIGINAL() { return get_static_field<"CANADIAN_ABORIGINAL", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OGHAM() { return get_static_field<"OGHAM", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> RUNIC() { return get_static_field<"RUNIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> KHMER() { return get_static_field<"KHMER", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MONGOLIAN() { return get_static_field<"MONGOLIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> HIRAGANA() { return get_static_field<"HIRAGANA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> KATAKANA() { return get_static_field<"KATAKANA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BOPOMOFO() { return get_static_field<"BOPOMOFO", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> HAN() { return get_static_field<"HAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> YI() { return get_static_field<"YI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OLD_ITALIC() { return get_static_field<"OLD_ITALIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> GOTHIC() { return get_static_field<"GOTHIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> DESERET() { return get_static_field<"DESERET", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> INHERITED() { return get_static_field<"INHERITED", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TAGALOG() { return get_static_field<"TAGALOG", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> HANUNOO() { return get_static_field<"HANUNOO", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BUHID() { return get_static_field<"BUHID", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TAGBANWA() { return get_static_field<"TAGBANWA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> LIMBU() { return get_static_field<"LIMBU", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TAI_LE() { return get_static_field<"TAI_LE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> LINEAR_B() { return get_static_field<"LINEAR_B", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> UGARITIC() { return get_static_field<"UGARITIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SHAVIAN() { return get_static_field<"SHAVIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OSMANYA() { return get_static_field<"OSMANYA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> CYPRIOT() { return get_static_field<"CYPRIOT", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BRAILLE() { return get_static_field<"BRAILLE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BUGINESE() { return get_static_field<"BUGINESE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> COPTIC() { return get_static_field<"COPTIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> NEW_TAI_LUE() { return get_static_field<"NEW_TAI_LUE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> GLAGOLITIC() { return get_static_field<"GLAGOLITIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TIFINAGH() { return get_static_field<"TIFINAGH", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SYLOTI_NAGRI() { return get_static_field<"SYLOTI_NAGRI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OLD_PERSIAN() { return get_static_field<"OLD_PERSIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> KHAROSHTHI() { return get_static_field<"KHAROSHTHI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BALINESE() { return get_static_field<"BALINESE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> CUNEIFORM() { return get_static_field<"CUNEIFORM", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> PHOENICIAN() { return get_static_field<"PHOENICIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> PHAGS_PA() { return get_static_field<"PHAGS_PA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> NKO() { return get_static_field<"NKO", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SUNDANESE() { return get_static_field<"SUNDANESE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BATAK() { return get_static_field<"BATAK", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> LEPCHA() { return get_static_field<"LEPCHA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OL_CHIKI() { return get_static_field<"OL_CHIKI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> VAI() { return get_static_field<"VAI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SAURASHTRA() { return get_static_field<"SAURASHTRA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> KAYAH_LI() { return get_static_field<"KAYAH_LI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> REJANG() { return get_static_field<"REJANG", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> LYCIAN() { return get_static_field<"LYCIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> CARIAN() { return get_static_field<"CARIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> LYDIAN() { return get_static_field<"LYDIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> CHAM() { return get_static_field<"CHAM", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TAI_THAM() { return get_static_field<"TAI_THAM", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TAI_VIET() { return get_static_field<"TAI_VIET", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> AVESTAN() { return get_static_field<"AVESTAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> EGYPTIAN_HIEROGLYPHS() { return get_static_field<"EGYPTIAN_HIEROGLYPHS", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SAMARITAN() { return get_static_field<"SAMARITAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MANDAIC() { return get_static_field<"MANDAIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> LISU() { return get_static_field<"LISU", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BAMUM() { return get_static_field<"BAMUM", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> JAVANESE() { return get_static_field<"JAVANESE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MEETEI_MAYEK() { return get_static_field<"MEETEI_MAYEK", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> IMPERIAL_ARAMAIC() { return get_static_field<"IMPERIAL_ARAMAIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OLD_SOUTH_ARABIAN() { return get_static_field<"OLD_SOUTH_ARABIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> INSCRIPTIONAL_PARTHIAN() { return get_static_field<"INSCRIPTIONAL_PARTHIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> INSCRIPTIONAL_PAHLAVI() { return get_static_field<"INSCRIPTIONAL_PAHLAVI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OLD_TURKIC() { return get_static_field<"OLD_TURKIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BRAHMI() { return get_static_field<"BRAHMI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> KAITHI() { return get_static_field<"KAITHI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MEROITIC_HIEROGLYPHS() { return get_static_field<"MEROITIC_HIEROGLYPHS", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MEROITIC_CURSIVE() { return get_static_field<"MEROITIC_CURSIVE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SORA_SOMPENG() { return get_static_field<"SORA_SOMPENG", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> CHAKMA() { return get_static_field<"CHAKMA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SHARADA() { return get_static_field<"SHARADA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TAKRI() { return get_static_field<"TAKRI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MIAO() { return get_static_field<"MIAO", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> CAUCASIAN_ALBANIAN() { return get_static_field<"CAUCASIAN_ALBANIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BASSA_VAH() { return get_static_field<"BASSA_VAH", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> DUPLOYAN() { return get_static_field<"DUPLOYAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> ELBASAN() { return get_static_field<"ELBASAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> GRANTHA() { return get_static_field<"GRANTHA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> PAHAWH_HMONG() { return get_static_field<"PAHAWH_HMONG", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> KHOJKI() { return get_static_field<"KHOJKI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> LINEAR_A() { return get_static_field<"LINEAR_A", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MAHAJANI() { return get_static_field<"MAHAJANI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MANICHAEAN() { return get_static_field<"MANICHAEAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MENDE_KIKAKUI() { return get_static_field<"MENDE_KIKAKUI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MODI() { return get_static_field<"MODI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MRO() { return get_static_field<"MRO", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OLD_NORTH_ARABIAN() { return get_static_field<"OLD_NORTH_ARABIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> NABATAEAN() { return get_static_field<"NABATAEAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> PALMYRENE() { return get_static_field<"PALMYRENE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> PAU_CIN_HAU() { return get_static_field<"PAU_CIN_HAU", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OLD_PERMIC() { return get_static_field<"OLD_PERMIC", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> PSALTER_PAHLAVI() { return get_static_field<"PSALTER_PAHLAVI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SIDDHAM() { return get_static_field<"SIDDHAM", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> KHUDAWADI() { return get_static_field<"KHUDAWADI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TIRHUTA() { return get_static_field<"TIRHUTA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> WARANG_CITI() { return get_static_field<"WARANG_CITI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> AHOM() { return get_static_field<"AHOM", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> ANATOLIAN_HIEROGLYPHS() { return get_static_field<"ANATOLIAN_HIEROGLYPHS", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> HATRAN() { return get_static_field<"HATRAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MULTANI() { return get_static_field<"MULTANI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OLD_HUNGARIAN() { return get_static_field<"OLD_HUNGARIAN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SIGNWRITING() { return get_static_field<"SIGNWRITING", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> ADLAM() { return get_static_field<"ADLAM", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> BHAIKSUKI() { return get_static_field<"BHAIKSUKI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MARCHEN() { return get_static_field<"MARCHEN", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> NEWA() { return get_static_field<"NEWA", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> OSAGE() { return get_static_field<"OSAGE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> TANGUT() { return get_static_field<"TANGUT", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> MASARAM_GONDI() { return get_static_field<"MASARAM_GONDI", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> NUSHU() { return get_static_field<"NUSHU", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> SOYOMBO() { return get_static_field<"SOYOMBO", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> ZANABAZAR_SQUARE() { return get_static_field<"ZANABAZAR_SQUARE", jni::ref<java::lang::Character_UnicodeScript>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> UNKNOWN() { return get_static_field<"UNKNOWN", jni::ref<java::lang::Character_UnicodeScript>>(); }

	static jni::ref<jni::array<java::lang::Character_UnicodeScript>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::Character_UnicodeScript>>>(); }
	static jni::ref<java::lang::Character_UnicodeScript> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::Character_UnicodeScript>>(name); }
	static jni::ref<java::lang::Character_UnicodeScript> of(jint codePoint) { return call_static_method<"of", jni::ref<java::lang::Character_UnicodeScript>>(codePoint); }
	static jni::ref<java::lang::Character_UnicodeScript> forName(jni::ref<java::lang::String> scriptName) { return call_static_method<"forName", jni::ref<java::lang::Character_UnicodeScript>>(scriptName); }

protected:

	Character_UnicodeScript(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODESCRIPT
