// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class IllegalThreadStateException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::IllegalThreadStateException>
{
	static constexpr fixed_string class_name = "java/lang/IllegalThreadStateException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalArgumentException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::IllegalThreadStateException : public jni::object_base<"java/lang/IllegalThreadStateException",
	java::lang::IllegalArgumentException>
{
public:

	static jni::ref<java::lang::IllegalThreadStateException> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::IllegalThreadStateException> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }

protected:

	IllegalThreadStateException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION
