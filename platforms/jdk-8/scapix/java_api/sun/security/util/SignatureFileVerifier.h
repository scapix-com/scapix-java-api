// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SIGNATUREFILEVERIFIER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SIGNATUREFILEVERIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class SignatureFileVerifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::SignatureFileVerifier>
{
	static constexpr fixed_string class_name = "sun/security/util/SignatureFileVerifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SIGNATUREFILEVERIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SIGNATUREFILEVERIFIER)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SIGNATUREFILEVERIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/sun/security/util/ManifestDigester.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::SignatureFileVerifier : public jni::object_base<"sun/security/util/SignatureFileVerifier",
	java::lang::Object>
{
public:

	static jint MAX_SIG_FILE_SIZE() { return get_static_field<"MAX_SIG_FILE_SIZE", jint>(); }

	static jni::ref<sun::security::util::SignatureFileVerifier> new_object(jni::ref<java::util::ArrayList> p1, jni::ref<sun::security::util::ManifestDigester> p2, jni::ref<java::lang::String> p3, jni::ref<jni::array<jbyte>> p4) { return base_::new_object(p1, p2, p3, p4); }
	jboolean needSignatureFileBytes() { return call_method<"needSignatureFileBytes", jboolean>(); }
	jboolean needSignatureFile(jni::ref<java::lang::String> p1) { return call_method<"needSignatureFile", jboolean>(p1); }
	void setSignatureFile(jni::ref<jni::array<jbyte>> p1) { return call_method<"setSignatureFile", void>(p1); }
	static jboolean isBlockOrSF(jni::ref<java::lang::String> p1) { return call_static_method<"isBlockOrSF", jboolean>(p1); }
	static jboolean isSigningRelated(jni::ref<java::lang::String> p1) { return call_static_method<"isSigningRelated", jboolean>(p1); }
	void process(jni::ref<java::util::Hashtable> p1, jni::ref<java::util::List> p2, jni::ref<java::lang::String> p3) { return call_method<"process", void>(p1, p2, p3); }

protected:

	SignatureFileVerifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SIGNATUREFILEVERIFIER
