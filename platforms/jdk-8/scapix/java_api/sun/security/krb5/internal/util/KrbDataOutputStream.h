// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/BufferedOutputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KRBDATAOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KRBDATAOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::util { class KrbDataOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::util::KrbDataOutputStream>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/util/KrbDataOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::BufferedOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KRBDATAOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KRBDATAOUTPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KRBDATAOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::util::KrbDataOutputStream : public jni::object_base<"sun/security/krb5/internal/util/KrbDataOutputStream",
	java::io::BufferedOutputStream>
{
public:

	static jni::ref<sun::security::krb5::internal::util::KrbDataOutputStream> new_object(jni::ref<java::io::OutputStream> p1) { return base_::new_object(p1); }
	void write32(jint p1) { return call_method<"write32", void>(p1); }
	void write16(jint p1) { return call_method<"write16", void>(p1); }
	void write8(jint p1) { return call_method<"write8", void>(p1); }

protected:

	KrbDataOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KRBDATAOUTPUTSTREAM
