// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSELECTOR_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSELECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class CertSelector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::CertSelector>
{
	static constexpr fixed_string class_name = "java/security/cert/CertSelector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSELECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSELECTOR)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSELECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/cert/Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::CertSelector : public jni::object_base<"java/security/cert/CertSelector",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean match(jni::ref<java::security::cert::Certificate> p1) { return call_method<"match", jboolean>(p1); }

protected:

	CertSelector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSELECTOR
