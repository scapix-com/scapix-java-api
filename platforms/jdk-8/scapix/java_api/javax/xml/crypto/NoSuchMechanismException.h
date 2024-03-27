// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_NOSUCHMECHANISMEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_NOSUCHMECHANISMEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto { class NoSuchMechanismException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::NoSuchMechanismException>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/NoSuchMechanismException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_NOSUCHMECHANISMEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_NOSUCHMECHANISMEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_NOSUCHMECHANISMEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::NoSuchMechanismException : public jni::object_base<"javax/xml/crypto/NoSuchMechanismException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<javax::xml::crypto::NoSuchMechanismException> new_object() { return base_::new_object(); }
	static jni::ref<javax::xml::crypto::NoSuchMechanismException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::crypto::NoSuchMechanismException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::xml::crypto::NoSuchMechanismException> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Throwable> getCause() { return call_method<"getCause", jni::ref<java::lang::Throwable>>(); }
	void printStackTrace() { return call_method<"printStackTrace", void>(); }
	void printStackTrace(jni::ref<java::io::PrintStream> p1) { return call_method<"printStackTrace", void>(p1); }
	void printStackTrace(jni::ref<java::io::PrintWriter> p1) { return call_method<"printStackTrace", void>(p1); }

protected:

	NoSuchMechanismException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_NOSUCHMECHANISMEXCEPTION
