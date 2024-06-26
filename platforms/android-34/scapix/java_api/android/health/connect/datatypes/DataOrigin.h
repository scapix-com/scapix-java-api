// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DATAORIGIN_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DATAORIGIN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class DataOrigin; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::DataOrigin>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/DataOrigin";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DATAORIGIN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DATAORIGIN)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DATAORIGIN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/health/connect/datatypes/DataOrigin_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::DataOrigin : public jni::object_base<"android/health/connect/datatypes/DataOrigin",
	java::lang::Object>
{
public:

	using Builder = DataOrigin_Builder;

	jni::ref<java::lang::String> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	DataOrigin(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DATAORIGIN
