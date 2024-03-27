// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IndexOutOfBoundsException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database { class CursorIndexOutOfBoundsException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::CursorIndexOutOfBoundsException>
{
	static constexpr fixed_string class_name = "android/database/CursorIndexOutOfBoundsException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IndexOutOfBoundsException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::CursorIndexOutOfBoundsException : public jni::object_base<"android/database/CursorIndexOutOfBoundsException",
	java::lang::IndexOutOfBoundsException>
{
public:

	static jni::ref<android::database::CursorIndexOutOfBoundsException> new_object(jint index, jint size) { return base_::new_object(index, size); }
	static jni::ref<android::database::CursorIndexOutOfBoundsException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }

protected:

	CursorIndexOutOfBoundsException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION
