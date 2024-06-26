// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_STALEDATAEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_STALEDATAEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database { class StaleDataException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::StaleDataException>
{
	static constexpr fixed_string class_name = "android/database/StaleDataException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_STALEDATAEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_STALEDATAEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_STALEDATAEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::StaleDataException : public jni::object_base<"android/database/StaleDataException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<android::database::StaleDataException> new_object() { return base_::new_object(); }
	static jni::ref<android::database::StaleDataException> new_object(jni::ref<java::lang::String> description) { return base_::new_object(description); }

protected:

	StaleDataException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_STALEDATAEXCEPTION
