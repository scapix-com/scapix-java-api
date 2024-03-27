// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class IndexOutOfBoundsException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::IndexOutOfBoundsException>
{
	static constexpr fixed_string class_name = "java/lang/IndexOutOfBoundsException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::IndexOutOfBoundsException : public jni::object_base<"java/lang/IndexOutOfBoundsException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<java::lang::IndexOutOfBoundsException> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::IndexOutOfBoundsException> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }
	static jni::ref<java::lang::IndexOutOfBoundsException> new_object(jint index) { return base_::new_object(index); }

protected:

	IndexOutOfBoundsException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION
