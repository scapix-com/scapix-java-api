// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_PROVIDERMISMATCHEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_PROVIDERMISMATCHEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class ProviderMismatchException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::ProviderMismatchException>
{
	static constexpr fixed_string class_name = "java/nio/file/ProviderMismatchException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalArgumentException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_PROVIDERMISMATCHEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_PROVIDERMISMATCHEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_PROVIDERMISMATCHEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::ProviderMismatchException : public jni::object_base<"java/nio/file/ProviderMismatchException",
	java::lang::IllegalArgumentException>
{
public:

	static jni::ref<java::nio::file::ProviderMismatchException> new_object() { return base_::new_object(); }
	static jni::ref<java::nio::file::ProviderMismatchException> new_object(jni::ref<java::lang::String> msg) { return base_::new_object(msg); }

protected:

	ProviderMismatchException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_PROVIDERMISMATCHEXCEPTION
