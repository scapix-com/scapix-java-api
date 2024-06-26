// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_FORMATEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_FORMATEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc { class FormatException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::FormatException>
{
	static constexpr fixed_string class_name = "android/nfc/FormatException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_FORMATEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_FORMATEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_NFC_FORMATEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::FormatException : public jni::object_base<"android/nfc/FormatException",
	java::lang::Exception>
{
public:

	static jni::ref<android::nfc::FormatException> new_object() { return base_::new_object(); }
	static jni::ref<android::nfc::FormatException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<android::nfc::FormatException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> e) { return base_::new_object(message, e); }

protected:

	FormatException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_FORMATEXCEPTION
