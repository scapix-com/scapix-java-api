// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/util/AndroidException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_PENDINGINTENT_CANCELEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_PENDINGINTENT_CANCELEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class PendingIntent_CanceledException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::PendingIntent_CanceledException>
{
	static constexpr fixed_string class_name = "android/app/PendingIntent$CanceledException";
	using base_classes = std::tuple<scapix::java_api::android::util::AndroidException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_PENDINGINTENT_CANCELEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_PENDINGINTENT_CANCELEDEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_APP_PENDINGINTENT_CANCELEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::PendingIntent_CanceledException : public jni::object_base<"android/app/PendingIntent$CanceledException",
	android::util::AndroidException>
{
public:

	static jni::ref<android::app::PendingIntent_CanceledException> new_object() { return base_::new_object(); }
	static jni::ref<android::app::PendingIntent_CanceledException> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	static jni::ref<android::app::PendingIntent_CanceledException> new_object(jni::ref<java::lang::Exception> cause) { return base_::new_object(cause); }

protected:

	PendingIntent_CanceledException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_PENDINGINTENT_CANCELEDEXCEPTION
