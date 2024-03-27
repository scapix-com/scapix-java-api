// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_EDECPRIVATEKEYSPEC_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_EDECPRIVATEKEYSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class EdECPrivateKeySpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::EdECPrivateKeySpec>
{
	static constexpr fixed_string class_name = "java/security/spec/EdECPrivateKeySpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::KeySpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_EDECPRIVATEKEYSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_EDECPRIVATEKEYSPEC)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_EDECPRIVATEKEYSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/spec/NamedParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::EdECPrivateKeySpec : public jni::object_base<"java/security/spec/EdECPrivateKeySpec",
	java::lang::Object,
	java::security::spec::KeySpec>
{
public:

	static jni::ref<java::security::spec::EdECPrivateKeySpec> new_object(jni::ref<java::security::spec::NamedParameterSpec> params, jni::ref<jni::array<jbyte>> bytes) { return base_::new_object(params, bytes); }
	jni::ref<java::security::spec::NamedParameterSpec> getParams() { return call_method<"getParams", jni::ref<java::security::spec::NamedParameterSpec>>(); }
	jni::ref<jni::array<jbyte>> getBytes() { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(); }

protected:

	EdECPrivateKeySpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_EDECPRIVATEKEYSPEC