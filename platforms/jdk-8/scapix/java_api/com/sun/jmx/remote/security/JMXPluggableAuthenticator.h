// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/remote/JMXAuthenticator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_JMXPLUGGABLEAUTHENTICATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_JMXPLUGGABLEAUTHENTICATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::remote::security { class JMXPluggableAuthenticator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::remote::security::JMXPluggableAuthenticator>
{
	static constexpr fixed_string class_name = "com/sun/jmx/remote/security/JMXPluggableAuthenticator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::management::remote::JMXAuthenticator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_JMXPLUGGABLEAUTHENTICATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_JMXPLUGGABLEAUTHENTICATOR)
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_JMXPLUGGABLEAUTHENTICATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/javax/security/auth/Subject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::remote::security::JMXPluggableAuthenticator : public jni::object_base<"com/sun/jmx/remote/security/JMXPluggableAuthenticator",
	java::lang::Object,
	javax::management::remote::JMXAuthenticator>
{
public:

	static jni::ref<com::sun::jmx::remote::security::JMXPluggableAuthenticator> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	jni::ref<javax::security::auth::Subject> authenticate(jni::ref<java::lang::Object> p1) { return call_method<"authenticate", jni::ref<javax::security::auth::Subject>>(p1); }

protected:

	JMXPluggableAuthenticator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_JMXPLUGGABLEAUTHENTICATOR
