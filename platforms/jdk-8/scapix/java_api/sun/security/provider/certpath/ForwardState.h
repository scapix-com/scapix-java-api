// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/provider/certpath/State.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDSTATE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class ForwardState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::ForwardState>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/ForwardState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::provider::certpath::State>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDSTATE)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::certpath::ForwardState : public jni::object_base<"sun/security/provider/certpath/ForwardState",
	java::lang::Object,
	sun::security::provider::certpath::State>
{
public:

	jboolean isInitial() { return call_method<"isInitial", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void initState(jni::ref<java::util::List> p1) { return call_method<"initState", void>(p1); }
	void updateState(jni::ref<java::security::cert::X509Certificate> p1) { return call_method<"updateState", void>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	ForwardState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_FORWARDSTATE
