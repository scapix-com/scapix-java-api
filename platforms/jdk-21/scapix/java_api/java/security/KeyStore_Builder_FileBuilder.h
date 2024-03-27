// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/KeyStore_Builder.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_BUILDER_FILEBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_BUILDER_FILEBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class KeyStore_Builder_FileBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::KeyStore_Builder_FileBuilder>
{
	static constexpr fixed_string class_name = "java/security/KeyStore$Builder$FileBuilder";
	using base_classes = std::tuple<scapix::java_api::java::security::KeyStore_Builder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_BUILDER_FILEBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_BUILDER_FILEBUILDER)
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_BUILDER_FILEBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/KeyStore.h>
#include <scapix/java_api/java/security/KeyStore_ProtectionParameter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::security::KeyStore_Builder_FileBuilder : public jni::object_base<"java/security/KeyStore$Builder$FileBuilder",
	java::security::KeyStore_Builder>
{
public:

	jni::ref<java::security::KeyStore> getKeyStore() { return call_method<"getKeyStore", jni::ref<java::security::KeyStore>>(); }
	jni::ref<java::security::KeyStore_ProtectionParameter> getProtectionParameter(jni::ref<java::lang::String> alias) { return call_method<"getProtectionParameter", jni::ref<java::security::KeyStore_ProtectionParameter>>(alias); }

protected:

	KeyStore_Builder_FileBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_BUILDER_FILEBUILDER
