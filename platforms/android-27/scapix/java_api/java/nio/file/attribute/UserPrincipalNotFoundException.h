// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALNOTFOUNDEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALNOTFOUNDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file::attribute { class UserPrincipalNotFoundException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::attribute::UserPrincipalNotFoundException>
{
	static constexpr fixed_string class_name = "java/nio/file/attribute/UserPrincipalNotFoundException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALNOTFOUNDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALNOTFOUNDEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALNOTFOUNDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::attribute::UserPrincipalNotFoundException : public jni::object_base<"java/nio/file/attribute/UserPrincipalNotFoundException",
	java::io::IOException>
{
public:

	static jni::ref<java::nio::file::attribute::UserPrincipalNotFoundException> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	UserPrincipalNotFoundException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPALNOTFOUNDEXCEPTION
