// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MANIFEST_PERMISSION_GROUP_FWD
#define SCAPIX_JAVA_API_ANDROID_MANIFEST_PERMISSION_GROUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android { class Manifest_permission_group; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::Manifest_permission_group>
{
	static constexpr fixed_string class_name = "android/Manifest$permission_group";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MANIFEST_PERMISSION_GROUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MANIFEST_PERMISSION_GROUP)
#define SCAPIX_JAVA_API_ANDROID_MANIFEST_PERMISSION_GROUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::Manifest_permission_group : public jni::object_base<"android/Manifest$permission_group",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTIVITY_RECOGNITION() { return get_static_field<"ACTIVITY_RECOGNITION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CALENDAR() { return get_static_field<"CALENDAR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CALL_LOG() { return get_static_field<"CALL_LOG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CAMERA() { return get_static_field<"CAMERA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTACTS() { return get_static_field<"CONTACTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCATION() { return get_static_field<"LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MICROPHONE() { return get_static_field<"MICROPHONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PHONE() { return get_static_field<"PHONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SENSORS() { return get_static_field<"SENSORS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SMS() { return get_static_field<"SMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STORAGE() { return get_static_field<"STORAGE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::Manifest_permission_group> new_object() { return base_::new_object(); }

protected:

	Manifest_permission_group(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MANIFEST_PERMISSION_GROUP
