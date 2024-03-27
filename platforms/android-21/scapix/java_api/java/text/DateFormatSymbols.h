// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMATSYMBOLS_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMATSYMBOLS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class DateFormatSymbols; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::DateFormatSymbols>
{
	static constexpr fixed_string class_name = "java/text/DateFormatSymbols";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMATSYMBOLS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMATSYMBOLS)
#define SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMATSYMBOLS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::DateFormatSymbols : public jni::object_base<"java/text/DateFormatSymbols",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jni::ref<java::text::DateFormatSymbols> new_object() { return base_::new_object(); }
	static jni::ref<java::text::DateFormatSymbols> new_object(jni::ref<java::util::Locale> locale) { return base_::new_object(locale); }
	static jni::ref<java::text::DateFormatSymbols> getInstance() { return call_static_method<"getInstance", jni::ref<java::text::DateFormatSymbols>>(); }
	static jni::ref<java::text::DateFormatSymbols> getInstance(jni::ref<java::util::Locale> locale) { return call_static_method<"getInstance", jni::ref<java::text::DateFormatSymbols>>(locale); }
	static jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_static_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> getAmPmStrings() { return call_method<"getAmPmStrings", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getEras() { return call_method<"getEras", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> getLocalPatternChars() { return call_method<"getLocalPatternChars", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> getMonths() { return call_method<"getMonths", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getShortMonths() { return call_method<"getShortMonths", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getShortWeekdays() { return call_method<"getShortWeekdays", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getWeekdays() { return call_method<"getWeekdays", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<jni::array<java::lang::String>>> getZoneStrings() { return call_method<"getZoneStrings", jni::ref<jni::array<jni::array<java::lang::String>>>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void setAmPmStrings(jni::ref<jni::array<java::lang::String>> data) { return call_method<"setAmPmStrings", void>(data); }
	void setEras(jni::ref<jni::array<java::lang::String>> data) { return call_method<"setEras", void>(data); }
	void setLocalPatternChars(jni::ref<java::lang::String> data) { return call_method<"setLocalPatternChars", void>(data); }
	void setMonths(jni::ref<jni::array<java::lang::String>> data) { return call_method<"setMonths", void>(data); }
	void setShortMonths(jni::ref<jni::array<java::lang::String>> data) { return call_method<"setShortMonths", void>(data); }
	void setShortWeekdays(jni::ref<jni::array<java::lang::String>> data) { return call_method<"setShortWeekdays", void>(data); }
	void setWeekdays(jni::ref<jni::array<java::lang::String>> data) { return call_method<"setWeekdays", void>(data); }
	void setZoneStrings(jni::ref<jni::array<jni::array<java::lang::String>>> zoneStrings) { return call_method<"setZoneStrings", void>(zoneStrings); }

protected:

	DateFormatSymbols(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMATSYMBOLS
