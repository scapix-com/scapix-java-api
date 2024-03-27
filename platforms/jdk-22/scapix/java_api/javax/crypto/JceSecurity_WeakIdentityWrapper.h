// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/WeakReference.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_JCESECURITY_WEAKIDENTITYWRAPPER_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_JCESECURITY_WEAKIDENTITYWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class JceSecurity_WeakIdentityWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::JceSecurity_WeakIdentityWrapper>
{
	static constexpr fixed_string class_name = "javax/crypto/JceSecurity$WeakIdentityWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::WeakReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_JCESECURITY_WEAKIDENTITYWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_JCESECURITY_WEAKIDENTITYWRAPPER)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_JCESECURITY_WEAKIDENTITYWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::crypto::JceSecurity_WeakIdentityWrapper : public jni::object_base<"javax/crypto/JceSecurity$WeakIdentityWrapper",
	java::lang::ref::WeakReference>
{
public:

	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	JceSecurity_WeakIdentityWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_JCESECURITY_WEAKIDENTITYWRAPPER
