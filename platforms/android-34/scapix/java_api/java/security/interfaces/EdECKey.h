// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECKEY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::interfaces { class EdECKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::interfaces::EdECKey>
{
	static constexpr fixed_string class_name = "java/security/interfaces/EdECKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECKEY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/spec/NamedParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::interfaces::EdECKey : public jni::object_base<"java/security/interfaces/EdECKey",
	java::lang::Object>
{
public:

	jni::ref<java::security::spec::NamedParameterSpec> getParams() { return call_method<"getParams", jni::ref<java::security::spec::NamedParameterSpec>>(); }

protected:

	EdECKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_EDECKEY
