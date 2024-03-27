// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_ENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_ENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class KeyStore_Entry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::KeyStore_Entry>
{
	static constexpr fixed_string class_name = "java/security/KeyStore$Entry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_ENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_ENTRY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_ENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::KeyStore_Entry : public jni::object_base<"java/security/KeyStore$Entry",
	java::lang::Object>
{
public:


protected:

	KeyStore_Entry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_ENTRY
