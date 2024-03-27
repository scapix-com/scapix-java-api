// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/Principal.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPAL_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file::attribute { class UserPrincipal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::attribute::UserPrincipal>
{
	static constexpr fixed_string class_name = "java/nio/file/attribute/UserPrincipal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::Principal>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPAL)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPAL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::attribute::UserPrincipal : public jni::object_base<"java/nio/file/attribute/UserPrincipal",
	java::lang::Object,
	java::security::Principal>
{
public:


protected:

	UserPrincipal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_USERPRINCIPAL
