// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/chrono/Era.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_JAPANESEERA_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_JAPANESEERA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class JapaneseEra; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::JapaneseEra>
{
	static constexpr fixed_string class_name = "java/time/chrono/JapaneseEra";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::chrono::Era, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_JAPANESEERA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_JAPANESEERA)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_JAPANESEERA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/format/TextStyle.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::chrono::JapaneseEra : public jni::object_base<"java/time/chrono/JapaneseEra",
	java::lang::Object,
	java::time::chrono::Era,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::chrono::JapaneseEra> HEISEI() { return get_static_field<"HEISEI", jni::ref<java::time::chrono::JapaneseEra>>(); }
	static jni::ref<java::time::chrono::JapaneseEra> MEIJI() { return get_static_field<"MEIJI", jni::ref<java::time::chrono::JapaneseEra>>(); }
	static jni::ref<java::time::chrono::JapaneseEra> SHOWA() { return get_static_field<"SHOWA", jni::ref<java::time::chrono::JapaneseEra>>(); }
	static jni::ref<java::time::chrono::JapaneseEra> TAISHO() { return get_static_field<"TAISHO", jni::ref<java::time::chrono::JapaneseEra>>(); }

	static jni::ref<java::time::chrono::JapaneseEra> of(jint japaneseEra) { return call_static_method<"of", jni::ref<java::time::chrono::JapaneseEra>>(japaneseEra); }
	static jni::ref<java::time::chrono::JapaneseEra> valueOf(jni::ref<java::lang::String> japaneseEra) { return call_static_method<"valueOf", jni::ref<java::time::chrono::JapaneseEra>>(japaneseEra); }
	static jni::ref<jni::array<java::time::chrono::JapaneseEra>> values() { return call_static_method<"values", jni::ref<jni::array<java::time::chrono::JapaneseEra>>>(); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::time::format::TextStyle> style, jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(style, locale); }
	jint getValue() { return call_method<"getValue", jint>(); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(field); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	JapaneseEra(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_JAPANESEERA
