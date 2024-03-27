// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/Message_1_1.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/ReplyMessage.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_REPLYMESSAGE_1_1_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_REPLYMESSAGE_1_1_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::protocol::giopmsgheaders { class ReplyMessage_1_1; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::protocol::giopmsgheaders::ReplyMessage_1_1>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/protocol/giopmsgheaders/ReplyMessage_1_1";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::protocol::giopmsgheaders::Message_1_1, scapix::java_api::com::sun::corba::se::impl::protocol::giopmsgheaders::ReplyMessage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_REPLYMESSAGE_1_1_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_REPLYMESSAGE_1_1)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_REPLYMESSAGE_1_1

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/MessageHandler.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/servicecontext/ServiceContexts.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/SystemException.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::protocol::giopmsgheaders::ReplyMessage_1_1 : public jni::object_base<"com/sun/corba/se/impl/protocol/giopmsgheaders/ReplyMessage_1_1",
	com::sun::corba::se::impl::protocol::giopmsgheaders::Message_1_1,
	com::sun::corba::se::impl::protocol::giopmsgheaders::ReplyMessage>
{
public:

	jint getRequestId() { return call_method<"getRequestId", jint>(); }
	jint getReplyStatus() { return call_method<"getReplyStatus", jint>(); }
	jshort getAddrDisposition() { return call_method<"getAddrDisposition", jshort>(); }
	jni::ref<com::sun::corba::se::spi::servicecontext::ServiceContexts> getServiceContexts() { return call_method<"getServiceContexts", jni::ref<com::sun::corba::se::spi::servicecontext::ServiceContexts>>(); }
	void setServiceContexts(jni::ref<com::sun::corba::se::spi::servicecontext::ServiceContexts> p1) { return call_method<"setServiceContexts", void>(p1); }
	jni::ref<org::omg::CORBA::SystemException> getSystemException(jni::ref<java::lang::String> p1) { return call_method<"getSystemException", jni::ref<org::omg::CORBA::SystemException>>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::IOR> getIOR() { return call_method<"getIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(); }
	void setIOR(jni::ref<com::sun::corba::se::spi::ior::IOR> p1) { return call_method<"setIOR", void>(p1); }
	void read(jni::ref<org::omg::CORBA::portable::InputStream> p1) { return call_method<"read", void>(p1); }
	void write(jni::ref<org::omg::CORBA::portable::OutputStream> p1) { return call_method<"write", void>(p1); }
	static void isValidReplyStatus(jint p1) { return call_static_method<"isValidReplyStatus", void>(p1); }
	void callback(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::MessageHandler> p1) { return call_method<"callback", void>(p1); }

protected:

	ReplyMessage_1_1(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_REPLYMESSAGE_1_1
