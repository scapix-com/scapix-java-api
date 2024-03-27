// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::interfaces { class DSAKeyPairGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::interfaces::DSAKeyPairGenerator>
{
	static constexpr fixed_string class_name = "java/security/interfaces/DSAKeyPairGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR)
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/interfaces/DSAParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::interfaces::DSAKeyPairGenerator : public jni::object_base<"java/security/interfaces/DSAKeyPairGenerator",
	java::lang::Object>
{
public:

	void initialize(jni::ref<java::security::interfaces::DSAParams> p1, jni::ref<java::security::SecureRandom> p2) { return call_method<"initialize", void>(p1, p2); }
	void initialize(jint p1, jboolean p2, jni::ref<java::security::SecureRandom> p3) { return call_method<"initialize", void>(p1, p2, p3); }

protected:

	DSAKeyPairGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR