// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TRANSLITERATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TRANSLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class Transliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::Transliterator>
{
	static constexpr fixed_string class_name = "android/icu/text/Transliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TRANSLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TRANSLITERATOR)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TRANSLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/Replaceable.h>
#include <scapix/java_api/android/icu/text/Transliterator_Position.h>
#include <scapix/java_api/android/icu/text/UnicodeFilter.h>
#include <scapix/java_api/android/icu/text/UnicodeSet.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::Transliterator : public jni::object_base<"android/icu/text/Transliterator",
	java::lang::Object>
{
public:

	using Position = Transliterator_Position;

	static jint FORWARD() { return get_static_field<"FORWARD", jint>(); }
	static jint REVERSE() { return get_static_field<"REVERSE", jint>(); }

	jint transliterate(jni::ref<android::icu::text::Replaceable> text, jint start, jint limit) { return call_method<"transliterate", jint>(text, start, limit); }
	void transliterate(jni::ref<android::icu::text::Replaceable> text) { return call_method<"transliterate", void>(text); }
	jni::ref<java::lang::String> transliterate(jni::ref<java::lang::String> text) { return call_method<"transliterate", jni::ref<java::lang::String>>(text); }
	void transliterate(jni::ref<android::icu::text::Replaceable> text, jni::ref<android::icu::text::Transliterator_Position> index, jni::ref<java::lang::String> insertion) { return call_method<"transliterate", void>(text, index, insertion); }
	void transliterate(jni::ref<android::icu::text::Replaceable> text, jni::ref<android::icu::text::Transliterator_Position> index, jint insertion) { return call_method<"transliterate", void>(text, index, insertion); }
	void transliterate(jni::ref<android::icu::text::Replaceable> text, jni::ref<android::icu::text::Transliterator_Position> index) { return call_method<"transliterate", void>(text, index); }
	void finishTransliteration(jni::ref<android::icu::text::Replaceable> text, jni::ref<android::icu::text::Transliterator_Position> index) { return call_method<"finishTransliteration", void>(text, index); }
	void filteredTransliterate(jni::ref<android::icu::text::Replaceable> text, jni::ref<android::icu::text::Transliterator_Position> index, jboolean incremental) { return call_method<"filteredTransliterate", void>(text, index, incremental); }
	jint getMaximumContextLength() { return call_method<"getMaximumContextLength", jint>(); }
	jni::ref<java::lang::String> getID() { return call_method<"getID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getDisplayName(jni::ref<java::lang::String> ID) { return call_static_method<"getDisplayName", jni::ref<java::lang::String>>(ID); }
	static jni::ref<java::lang::String> getDisplayName(jni::ref<java::lang::String> id, jni::ref<java::util::Locale> inLocale) { return call_static_method<"getDisplayName", jni::ref<java::lang::String>>(id, inLocale); }
	static jni::ref<java::lang::String> getDisplayName(jni::ref<java::lang::String> id, jni::ref<android::icu::util::ULocale> inLocale) { return call_static_method<"getDisplayName", jni::ref<java::lang::String>>(id, inLocale); }
	jni::ref<android::icu::text::UnicodeFilter> getFilter() { return call_method<"getFilter", jni::ref<android::icu::text::UnicodeFilter>>(); }
	void setFilter(jni::ref<android::icu::text::UnicodeFilter> filter) { return call_method<"setFilter", void>(filter); }
	static jni::ref<android::icu::text::Transliterator> getInstance(jni::ref<java::lang::String> ID) { return call_static_method<"getInstance", jni::ref<android::icu::text::Transliterator>>(ID); }
	static jni::ref<android::icu::text::Transliterator> getInstance(jni::ref<java::lang::String> ID, jint dir) { return call_static_method<"getInstance", jni::ref<android::icu::text::Transliterator>>(ID, dir); }
	static jni::ref<android::icu::text::Transliterator> createFromRules(jni::ref<java::lang::String> ID, jni::ref<java::lang::String> rules, jint dir) { return call_static_method<"createFromRules", jni::ref<android::icu::text::Transliterator>>(ID, rules, dir); }
	jni::ref<java::lang::String> toRules(jboolean escapeUnprintable) { return call_method<"toRules", jni::ref<java::lang::String>>(escapeUnprintable); }
	jni::ref<jni::array<android::icu::text::Transliterator>> getElements() { return call_method<"getElements", jni::ref<jni::array<android::icu::text::Transliterator>>>(); }
	jni::ref<android::icu::text::UnicodeSet> getSourceSet() { return call_method<"getSourceSet", jni::ref<android::icu::text::UnicodeSet>>(); }
	jni::ref<android::icu::text::UnicodeSet> getTargetSet() { return call_method<"getTargetSet", jni::ref<android::icu::text::UnicodeSet>>(); }
	jni::ref<android::icu::text::Transliterator> getInverse() { return call_method<"getInverse", jni::ref<android::icu::text::Transliterator>>(); }
	static jni::ref<java::util::Enumeration> getAvailableIDs() { return call_static_method<"getAvailableIDs", jni::ref<java::util::Enumeration>>(); }
	static jni::ref<java::util::Enumeration> getAvailableSources() { return call_static_method<"getAvailableSources", jni::ref<java::util::Enumeration>>(); }
	static jni::ref<java::util::Enumeration> getAvailableTargets(jni::ref<java::lang::String> source) { return call_static_method<"getAvailableTargets", jni::ref<java::util::Enumeration>>(source); }
	static jni::ref<java::util::Enumeration> getAvailableVariants(jni::ref<java::lang::String> source, jni::ref<java::lang::String> target) { return call_static_method<"getAvailableVariants", jni::ref<java::util::Enumeration>>(source, target); }

protected:

	Transliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TRANSLITERATOR
