// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/security/auth/callback/TextInputCallback.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_SASL_REALMCALLBACK_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_SASL_REALMCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::sasl { class RealmCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::sasl::RealmCallback>
{
	static constexpr fixed_string class_name = "javax/security/sasl/RealmCallback";
	using base_classes = std::tuple<scapix::java_api::javax::security::auth::callback::TextInputCallback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_SASL_REALMCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_SASL_REALMCALLBACK)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_SASL_REALMCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::sasl::RealmCallback : public jni::object_base<"javax/security/sasl/RealmCallback",
	javax::security::auth::callback::TextInputCallback>
{
public:

	static jni::ref<javax::security::sasl::RealmCallback> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::security::sasl::RealmCallback> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }

protected:

	RealmCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_SASL_REALMCALLBACK
