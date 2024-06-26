// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/MessageDigest_Delegate.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST_DELEGATE_CLONEABLEDELEGATE_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST_DELEGATE_CLONEABLEDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class MessageDigest_Delegate_CloneableDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::MessageDigest_Delegate_CloneableDelegate>
{
	static constexpr fixed_string class_name = "java/security/MessageDigest$Delegate$CloneableDelegate";
	using base_classes = std::tuple<scapix::java_api::java::security::MessageDigest_Delegate, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST_DELEGATE_CLONEABLEDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST_DELEGATE_CLONEABLEDELEGATE)
#define SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST_DELEGATE_CLONEABLEDELEGATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::security::MessageDigest_Delegate_CloneableDelegate : public jni::object_base<"java/security/MessageDigest$Delegate$CloneableDelegate",
	java::security::MessageDigest_Delegate,
	java::lang::Cloneable>
{
public:


protected:

	MessageDigest_Delegate_CloneableDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST_DELEGATE_CLONEABLEDELEGATE
