// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAMBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAMBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class CDRInputStreamBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::CDRInputStreamBase>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/CDRInputStreamBase";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAMBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAMBASE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAMBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/encoding/BufferManagerRead.h>
#include <scapix/java_api/com/sun/corba/se/impl/encoding/ByteBufferWithInfo.h>
#include <scapix/java_api/com/sun/corba/se/impl/encoding/CDRInputStream.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/GIOPVersion.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/AnySeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/BooleanSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/CharSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/Context.h>
#include <scapix/java_api/org/omg/CORBA/DoubleSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/FloatSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/LongLongSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/LongSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/OctetSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/Principal.h>
#include <scapix/java_api/org/omg/CORBA/ShortSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/ULongLongSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/ULongSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/UShortSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/WCharSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA/portable/BoxedValueHelper.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::encoding::CDRInputStreamBase : public jni::object_base<"com/sun/corba/se/impl/encoding/CDRInputStreamBase",
	java::io::InputStream>
{
public:

	void setParent(jni::ref<com::sun::corba::se::impl::encoding::CDRInputStream> p1) { return call_method<"setParent", void>(p1); }
	void init(jni::ref<org::omg::CORBA::ORB> p1, jni::ref<java::nio::ByteBuffer> p2, jint p3, jboolean p4, jni::ref<com::sun::corba::se::impl::encoding::BufferManagerRead> p5) { return call_method<"init", void>(p1, p2, p3, p4, p5); }
	jboolean read_boolean() { return call_method<"read_boolean", jboolean>(); }
	jchar read_char() { return call_method<"read_char", jchar>(); }
	jchar read_wchar() { return call_method<"read_wchar", jchar>(); }
	jbyte read_octet() { return call_method<"read_octet", jbyte>(); }
	jshort read_short() { return call_method<"read_short", jshort>(); }
	jshort read_ushort() { return call_method<"read_ushort", jshort>(); }
	jint read_long() { return call_method<"read_long", jint>(); }
	jint read_ulong() { return call_method<"read_ulong", jint>(); }
	jlong read_longlong() { return call_method<"read_longlong", jlong>(); }
	jlong read_ulonglong() { return call_method<"read_ulonglong", jlong>(); }
	jfloat read_float() { return call_method<"read_float", jfloat>(); }
	jdouble read_double() { return call_method<"read_double", jdouble>(); }
	jni::ref<java::lang::String> read_string() { return call_method<"read_string", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> read_wstring() { return call_method<"read_wstring", jni::ref<java::lang::String>>(); }
	void read_boolean_array(jni::ref<jni::array<jboolean>> p1, jint p2, jint p3) { return call_method<"read_boolean_array", void>(p1, p2, p3); }
	void read_char_array(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"read_char_array", void>(p1, p2, p3); }
	void read_wchar_array(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"read_wchar_array", void>(p1, p2, p3); }
	void read_octet_array(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read_octet_array", void>(p1, p2, p3); }
	void read_short_array(jni::ref<jni::array<jshort>> p1, jint p2, jint p3) { return call_method<"read_short_array", void>(p1, p2, p3); }
	void read_ushort_array(jni::ref<jni::array<jshort>> p1, jint p2, jint p3) { return call_method<"read_ushort_array", void>(p1, p2, p3); }
	void read_long_array(jni::ref<jni::array<jint>> p1, jint p2, jint p3) { return call_method<"read_long_array", void>(p1, p2, p3); }
	void read_ulong_array(jni::ref<jni::array<jint>> p1, jint p2, jint p3) { return call_method<"read_ulong_array", void>(p1, p2, p3); }
	void read_longlong_array(jni::ref<jni::array<jlong>> p1, jint p2, jint p3) { return call_method<"read_longlong_array", void>(p1, p2, p3); }
	void read_ulonglong_array(jni::ref<jni::array<jlong>> p1, jint p2, jint p3) { return call_method<"read_ulonglong_array", void>(p1, p2, p3); }
	void read_float_array(jni::ref<jni::array<jfloat>> p1, jint p2, jint p3) { return call_method<"read_float_array", void>(p1, p2, p3); }
	void read_double_array(jni::ref<jni::array<jdouble>> p1, jint p2, jint p3) { return call_method<"read_double_array", void>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::Object> read_Object() { return call_method<"read_Object", jni::ref<org::omg::CORBA::Object>>(); }
	jni::ref<org::omg::CORBA::TypeCode> read_TypeCode() { return call_method<"read_TypeCode", jni::ref<org::omg::CORBA::TypeCode>>(); }
	jni::ref<org::omg::CORBA::Any> read_any() { return call_method<"read_any", jni::ref<org::omg::CORBA::Any>>(); }
	jni::ref<org::omg::CORBA::Principal> read_Principal() { return call_method<"read_Principal", jni::ref<org::omg::CORBA::Principal>>(); }
	jint read() { return call_method<"read", jint>(); }
	jni::ref<java::math::BigDecimal> read_fixed() { return call_method<"read_fixed", jni::ref<java::math::BigDecimal>>(); }
	jni::ref<org::omg::CORBA::Context> read_Context() { return call_method<"read_Context", jni::ref<org::omg::CORBA::Context>>(); }
	jni::ref<org::omg::CORBA::Object> read_Object(jni::ref<java::lang::Class> p1) { return call_method<"read_Object", jni::ref<org::omg::CORBA::Object>>(p1); }
	jni::ref<org::omg::CORBA::ORB> orb() { return call_method<"orb", jni::ref<org::omg::CORBA::ORB>>(); }
	jni::ref<java::io::Serializable> read_value() { return call_method<"read_value", jni::ref<java::io::Serializable>>(); }
	jni::ref<java::io::Serializable> read_value(jni::ref<java::lang::Class> p1) { return call_method<"read_value", jni::ref<java::io::Serializable>>(p1); }
	jni::ref<java::io::Serializable> read_value(jni::ref<org::omg::CORBA::portable::BoxedValueHelper> p1) { return call_method<"read_value", jni::ref<java::io::Serializable>>(p1); }
	jni::ref<java::io::Serializable> read_value(jni::ref<java::lang::String> p1) { return call_method<"read_value", jni::ref<java::io::Serializable>>(p1); }
	jni::ref<java::io::Serializable> read_value(jni::ref<java::io::Serializable> p1) { return call_method<"read_value", jni::ref<java::io::Serializable>>(p1); }
	jni::ref<java::lang::Object> read_abstract_interface() { return call_method<"read_abstract_interface", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> read_abstract_interface(jni::ref<java::lang::Class> p1) { return call_method<"read_abstract_interface", jni::ref<java::lang::Object>>(p1); }
	void consumeEndian() { return call_method<"consumeEndian", void>(); }
	jint getPosition() { return call_method<"getPosition", jint>(); }
	jni::ref<java::lang::Object> read_Abstract() { return call_method<"read_Abstract", jni::ref<java::lang::Object>>(); }
	jni::ref<java::io::Serializable> read_Value() { return call_method<"read_Value", jni::ref<java::io::Serializable>>(); }
	void read_any_array(jni::ref<org::omg::CORBA::AnySeqHolder> p1, jint p2, jint p3) { return call_method<"read_any_array", void>(p1, p2, p3); }
	void read_boolean_array(jni::ref<org::omg::CORBA::BooleanSeqHolder> p1, jint p2, jint p3) { return call_method<"read_boolean_array", void>(p1, p2, p3); }
	void read_char_array(jni::ref<org::omg::CORBA::CharSeqHolder> p1, jint p2, jint p3) { return call_method<"read_char_array", void>(p1, p2, p3); }
	void read_wchar_array(jni::ref<org::omg::CORBA::WCharSeqHolder> p1, jint p2, jint p3) { return call_method<"read_wchar_array", void>(p1, p2, p3); }
	void read_octet_array(jni::ref<org::omg::CORBA::OctetSeqHolder> p1, jint p2, jint p3) { return call_method<"read_octet_array", void>(p1, p2, p3); }
	void read_short_array(jni::ref<org::omg::CORBA::ShortSeqHolder> p1, jint p2, jint p3) { return call_method<"read_short_array", void>(p1, p2, p3); }
	void read_ushort_array(jni::ref<org::omg::CORBA::UShortSeqHolder> p1, jint p2, jint p3) { return call_method<"read_ushort_array", void>(p1, p2, p3); }
	void read_long_array(jni::ref<org::omg::CORBA::LongSeqHolder> p1, jint p2, jint p3) { return call_method<"read_long_array", void>(p1, p2, p3); }
	void read_ulong_array(jni::ref<org::omg::CORBA::ULongSeqHolder> p1, jint p2, jint p3) { return call_method<"read_ulong_array", void>(p1, p2, p3); }
	void read_ulonglong_array(jni::ref<org::omg::CORBA::ULongLongSeqHolder> p1, jint p2, jint p3) { return call_method<"read_ulonglong_array", void>(p1, p2, p3); }
	void read_longlong_array(jni::ref<org::omg::CORBA::LongLongSeqHolder> p1, jint p2, jint p3) { return call_method<"read_longlong_array", void>(p1, p2, p3); }
	void read_float_array(jni::ref<org::omg::CORBA::FloatSeqHolder> p1, jint p2, jint p3) { return call_method<"read_float_array", void>(p1, p2, p3); }
	void read_double_array(jni::ref<org::omg::CORBA::DoubleSeqHolder> p1, jint p2, jint p3) { return call_method<"read_double_array", void>(p1, p2, p3); }
	jni::ref<jni::array<java::lang::String>> _truncatable_ids() { return call_method<"_truncatable_ids", jni::ref<jni::array<java::lang::String>>>(); }
	void mark(jint p1) { return call_method<"mark", void>(p1); }
	void reset() { return call_method<"reset", void>(); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	jni::ref<com::sun::corba::se::impl::encoding::CDRInputStreamBase> dup() { return call_method<"dup", jni::ref<com::sun::corba::se::impl::encoding::CDRInputStreamBase>>(); }
	jni::ref<java::math::BigDecimal> read_fixed(jshort p1, jshort p2) { return call_method<"read_fixed", jni::ref<java::math::BigDecimal>>(p1, p2); }
	jboolean isLittleEndian() { return call_method<"isLittleEndian", jboolean>(); }
	jni::ref<java::nio::ByteBuffer> getByteBuffer() { return call_method<"getByteBuffer", jni::ref<java::nio::ByteBuffer>>(); }
	void setByteBuffer(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"setByteBuffer", void>(p1); }
	void setByteBufferWithInfo(jni::ref<com::sun::corba::se::impl::encoding::ByteBufferWithInfo> p1) { return call_method<"setByteBufferWithInfo", void>(p1); }
	jint getBufferLength() { return call_method<"getBufferLength", jint>(); }
	void setBufferLength(jint p1) { return call_method<"setBufferLength", void>(p1); }
	jint getIndex() { return call_method<"getIndex", jint>(); }
	void setIndex(jint p1) { return call_method<"setIndex", void>(p1); }
	void orb(jni::ref<org::omg::CORBA::ORB> p1) { return call_method<"orb", void>(p1); }
	jni::ref<com::sun::corba::se::impl::encoding::BufferManagerRead> getBufferManager() { return call_method<"getBufferManager", jni::ref<com::sun::corba::se::impl::encoding::BufferManagerRead>>(); }
	jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion> getGIOPVersion() { return call_method<"getGIOPVersion", jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion>>(); }
	void resetCodeSetConverters() { return call_method<"resetCodeSetConverters", void>(); }
	void start_value() { return call_method<"start_value", void>(); }
	void end_value() { return call_method<"end_value", void>(); }

protected:

	CDRInputStreamBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAMBASE
