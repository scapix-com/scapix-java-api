// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Throwable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_EXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_EXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Exception; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Exception>
{
	static constexpr fixed_string class_name = "java/lang/Exception";
	using base_classes = std::tuple<scapix::java_api::java::lang::Throwable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_EXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_EXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_EXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Exception : public jni::object_base<"java/lang/Exception",
	java::lang::Throwable>
{
public:

	static jni::ref<java::lang::Exception> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::Exception> new_object(jni::ref<java::lang::String> detailMessage) { return base_::new_object(detailMessage); }
	static jni::ref<java::lang::Exception> new_object(jni::ref<java::lang::String> detailMessage, jni::ref<java::lang::Throwable> throwable) { return base_::new_object(detailMessage, throwable); }
	static jni::ref<java::lang::Exception> new_object(jni::ref<java::lang::Throwable> throwable) { return base_::new_object(throwable); }

protected:

	Exception(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_EXCEPTION
