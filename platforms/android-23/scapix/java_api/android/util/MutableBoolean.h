// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_MUTABLEBOOLEAN_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_MUTABLEBOOLEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class MutableBoolean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::MutableBoolean>
{
	static constexpr fixed_string class_name = "android/util/MutableBoolean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_MUTABLEBOOLEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_MUTABLEBOOLEAN)
#define SCAPIX_JAVA_API_ANDROID_UTIL_MUTABLEBOOLEAN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::MutableBoolean : public jni::object_base<"android/util/MutableBoolean",
	java::lang::Object>
{
public:

	jboolean value() { return get_field<"value", jboolean>(); }
	void value(jboolean v) { set_field<"value", jboolean>(v); }

	static jni::ref<android::util::MutableBoolean> new_object(jboolean value) { return base_::new_object(value); }

protected:

	MutableBoolean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_MUTABLEBOOLEAN
