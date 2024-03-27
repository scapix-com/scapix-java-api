// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ByteArrayOutputStream.h>
#include <scapix/java_api/sun/security/util/DerEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEROUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEROUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class DerOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::DerOutputStream>
{
	static constexpr fixed_string class_name = "sun/security/util/DerOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::ByteArrayOutputStream, scapix::java_api::sun::security::util::DerEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEROUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEROUTPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEROUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/sun/security/util/BitArray.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#include <scapix/java_api/sun/security/util/ObjectIdentifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::DerOutputStream : public jni::object_base<"sun/security/util/DerOutputStream",
	java::io::ByteArrayOutputStream,
	sun::security::util::DerEncoder>
{
public:

	static jni::ref<sun::security::util::DerOutputStream> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::util::DerOutputStream> new_object() { return base_::new_object(); }
	void write(jbyte p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"write", void>(p1, p2); }
	void write(jbyte p1, jni::ref<sun::security::util::DerOutputStream> p2) { return call_method<"write", void>(p1, p2); }
	void writeImplicit(jbyte p1, jni::ref<sun::security::util::DerOutputStream> p2) { return call_method<"writeImplicit", void>(p1, p2); }
	void putDerValue(jni::ref<sun::security::util::DerValue> p1) { return call_method<"putDerValue", void>(p1); }
	void putBoolean(jboolean p1) { return call_method<"putBoolean", void>(p1); }
	void putEnumerated(jint p1) { return call_method<"putEnumerated", void>(p1); }
	void putInteger(jni::ref<java::math::BigInteger> p1) { return call_method<"putInteger", void>(p1); }
	void putInteger(jni::ref<java::lang::Integer> p1) { return call_method<"putInteger", void>(p1); }
	void putInteger(jint p1) { return call_method<"putInteger", void>(p1); }
	void putBitString(jni::ref<jni::array<jbyte>> p1) { return call_method<"putBitString", void>(p1); }
	void putUnalignedBitString(jni::ref<sun::security::util::BitArray> p1) { return call_method<"putUnalignedBitString", void>(p1); }
	void putTruncatedUnalignedBitString(jni::ref<sun::security::util::BitArray> p1) { return call_method<"putTruncatedUnalignedBitString", void>(p1); }
	void putOctetString(jni::ref<jni::array<jbyte>> p1) { return call_method<"putOctetString", void>(p1); }
	void putNull() { return call_method<"putNull", void>(); }
	void putOID(jni::ref<sun::security::util::ObjectIdentifier> p1) { return call_method<"putOID", void>(p1); }
	void putSequence(jni::ref<jni::array<sun::security::util::DerValue>> p1) { return call_method<"putSequence", void>(p1); }
	void putSet(jni::ref<jni::array<sun::security::util::DerValue>> p1) { return call_method<"putSet", void>(p1); }
	void putOrderedSetOf(jbyte p1, jni::ref<jni::array<sun::security::util::DerEncoder>> p2) { return call_method<"putOrderedSetOf", void>(p1, p2); }
	void putOrderedSet(jbyte p1, jni::ref<jni::array<sun::security::util::DerEncoder>> p2) { return call_method<"putOrderedSet", void>(p1, p2); }
	void putUTF8String(jni::ref<java::lang::String> p1) { return call_method<"putUTF8String", void>(p1); }
	void putPrintableString(jni::ref<java::lang::String> p1) { return call_method<"putPrintableString", void>(p1); }
	void putT61String(jni::ref<java::lang::String> p1) { return call_method<"putT61String", void>(p1); }
	void putIA5String(jni::ref<java::lang::String> p1) { return call_method<"putIA5String", void>(p1); }
	void putBMPString(jni::ref<java::lang::String> p1) { return call_method<"putBMPString", void>(p1); }
	void putGeneralString(jni::ref<java::lang::String> p1) { return call_method<"putGeneralString", void>(p1); }
	void putUTCTime(jni::ref<java::util::Date> p1) { return call_method<"putUTCTime", void>(p1); }
	void putGeneralizedTime(jni::ref<java::util::Date> p1) { return call_method<"putGeneralizedTime", void>(p1); }
	void putLength(jint p1) { return call_method<"putLength", void>(p1); }
	void putTag(jbyte p1, jboolean p2, jbyte p3) { return call_method<"putTag", void>(p1, p2, p3); }
	void derEncode(jni::ref<java::io::OutputStream> p1) { return call_method<"derEncode", void>(p1); }

protected:

	DerOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEROUTPUTSTREAM
