// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_PASSWORDAUTHENTICATION_FWD
#define SCAPIX_JAVA_API_JAVA_NET_PASSWORDAUTHENTICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class PasswordAuthentication; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::PasswordAuthentication>
{
	static constexpr fixed_string class_name = "java/net/PasswordAuthentication";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_PASSWORDAUTHENTICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_PASSWORDAUTHENTICATION)
#define SCAPIX_JAVA_API_JAVA_NET_PASSWORDAUTHENTICATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::PasswordAuthentication : public jni::object_base<"java/net/PasswordAuthentication",
	java::lang::Object>
{
public:

	static jni::ref<java::net::PasswordAuthentication> new_object(jni::ref<java::lang::String> p1, jni::ref<jni::array<jchar>> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getUserName() { return call_method<"getUserName", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jchar>> getPassword() { return call_method<"getPassword", jni::ref<jni::array<jchar>>>(); }

protected:

	PasswordAuthentication(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_PASSWORDAUTHENTICATION
