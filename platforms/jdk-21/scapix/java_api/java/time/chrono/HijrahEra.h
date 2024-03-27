// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/time/chrono/Era.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHERA_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHERA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class HijrahEra; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::HijrahEra>
{
	static constexpr fixed_string class_name = "java/time/chrono/HijrahEra";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum, scapix::java_api::java::time::chrono::Era>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHERA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHERA)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHERA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/format/TextStyle.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::chrono::HijrahEra : public jni::object_base<"java/time/chrono/HijrahEra",
	java::lang::Enum,
	java::time::chrono::Era>
{
public:

	static jni::ref<java::time::chrono::HijrahEra> AH() { return get_static_field<"AH", jni::ref<java::time::chrono::HijrahEra>>(); }

	static jni::ref<jni::array<java::time::chrono::HijrahEra>> values() { return call_static_method<"values", jni::ref<jni::array<java::time::chrono::HijrahEra>>>(); }
	static jni::ref<java::time::chrono::HijrahEra> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::time::chrono::HijrahEra>>(name); }
	static jni::ref<java::time::chrono::HijrahEra> of(jint hijrahEra) { return call_static_method<"of", jni::ref<java::time::chrono::HijrahEra>>(hijrahEra); }
	jint getValue() { return call_method<"getValue", jint>(); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(field); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::time::format::TextStyle> style, jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(style, locale); }

protected:

	HijrahEra(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHERA
