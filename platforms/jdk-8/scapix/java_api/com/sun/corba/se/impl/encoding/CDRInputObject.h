// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/encoding/CDRInputStream.h>
#include <scapix/java_api/com/sun/corba/se/pept/encoding/InputObject.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTOBJECT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class CDRInputObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::CDRInputObject>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/CDRInputObject";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::encoding::CDRInputStream, scapix::java_api::com::sun::corba::se::pept::encoding::InputObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTOBJECT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/Message.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaConnection.h>
#include <scapix/java_api/com/sun/org/omg/SendingContext/CodeBase.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::encoding::CDRInputObject : public jni::object_base<"com/sun/corba/se/impl/encoding/CDRInputObject",
	com::sun::corba::se::impl::encoding::CDRInputStream,
	com::sun::corba::se::pept::encoding::InputObject>
{
public:

	static jni::ref<com::sun::corba::se::impl::encoding::CDRInputObject> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::spi::transport::CorbaConnection> p2, jni::ref<java::nio::ByteBuffer> p3, jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::Message> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<com::sun::corba::se::spi::transport::CorbaConnection> getConnection() { return call_method<"getConnection", jni::ref<com::sun::corba::se::spi::transport::CorbaConnection>>(); }
	jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::Message> getMessageHeader() { return call_method<"getMessageHeader", jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::Message>>(); }
	void unmarshalHeader() { return call_method<"unmarshalHeader", void>(); }
	jboolean unmarshaledHeader() { return call_method<"unmarshaledHeader", jboolean>(); }
	jni::ref<com::sun::org::omg::SendingContext::CodeBase> getCodeBase() { return call_method<"getCodeBase", jni::ref<com::sun::org::omg::SendingContext::CodeBase>>(); }
	jni::ref<com::sun::corba::se::impl::encoding::CDRInputStream> dup() { return call_method<"dup", jni::ref<com::sun::corba::se::impl::encoding::CDRInputStream>>(); }

protected:

	CDRInputObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTOBJECT
