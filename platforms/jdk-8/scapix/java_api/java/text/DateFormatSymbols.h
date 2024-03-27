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
	static jni::ref<java::text::DateFormatSymbols> new_object(jni::ref<java::util::Locale> p1) { return base_::new_object(p1); }
	static jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_static_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	static jni::ref<java::text::DateFormatSymbols> getInstance() { return call_static_method<"getInstance", jni::ref<java::text::DateFormatSymbols>>(); }
	static jni::ref<java::text::DateFormatSymbols> getInstance(jni::ref<java::util::Locale> p1) { return call_static_method<"getInstance", jni::ref<java::text::DateFormatSymbols>>(p1); }
	jni::ref<jni::array<java::lang::String>> getEras() { return call_method<"getEras", jni::ref<jni::array<java::lang::String>>>(); }
	void setEras(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"setEras", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getMonths() { return call_method<"getMonths", jni::ref<jni::array<java::lang::String>>>(); }
	void setMonths(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"setMonths", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getShortMonths() { return call_method<"getShortMonths", jni::ref<jni::array<java::lang::String>>>(); }
	void setShortMonths(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"setShortMonths", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getWeekdays() { return call_method<"getWeekdays", jni::ref<jni::array<java::lang::String>>>(); }
	void setWeekdays(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"setWeekdays", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getShortWeekdays() { return call_method<"getShortWeekdays", jni::ref<jni::array<java::lang::String>>>(); }
	void setShortWeekdays(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"setShortWeekdays", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getAmPmStrings() { return call_method<"getAmPmStrings", jni::ref<jni::array<java::lang::String>>>(); }
	void setAmPmStrings(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"setAmPmStrings", void>(p1); }
	jni::ref<jni::array<jni::array<java::lang::String>>> getZoneStrings() { return call_method<"getZoneStrings", jni::ref<jni::array<jni::array<java::lang::String>>>>(); }
	void setZoneStrings(jni::ref<jni::array<jni::array<java::lang::String>>> p1) { return call_method<"setZoneStrings", void>(p1); }
	jni::ref<java::lang::String> getLocalPatternChars() { return call_method<"getLocalPatternChars", jni::ref<java::lang::String>>(); }
	void setLocalPatternChars(jni::ref<java::lang::String> p1) { return call_method<"setLocalPatternChars", void>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	DateFormatSymbols(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMATSYMBOLS
