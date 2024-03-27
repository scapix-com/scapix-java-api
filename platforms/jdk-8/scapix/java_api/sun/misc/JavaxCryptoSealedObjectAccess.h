// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_JAVAXCRYPTOSEALEDOBJECTACCESS_FWD
#define SCAPIX_JAVA_API_SUN_MISC_JAVAXCRYPTOSEALEDOBJECTACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class JavaxCryptoSealedObjectAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::JavaxCryptoSealedObjectAccess>
{
	static constexpr fixed_string class_name = "sun/misc/JavaxCryptoSealedObjectAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_JAVAXCRYPTOSEALEDOBJECTACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_JAVAXCRYPTOSEALEDOBJECTACCESS)
#define SCAPIX_JAVA_API_SUN_MISC_JAVAXCRYPTOSEALEDOBJECTACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectInputStream.h>
#include <scapix/java_api/javax/crypto/Cipher.h>
#include <scapix/java_api/javax/crypto/SealedObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::JavaxCryptoSealedObjectAccess : public jni::object_base<"sun/misc/JavaxCryptoSealedObjectAccess",
	java::lang::Object>
{
public:

	jni::ref<java::io::ObjectInputStream> getExtObjectInputStream(jni::ref<javax::crypto::SealedObject> p1, jni::ref<javax::crypto::Cipher> p2) { return call_method<"getExtObjectInputStream", jni::ref<java::io::ObjectInputStream>>(p1, p2); }

protected:

	JavaxCryptoSealedObjectAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_JAVAXCRYPTOSEALEDOBJECTACCESS