// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ObjectInputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM_MARSHALOBJECTINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM_MARSHALOBJECTINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class IDLJavaSerializationInputStream_MarshalObjectInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::IDLJavaSerializationInputStream_MarshalObjectInputStream>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/IDLJavaSerializationInputStream$MarshalObjectInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::ObjectInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM_MARSHALOBJECTINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM_MARSHALOBJECTINPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM_MARSHALOBJECTINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::encoding::IDLJavaSerializationInputStream_MarshalObjectInputStream : public jni::object_base<"com/sun/corba/se/impl/encoding/IDLJavaSerializationInputStream$MarshalObjectInputStream",
	java::io::ObjectInputStream>
{
public:


protected:

	IDLJavaSerializationInputStream_MarshalObjectInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_IDLJAVASERIALIZATIONINPUTSTREAM_MARSHALOBJECTINPUTSTREAM