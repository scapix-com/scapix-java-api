// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ByteArrayInputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_SIGNATURE_MYBYTEARRAYINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_SIGNATURE_MYBYTEARRAYINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class Signature_MyByteArrayInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::Signature_MyByteArrayInputStream>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/Signature$MyByteArrayInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::ByteArrayInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_SIGNATURE_MYBYTEARRAYINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_SIGNATURE_MYBYTEARRAYINPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_SIGNATURE_MYBYTEARRAYINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::bcel::internal::classfile::Signature_MyByteArrayInputStream : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/Signature$MyByteArrayInputStream",
	java::io::ByteArrayInputStream>
{
public:


protected:

	Signature_MyByteArrayInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_SIGNATURE_MYBYTEARRAYINPUTSTREAM
