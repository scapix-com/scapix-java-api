// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/time/chrono/Era.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_THAIBUDDHISTERA_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_THAIBUDDHISTERA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class ThaiBuddhistEra; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::ThaiBuddhistEra>
{
	static constexpr fixed_string class_name = "java/time/chrono/ThaiBuddhistEra";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum, scapix::java_api::java::time::chrono::Era>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_THAIBUDDHISTERA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_THAIBUDDHISTERA)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_THAIBUDDHISTERA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/format/TextStyle.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::chrono::ThaiBuddhistEra : public jni::object_base<"java/time/chrono/ThaiBuddhistEra",
	java::lang::Enum,
	java::time::chrono::Era>
{
public:

	static jni::ref<java::time::chrono::ThaiBuddhistEra> BEFORE_BE() { return get_static_field<"BEFORE_BE", jni::ref<java::time::chrono::ThaiBuddhistEra>>(); }
	static jni::ref<java::time::chrono::ThaiBuddhistEra> BE() { return get_static_field<"BE", jni::ref<java::time::chrono::ThaiBuddhistEra>>(); }

	static jni::ref<jni::array<java::time::chrono::ThaiBuddhistEra>> values() { return call_static_method<"values", jni::ref<jni::array<java::time::chrono::ThaiBuddhistEra>>>(); }
	static jni::ref<java::time::chrono::ThaiBuddhistEra> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::time::chrono::ThaiBuddhistEra>>(p1); }
	static jni::ref<java::time::chrono::ThaiBuddhistEra> of(jint p1) { return call_static_method<"of", jni::ref<java::time::chrono::ThaiBuddhistEra>>(p1); }
	jint getValue() { return call_method<"getValue", jint>(); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::time::format::TextStyle> p1, jni::ref<java::util::Locale> p2) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(p1, p2); }

protected:

	ThaiBuddhistEra(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_THAIBUDDHISTERA
