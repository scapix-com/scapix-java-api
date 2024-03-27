// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JGSS_TOKENTRACKER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_TOKENTRACKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jgss { class TokenTracker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jgss::TokenTracker>
{
	static constexpr fixed_string class_name = "sun/security/jgss/TokenTracker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_TOKENTRACKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JGSS_TOKENTRACKER)
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_TOKENTRACKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/ietf/jgss/MessageProp.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::jgss::TokenTracker : public jni::object_base<"sun/security/jgss/TokenTracker",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::jgss::TokenTracker> new_object(jint p1) { return base_::new_object(p1); }
	void getProps(jint p1, jni::ref<org::ietf::jgss::MessageProp> p2) { return call_method<"getProps", void>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TokenTracker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_TOKENTRACKER
