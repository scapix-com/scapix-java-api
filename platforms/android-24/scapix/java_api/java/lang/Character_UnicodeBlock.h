// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Character_Subset.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODEBLOCK_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODEBLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Character_UnicodeBlock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Character_UnicodeBlock>
{
	static constexpr fixed_string class_name = "java/lang/Character$UnicodeBlock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Character_Subset>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODEBLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODEBLOCK)
#define SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODEBLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Character_UnicodeBlock : public jni::object_base<"java/lang/Character$UnicodeBlock",
	java::lang::Character_Subset>
{
public:

	static jni::ref<java::lang::Character_UnicodeBlock> AEGEAN_NUMBERS() { return get_static_field<"AEGEAN_NUMBERS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ALCHEMICAL_SYMBOLS() { return get_static_field<"ALCHEMICAL_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ALPHABETIC_PRESENTATION_FORMS() { return get_static_field<"ALPHABETIC_PRESENTATION_FORMS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ANCIENT_GREEK_MUSICAL_NOTATION() { return get_static_field<"ANCIENT_GREEK_MUSICAL_NOTATION", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ANCIENT_GREEK_NUMBERS() { return get_static_field<"ANCIENT_GREEK_NUMBERS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ANCIENT_SYMBOLS() { return get_static_field<"ANCIENT_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ARABIC() { return get_static_field<"ARABIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ARABIC_PRESENTATION_FORMS_A() { return get_static_field<"ARABIC_PRESENTATION_FORMS_A", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ARABIC_PRESENTATION_FORMS_B() { return get_static_field<"ARABIC_PRESENTATION_FORMS_B", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ARABIC_SUPPLEMENT() { return get_static_field<"ARABIC_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ARMENIAN() { return get_static_field<"ARMENIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ARROWS() { return get_static_field<"ARROWS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> AVESTAN() { return get_static_field<"AVESTAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BALINESE() { return get_static_field<"BALINESE", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BAMUM() { return get_static_field<"BAMUM", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BAMUM_SUPPLEMENT() { return get_static_field<"BAMUM_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BASIC_LATIN() { return get_static_field<"BASIC_LATIN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BATAK() { return get_static_field<"BATAK", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BENGALI() { return get_static_field<"BENGALI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BLOCK_ELEMENTS() { return get_static_field<"BLOCK_ELEMENTS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BOPOMOFO() { return get_static_field<"BOPOMOFO", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BOPOMOFO_EXTENDED() { return get_static_field<"BOPOMOFO_EXTENDED", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BOX_DRAWING() { return get_static_field<"BOX_DRAWING", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BRAHMI() { return get_static_field<"BRAHMI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BRAILLE_PATTERNS() { return get_static_field<"BRAILLE_PATTERNS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BUGINESE() { return get_static_field<"BUGINESE", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BUHID() { return get_static_field<"BUHID", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> BYZANTINE_MUSICAL_SYMBOLS() { return get_static_field<"BYZANTINE_MUSICAL_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CARIAN() { return get_static_field<"CARIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CHAM() { return get_static_field<"CHAM", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CHEROKEE() { return get_static_field<"CHEROKEE", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_COMPATIBILITY() { return get_static_field<"CJK_COMPATIBILITY", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_COMPATIBILITY_FORMS() { return get_static_field<"CJK_COMPATIBILITY_FORMS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_COMPATIBILITY_IDEOGRAPHS() { return get_static_field<"CJK_COMPATIBILITY_IDEOGRAPHS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT() { return get_static_field<"CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_RADICALS_SUPPLEMENT() { return get_static_field<"CJK_RADICALS_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_STROKES() { return get_static_field<"CJK_STROKES", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_SYMBOLS_AND_PUNCTUATION() { return get_static_field<"CJK_SYMBOLS_AND_PUNCTUATION", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_UNIFIED_IDEOGRAPHS() { return get_static_field<"CJK_UNIFIED_IDEOGRAPHS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A() { return get_static_field<"CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B() { return get_static_field<"CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C() { return get_static_field<"CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D() { return get_static_field<"CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> COMBINING_DIACRITICAL_MARKS() { return get_static_field<"COMBINING_DIACRITICAL_MARKS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> COMBINING_DIACRITICAL_MARKS_SUPPLEMENT() { return get_static_field<"COMBINING_DIACRITICAL_MARKS_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> COMBINING_HALF_MARKS() { return get_static_field<"COMBINING_HALF_MARKS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> COMBINING_MARKS_FOR_SYMBOLS() { return get_static_field<"COMBINING_MARKS_FOR_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> COMMON_INDIC_NUMBER_FORMS() { return get_static_field<"COMMON_INDIC_NUMBER_FORMS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CONTROL_PICTURES() { return get_static_field<"CONTROL_PICTURES", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> COPTIC() { return get_static_field<"COPTIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> COUNTING_ROD_NUMERALS() { return get_static_field<"COUNTING_ROD_NUMERALS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CUNEIFORM() { return get_static_field<"CUNEIFORM", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CUNEIFORM_NUMBERS_AND_PUNCTUATION() { return get_static_field<"CUNEIFORM_NUMBERS_AND_PUNCTUATION", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CURRENCY_SYMBOLS() { return get_static_field<"CURRENCY_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CYPRIOT_SYLLABARY() { return get_static_field<"CYPRIOT_SYLLABARY", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CYRILLIC() { return get_static_field<"CYRILLIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CYRILLIC_EXTENDED_A() { return get_static_field<"CYRILLIC_EXTENDED_A", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CYRILLIC_EXTENDED_B() { return get_static_field<"CYRILLIC_EXTENDED_B", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> CYRILLIC_SUPPLEMENTARY() { return get_static_field<"CYRILLIC_SUPPLEMENTARY", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> DESERET() { return get_static_field<"DESERET", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> DEVANAGARI() { return get_static_field<"DEVANAGARI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> DEVANAGARI_EXTENDED() { return get_static_field<"DEVANAGARI_EXTENDED", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> DINGBATS() { return get_static_field<"DINGBATS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> DOMINO_TILES() { return get_static_field<"DOMINO_TILES", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> EGYPTIAN_HIEROGLYPHS() { return get_static_field<"EGYPTIAN_HIEROGLYPHS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> EMOTICONS() { return get_static_field<"EMOTICONS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ENCLOSED_ALPHANUMERICS() { return get_static_field<"ENCLOSED_ALPHANUMERICS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ENCLOSED_ALPHANUMERIC_SUPPLEMENT() { return get_static_field<"ENCLOSED_ALPHANUMERIC_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ENCLOSED_CJK_LETTERS_AND_MONTHS() { return get_static_field<"ENCLOSED_CJK_LETTERS_AND_MONTHS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ENCLOSED_IDEOGRAPHIC_SUPPLEMENT() { return get_static_field<"ENCLOSED_IDEOGRAPHIC_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ETHIOPIC() { return get_static_field<"ETHIOPIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ETHIOPIC_EXTENDED() { return get_static_field<"ETHIOPIC_EXTENDED", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ETHIOPIC_EXTENDED_A() { return get_static_field<"ETHIOPIC_EXTENDED_A", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ETHIOPIC_SUPPLEMENT() { return get_static_field<"ETHIOPIC_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> GENERAL_PUNCTUATION() { return get_static_field<"GENERAL_PUNCTUATION", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> GEOMETRIC_SHAPES() { return get_static_field<"GEOMETRIC_SHAPES", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> GEORGIAN() { return get_static_field<"GEORGIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> GEORGIAN_SUPPLEMENT() { return get_static_field<"GEORGIAN_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> GLAGOLITIC() { return get_static_field<"GLAGOLITIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> GOTHIC() { return get_static_field<"GOTHIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> GREEK() { return get_static_field<"GREEK", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> GREEK_EXTENDED() { return get_static_field<"GREEK_EXTENDED", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> GUJARATI() { return get_static_field<"GUJARATI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> GURMUKHI() { return get_static_field<"GURMUKHI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HALFWIDTH_AND_FULLWIDTH_FORMS() { return get_static_field<"HALFWIDTH_AND_FULLWIDTH_FORMS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HANGUL_COMPATIBILITY_JAMO() { return get_static_field<"HANGUL_COMPATIBILITY_JAMO", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HANGUL_JAMO() { return get_static_field<"HANGUL_JAMO", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HANGUL_JAMO_EXTENDED_A() { return get_static_field<"HANGUL_JAMO_EXTENDED_A", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HANGUL_JAMO_EXTENDED_B() { return get_static_field<"HANGUL_JAMO_EXTENDED_B", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HANGUL_SYLLABLES() { return get_static_field<"HANGUL_SYLLABLES", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HANUNOO() { return get_static_field<"HANUNOO", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HEBREW() { return get_static_field<"HEBREW", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HIGH_PRIVATE_USE_SURROGATES() { return get_static_field<"HIGH_PRIVATE_USE_SURROGATES", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HIGH_SURROGATES() { return get_static_field<"HIGH_SURROGATES", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> HIRAGANA() { return get_static_field<"HIRAGANA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> IDEOGRAPHIC_DESCRIPTION_CHARACTERS() { return get_static_field<"IDEOGRAPHIC_DESCRIPTION_CHARACTERS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> IMPERIAL_ARAMAIC() { return get_static_field<"IMPERIAL_ARAMAIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> INSCRIPTIONAL_PAHLAVI() { return get_static_field<"INSCRIPTIONAL_PAHLAVI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> INSCRIPTIONAL_PARTHIAN() { return get_static_field<"INSCRIPTIONAL_PARTHIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> IPA_EXTENSIONS() { return get_static_field<"IPA_EXTENSIONS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> JAVANESE() { return get_static_field<"JAVANESE", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KAITHI() { return get_static_field<"KAITHI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KANA_SUPPLEMENT() { return get_static_field<"KANA_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KANBUN() { return get_static_field<"KANBUN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KANGXI_RADICALS() { return get_static_field<"KANGXI_RADICALS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KANNADA() { return get_static_field<"KANNADA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KATAKANA() { return get_static_field<"KATAKANA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KATAKANA_PHONETIC_EXTENSIONS() { return get_static_field<"KATAKANA_PHONETIC_EXTENSIONS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KAYAH_LI() { return get_static_field<"KAYAH_LI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KHAROSHTHI() { return get_static_field<"KHAROSHTHI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KHMER() { return get_static_field<"KHMER", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> KHMER_SYMBOLS() { return get_static_field<"KHMER_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LAO() { return get_static_field<"LAO", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LATIN_1_SUPPLEMENT() { return get_static_field<"LATIN_1_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LATIN_EXTENDED_A() { return get_static_field<"LATIN_EXTENDED_A", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LATIN_EXTENDED_ADDITIONAL() { return get_static_field<"LATIN_EXTENDED_ADDITIONAL", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LATIN_EXTENDED_B() { return get_static_field<"LATIN_EXTENDED_B", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LATIN_EXTENDED_C() { return get_static_field<"LATIN_EXTENDED_C", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LATIN_EXTENDED_D() { return get_static_field<"LATIN_EXTENDED_D", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LEPCHA() { return get_static_field<"LEPCHA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LETTERLIKE_SYMBOLS() { return get_static_field<"LETTERLIKE_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LIMBU() { return get_static_field<"LIMBU", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LINEAR_B_IDEOGRAMS() { return get_static_field<"LINEAR_B_IDEOGRAMS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LINEAR_B_SYLLABARY() { return get_static_field<"LINEAR_B_SYLLABARY", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LISU() { return get_static_field<"LISU", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LOW_SURROGATES() { return get_static_field<"LOW_SURROGATES", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LYCIAN() { return get_static_field<"LYCIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> LYDIAN() { return get_static_field<"LYDIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MAHJONG_TILES() { return get_static_field<"MAHJONG_TILES", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MALAYALAM() { return get_static_field<"MALAYALAM", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MANDAIC() { return get_static_field<"MANDAIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MATHEMATICAL_ALPHANUMERIC_SYMBOLS() { return get_static_field<"MATHEMATICAL_ALPHANUMERIC_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MATHEMATICAL_OPERATORS() { return get_static_field<"MATHEMATICAL_OPERATORS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MEETEI_MAYEK() { return get_static_field<"MEETEI_MAYEK", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A() { return get_static_field<"MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B() { return get_static_field<"MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MISCELLANEOUS_SYMBOLS() { return get_static_field<"MISCELLANEOUS_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MISCELLANEOUS_SYMBOLS_AND_ARROWS() { return get_static_field<"MISCELLANEOUS_SYMBOLS_AND_ARROWS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS() { return get_static_field<"MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MISCELLANEOUS_TECHNICAL() { return get_static_field<"MISCELLANEOUS_TECHNICAL", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MODIFIER_TONE_LETTERS() { return get_static_field<"MODIFIER_TONE_LETTERS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MONGOLIAN() { return get_static_field<"MONGOLIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MUSICAL_SYMBOLS() { return get_static_field<"MUSICAL_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MYANMAR() { return get_static_field<"MYANMAR", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> MYANMAR_EXTENDED_A() { return get_static_field<"MYANMAR_EXTENDED_A", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> NEW_TAI_LUE() { return get_static_field<"NEW_TAI_LUE", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> NKO() { return get_static_field<"NKO", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> NUMBER_FORMS() { return get_static_field<"NUMBER_FORMS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> OGHAM() { return get_static_field<"OGHAM", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> OLD_ITALIC() { return get_static_field<"OLD_ITALIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> OLD_PERSIAN() { return get_static_field<"OLD_PERSIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> OLD_SOUTH_ARABIAN() { return get_static_field<"OLD_SOUTH_ARABIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> OLD_TURKIC() { return get_static_field<"OLD_TURKIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> OL_CHIKI() { return get_static_field<"OL_CHIKI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> OPTICAL_CHARACTER_RECOGNITION() { return get_static_field<"OPTICAL_CHARACTER_RECOGNITION", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> ORIYA() { return get_static_field<"ORIYA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> OSMANYA() { return get_static_field<"OSMANYA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> PHAGS_PA() { return get_static_field<"PHAGS_PA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> PHAISTOS_DISC() { return get_static_field<"PHAISTOS_DISC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> PHOENICIAN() { return get_static_field<"PHOENICIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> PHONETIC_EXTENSIONS() { return get_static_field<"PHONETIC_EXTENSIONS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> PHONETIC_EXTENSIONS_SUPPLEMENT() { return get_static_field<"PHONETIC_EXTENSIONS_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> PLAYING_CARDS() { return get_static_field<"PLAYING_CARDS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> PRIVATE_USE_AREA() { return get_static_field<"PRIVATE_USE_AREA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> REJANG() { return get_static_field<"REJANG", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> RUMI_NUMERAL_SYMBOLS() { return get_static_field<"RUMI_NUMERAL_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> RUNIC() { return get_static_field<"RUNIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SAMARITAN() { return get_static_field<"SAMARITAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SAURASHTRA() { return get_static_field<"SAURASHTRA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SHAVIAN() { return get_static_field<"SHAVIAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SINHALA() { return get_static_field<"SINHALA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SMALL_FORM_VARIANTS() { return get_static_field<"SMALL_FORM_VARIANTS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SPACING_MODIFIER_LETTERS() { return get_static_field<"SPACING_MODIFIER_LETTERS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SPECIALS() { return get_static_field<"SPECIALS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SUNDANESE() { return get_static_field<"SUNDANESE", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SUPERSCRIPTS_AND_SUBSCRIPTS() { return get_static_field<"SUPERSCRIPTS_AND_SUBSCRIPTS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SUPPLEMENTAL_ARROWS_A() { return get_static_field<"SUPPLEMENTAL_ARROWS_A", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SUPPLEMENTAL_ARROWS_B() { return get_static_field<"SUPPLEMENTAL_ARROWS_B", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SUPPLEMENTAL_MATHEMATICAL_OPERATORS() { return get_static_field<"SUPPLEMENTAL_MATHEMATICAL_OPERATORS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SUPPLEMENTAL_PUNCTUATION() { return get_static_field<"SUPPLEMENTAL_PUNCTUATION", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SUPPLEMENTARY_PRIVATE_USE_AREA_A() { return get_static_field<"SUPPLEMENTARY_PRIVATE_USE_AREA_A", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SUPPLEMENTARY_PRIVATE_USE_AREA_B() { return get_static_field<"SUPPLEMENTARY_PRIVATE_USE_AREA_B", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SURROGATES_AREA() { return get_static_field<"SURROGATES_AREA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SYLOTI_NAGRI() { return get_static_field<"SYLOTI_NAGRI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> SYRIAC() { return get_static_field<"SYRIAC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TAGALOG() { return get_static_field<"TAGALOG", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TAGBANWA() { return get_static_field<"TAGBANWA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TAGS() { return get_static_field<"TAGS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TAI_LE() { return get_static_field<"TAI_LE", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TAI_THAM() { return get_static_field<"TAI_THAM", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TAI_VIET() { return get_static_field<"TAI_VIET", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TAI_XUAN_JING_SYMBOLS() { return get_static_field<"TAI_XUAN_JING_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TAMIL() { return get_static_field<"TAMIL", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TELUGU() { return get_static_field<"TELUGU", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> THAANA() { return get_static_field<"THAANA", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> THAI() { return get_static_field<"THAI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TIBETAN() { return get_static_field<"TIBETAN", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TIFINAGH() { return get_static_field<"TIFINAGH", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> TRANSPORT_AND_MAP_SYMBOLS() { return get_static_field<"TRANSPORT_AND_MAP_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> UGARITIC() { return get_static_field<"UGARITIC", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS() { return get_static_field<"UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED() { return get_static_field<"UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> VAI() { return get_static_field<"VAI", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> VARIATION_SELECTORS() { return get_static_field<"VARIATION_SELECTORS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> VARIATION_SELECTORS_SUPPLEMENT() { return get_static_field<"VARIATION_SELECTORS_SUPPLEMENT", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> VEDIC_EXTENSIONS() { return get_static_field<"VEDIC_EXTENSIONS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> VERTICAL_FORMS() { return get_static_field<"VERTICAL_FORMS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> YIJING_HEXAGRAM_SYMBOLS() { return get_static_field<"YIJING_HEXAGRAM_SYMBOLS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> YI_RADICALS() { return get_static_field<"YI_RADICALS", jni::ref<java::lang::Character_UnicodeBlock>>(); }
	static jni::ref<java::lang::Character_UnicodeBlock> YI_SYLLABLES() { return get_static_field<"YI_SYLLABLES", jni::ref<java::lang::Character_UnicodeBlock>>(); }

	static jni::ref<java::lang::Character_UnicodeBlock> of(jchar c) { return call_static_method<"of", jni::ref<java::lang::Character_UnicodeBlock>>(c); }
	static jni::ref<java::lang::Character_UnicodeBlock> of(jint codePoint) { return call_static_method<"of", jni::ref<java::lang::Character_UnicodeBlock>>(codePoint); }
	static jni::ref<java::lang::Character_UnicodeBlock> forName(jni::ref<java::lang::String> blockName) { return call_static_method<"forName", jni::ref<java::lang::Character_UnicodeBlock>>(blockName); }

protected:

	Character_UnicodeBlock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_UNICODEBLOCK
