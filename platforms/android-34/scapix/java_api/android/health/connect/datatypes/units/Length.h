// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_UNITS_LENGTH_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_UNITS_LENGTH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes::units { class Length; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::units::Length>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/units/Length";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_UNITS_LENGTH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_UNITS_LENGTH)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_UNITS_LENGTH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::units::Length : public jni::object_base<"android/health/connect/datatypes/units/Length",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	static jni::ref<android::health::connect::datatypes::units::Length> fromMeters(jdouble value) { return call_static_method<"fromMeters", jni::ref<android::health::connect::datatypes::units::Length>>(value); }
	jdouble getInMeters() { return call_method<"getInMeters", jdouble>(); }
	jint compareTo(jni::ref<android::health::connect::datatypes::units::Length> other) { return call_method<"compareTo", jint>(other); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Length(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_UNITS_LENGTH