// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_SERIALNUMBER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_SERIALNUMBER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class SerialNumber; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::SerialNumber>
{
	static constexpr fixed_string class_name = "sun/security/x509/SerialNumber";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_SERIALNUMBER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_SERIALNUMBER)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_SERIALNUMBER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/sun/security/util/DerInputStream.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::SerialNumber : public jni::object_base<"sun/security/x509/SerialNumber",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::x509::SerialNumber> new_object(jni::ref<java::math::BigInteger> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::SerialNumber> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::SerialNumber> new_object(jni::ref<sun::security::util::DerInputStream> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::SerialNumber> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::SerialNumber> new_object(jni::ref<java::io::InputStream> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<sun::security::util::DerOutputStream> p1) { return call_method<"encode", void>(p1); }
	jni::ref<java::math::BigInteger> getNumber() { return call_method<"getNumber", jni::ref<java::math::BigInteger>>(); }

protected:

	SerialNumber(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_SERIALNUMBER