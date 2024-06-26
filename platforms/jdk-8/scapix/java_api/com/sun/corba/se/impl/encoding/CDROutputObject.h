// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/encoding/CorbaOutputObject.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTOBJECT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class CDROutputObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::CDROutputObject>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/CDROutputObject";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::encoding::CorbaOutputObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTOBJECT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/encoding/ByteBufferWithInfo.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/Message.h>
#include <scapix/java_api/com/sun/corba/se/pept/protocol/MessageMediator.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/GIOPVersion.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/CorbaMessageMediator.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaConnection.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::encoding::CDROutputObject : public jni::object_base<"com/sun/corba/se/impl/encoding/CDROutputObject",
	com::sun::corba::se::spi::encoding::CorbaOutputObject>
{
public:

	static jni::ref<com::sun::corba::se::impl::encoding::CDROutputObject> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p2, jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::Message> p3, jbyte p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<com::sun::corba::se::impl::encoding::CDROutputObject> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p2, jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::Message> p3, jbyte p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<com::sun::corba::se::impl::encoding::CDROutputObject> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::spi::protocol::CorbaMessageMediator> p2, jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion> p3, jni::ref<com::sun::corba::se::spi::transport::CorbaConnection> p4, jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::Message> p5, jbyte p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::Message> getMessageHeader() { return call_method<"getMessageHeader", jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::Message>>(); }
	void finishSendingMessage() { return call_method<"finishSendingMessage", void>(); }
	void writeTo(jni::ref<com::sun::corba::se::spi::transport::CorbaConnection> p1) { return call_method<"writeTo", void>(p1); }
	jni::ref<org::omg::CORBA::portable::InputStream> create_input_stream() { return call_method<"create_input_stream", jni::ref<org::omg::CORBA::portable::InputStream>>(); }
	jni::ref<com::sun::corba::se::spi::transport::CorbaConnection> getConnection() { return call_method<"getConnection", jni::ref<com::sun::corba::se::spi::transport::CorbaConnection>>(); }
	jni::ref<com::sun::corba::se::impl::encoding::ByteBufferWithInfo> getByteBufferWithInfo() { return call_method<"getByteBufferWithInfo", jni::ref<com::sun::corba::se::impl::encoding::ByteBufferWithInfo>>(); }
	void setByteBufferWithInfo(jni::ref<com::sun::corba::se::impl::encoding::ByteBufferWithInfo> p1) { return call_method<"setByteBufferWithInfo", void>(p1); }

protected:

	CDROutputObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTOBJECT
