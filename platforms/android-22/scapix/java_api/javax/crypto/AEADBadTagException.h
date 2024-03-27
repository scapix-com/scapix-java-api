// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/BadPaddingException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_AEADBADTAGEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_AEADBADTAGEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class AEADBadTagException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::AEADBadTagException>
{
	static constexpr fixed_string class_name = "javax/crypto/AEADBadTagException";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::BadPaddingException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_AEADBADTAGEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_AEADBADTAGEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_AEADBADTAGEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::AEADBadTagException : public jni::object_base<"javax/crypto/AEADBadTagException",
	javax::crypto::BadPaddingException>
{
public:

	static jni::ref<javax::crypto::AEADBadTagException> new_object() { return base_::new_object(); }
	static jni::ref<javax::crypto::AEADBadTagException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }

protected:

	AEADBadTagException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_AEADBADTAGEXCEPTION