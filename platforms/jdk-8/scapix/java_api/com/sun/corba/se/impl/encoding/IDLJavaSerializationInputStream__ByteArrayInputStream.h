// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ByteArrayInputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM__BYTEARRAYINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM__BYTEARRAYINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class IDLJavaSerializationInputStream__ByteArrayInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::IDLJavaSerializationInputStream__ByteArrayInputStream>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/IDLJavaSerializationInputStream$_ByteArrayInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::ByteArrayInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM__BYTEARRAYINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM__BYTEARRAYINPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM__BYTEARRAYINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::encoding::IDLJavaSerializationInputStream__ByteArrayInputStream : public jni::object_base<"com/sun/corba/se/impl/encoding/IDLJavaSerializationInputStream$_ByteArrayInputStream",
	java::io::ByteArrayInputStream>
{
public:


protected:

	IDLJavaSerializationInputStream__ByteArrayInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM__BYTEARRAYINPUTSTREAM
