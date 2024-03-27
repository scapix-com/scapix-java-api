// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/Message.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_LOCATEREPLYORREPLYMESSAGE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_LOCATEREPLYORREPLYMESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::protocol::giopmsgheaders { class LocateReplyOrReplyMessage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::protocol::giopmsgheaders::LocateReplyOrReplyMessage>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/protocol/giopmsgheaders/LocateReplyOrReplyMessage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::impl::protocol::giopmsgheaders::Message>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_LOCATEREPLYORREPLYMESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_LOCATEREPLYORREPLYMESSAGE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_LOCATEREPLYORREPLYMESSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/SystemException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::protocol::giopmsgheaders::LocateReplyOrReplyMessage : public jni::object_base<"com/sun/corba/se/impl/protocol/giopmsgheaders/LocateReplyOrReplyMessage",
	java::lang::Object,
	com::sun::corba::se::impl::protocol::giopmsgheaders::Message>
{
public:

	jint getRequestId() { return call_method<"getRequestId", jint>(); }
	jint getReplyStatus() { return call_method<"getReplyStatus", jint>(); }
	jni::ref<org::omg::CORBA::SystemException> getSystemException(jni::ref<java::lang::String> p1) { return call_method<"getSystemException", jni::ref<org::omg::CORBA::SystemException>>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::IOR> getIOR() { return call_method<"getIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(); }
	jshort getAddrDisposition() { return call_method<"getAddrDisposition", jshort>(); }

protected:

	LocateReplyOrReplyMessage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_LOCATEREPLYORREPLYMESSAGE